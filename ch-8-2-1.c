#include<stdio.h>
int main()
{
	int size1, size2;
	
    printf("Enter Array 1 Size: ");
    scanf("%d", &size1);
    printf("\nEnter Array 2 Size: ");
    scanf("%d", &size2);
    
    int arr1[size1], arr2[size2], i, k, merge[100];
    
    printf("Enter Array 1 Elements: ");
    
    for(i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
        merge[i] = arr1[i];
    }
    
    k = i;
    printf("Enter Array 2 Elements: ");
    
    for(i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
        merge[k] = arr2[i];
        k++;
    }
    
    printf("\nThe new array after merging is:\n");
    for(i=0; i<k; i++)
	{
        printf("%d ", merge[i]);
    }
}
