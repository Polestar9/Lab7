#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sizeinput() 
{
int size;
printf("Enter the size of the array: ");
scanf("%d", &size);    
if (size <= 0) 
{
printf("Invalid array size. Size must be greater than 0.\n");
return 0;
}
return size;
}

void array(int arr[], int size) 
{
for (int i = 0; i < size; i++) 
{
arr[i] = rand() % 201-100;
}
}

void arrayoutput(int arr[], int size) 
{
for (int i = 0; i < size; i++) 
{
printf("%d ", arr[i]);
}
printf("\n");
}

int zerocounter(int arr[], int size) 
{
int count = 0;
for (int i=0;i<size;i++) 
{
if (arr[i] == 0) 
{
count++;
}
}
return count;
}

int Productofaftermaxabsolute(int arr[], int size) 
{
int maxAbsoluteIndex = 0;
for (int i=1;i<size;i++) 
{
if (abs(arr[i]) > abs(arr[maxAbsoluteIndex])) 
{
maxAbsoluteIndex = i;
}
}

int product = 1;
for (int i=maxAbsoluteIndex+1;i<size;i++) 
{
product *= arr[i];
}
return product;
}

int main() 
{
int size = sizeinput();
int arr[size];
srand(time(0));    
if (size <= 0) 
{
return 0;
}    
array(arr, size);    
printf("Array: ");
arrayoutput(arr, size);    
int zeroCount = zerocounter(arr, size);
printf("Number of zeros: %d\n", zeroCount);    
int productAfterMaxAbsolute = Productofaftermaxabsolute(arr, size);
printf("Product of elements after the maximum absolute element: %d\n", productAfterMaxAbsolute);
return 0;
}