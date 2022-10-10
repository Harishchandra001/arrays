// C program to insert an element in an array 

#include <stdio.h>
int main()
{
int n=5;
scanf("%d",&n);
int arr[n];
int i;
for(i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}
int pos;
scanf("%d",&pos);
int ele;
scanf("%d",&ele);
if(pos > n)
printf("Invalid Input");
else
{
for(i=0; i<= pos-1; i++)
arr[i+1] = arr[i];

arr[pos-1] = ele;

printf("Array after insertion is:\n");

for (i = 0;i<=ele;i++)
printf("%d   ", arr[i]);
}

return 0;
}
