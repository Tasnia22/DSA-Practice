#include<stdio.h>
#define SIZE 5

int LS(int array[],int Size,int key)
{

    int i;

    for(i=0;i<SIZE; i++)
        if(array[i] == key)
         return 1;

    return 0;
}

int main()
{
    int elements[SIZE]={23,7,80,92,0};
     int Key = 9;

     if(LS(elements,SIZE,Key)== 1)
        printf("Search found");
     else
        printf("Search not found");

     return 0;
}

