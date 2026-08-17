#include<stdio.h>
int main()
{
int arr[]={10,20,30,40,50};
int n=5;
int largest,second;
for(int i=0;i<n;i++)
{
if(arr[i]>largest)
{
second=largest;
largest=arr[i];
}
else if (arr[i]>second && arr[i]!=largest)
{
second=arr[i];
}
}
printf("second largest number=%d",second);
return 0;
}
