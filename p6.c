#include<stdio.h>

int main()

{

int max,min,a[100],i=0,n;

printf("\nEnter the number of elements in the array=");

scanf("%d",&n);

printf("\nEnter the array elements:");

for(i=0;i<n;i++){

scanf("%d",&a[i]);

}

max = a[0];

min = a[0];

for(i=0;i<n;i++){

if(max<a[i]){

max = a[i];

}

}

for(i=0;i<n;i++){

if(min>a[i]){

min = a[i];

}

}

printf("\nMaximum value of array=%d",max);

printf("\nMinimum value of array=%d",min);

}
