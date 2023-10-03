#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
int main()
{
    int i,key,n;
    int a[MAX_SIZE];
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements in the array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the element to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i] == key)
        {
            printf("\n%d is found in the location %d\n",key,i+1);
            exit(1);
        }
        
    }
    printf("%d is not found in the list",key);
    return 0;
}