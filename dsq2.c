#include<stdio.h>
int main()
{
int a[]={1,2,4,7,5,2,5,2};
int n=8;
int maxcount=0,mostrepeated;
for(int i=0;i<n;i++)
{
int count = 0;
for(int j=0;j<n;j++)
{
if(a[i]==a[j])
{
count++;
}
}
if(count>maxcount)
{
maxcount=count;
mostrepeated=a[i];
}
}
printf("mostrepeated number=%d",mostrepeated);
return 0;
}
