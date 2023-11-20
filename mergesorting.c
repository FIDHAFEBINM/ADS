#include<stdio.h>
void main()
{
int s,n,m,i,j,k,a[100],b[100],c[100];

printf("enter the size of array");
scanf("%d",&n);
printf("enter the first sorted array values");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the size of array two");
scanf("%d",&m);
printf("enter second sorted array values");
for(j=0;j<m;j++){
scanf("%d",&b[j]);
}
printf("the first sorted array")
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("the second sorted array");
for(j=0;j<n;j++)
{
printf("%d",b[j]);
}
i=j=0;
k=0;
s=m+n;
while(i<n & j<m)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
k++;
}
else
{
c[k]=b[j];
j++;
k++;
