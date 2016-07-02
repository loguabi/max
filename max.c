#include<stdio.h>
int findMaximum(int arr[],int low,int high)
{
int max=arr[low];
int i;
for(i=low;i<=high);i++)
{
if(arr[i]>max)
max=arr[i];
}
retuen max;
}
int main()
{
int arr[]={1,30,40,59,60,70,23,5);
int n=sizeof(arr)/sizeof(arr[0]);
printf("The maximum element is %d", findMaximum(arr,0, n-1));
getchar();
return 0;
}
