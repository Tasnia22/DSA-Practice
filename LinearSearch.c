#include<stdio.h>
int search(int arr[],int n,int x)
{

    for(int i= 0;i<n;i++)
        if(arr[i]== x)
        return i;
    return -1;
}
int main()
{

    int arr[]={200,-1,0,36,33};
    int x= 99;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = search(arr,n,x);
    (result==-1)
    ? printf("Element is not found\n")
    : printf("Element is present at index :%d\n",result);
    return 0;
}
