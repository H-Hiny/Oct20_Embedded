#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 10


int LongestOcc(int* arr, int key)
{


    int i;
    int maxcount=0;
    int count=0;
    for(i=0;i< ARRAY_SIZE; i++)
    {
        if(arr[i]==key)
        {
            count++;
        }
        else
        {
            count=0;
        }
        if (count>maxcount)
        {
            maxcount=count;
        }
    }
    return maxcount;

}




int main()
{
    int j;
    int arr[ARRAY_SIZE];
    int key;
    printf("Enter the array: \n");
    for(j=0; j<ARRAY_SIZE; j++)
    {
        scanf("%d",&arr[j]);
    }
    printf("Enter key to find the last occurence:\n");
    scanf("%d",&key );
    int z=LongestOcc(arr, key);
    printf("the number of the occurence is %d",z);
    return 0;
}
