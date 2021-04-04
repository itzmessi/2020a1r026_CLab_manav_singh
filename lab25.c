#include<stdio.h>  
#include<stdlib.h>  
int main(){  
  int n,i,*ptr,sum=0;    
    printf("Enter number of elements: ");    
    scanf("%d",&n);    
    ptr=(int*)malloc(n*sizeof(int));  //memory allocated using malloc    
    if(ptr==NULL)                         
    {    
        printf("Sorry! unable to allocate memory");    
        exit(0);    
    }    
    printf("Enter elements of array: ");    
    for(i=0;i<n;++i)    
    {    
        scanf("%d",ptr+i);    
        sum+=*(ptr+i);    
    }    
    printf("Sum=%d",sum);    
    free(ptr);     
return 0;  
}    
#include<stdio.h>  
#include<stdlib.h>  
int main(){  
 int n,i,*ptr,sum=0;    
    printf("Enter number of elements: ");    
    scanf("%d",&n);    
    ptr=(int*)calloc(n,sizeof(int));  //memory allocated using calloc    
    if(ptr==NULL)                         
    {    
        printf("Sorry! unable to allocate memory");    
        exit(0);    
    }    
    printf("Enter elements of array: ");    
    for(i=0;i<n;++i)    
    {    
        scanf("%d",ptr+i);    
        sum+=*(ptr+i);    
    }    
    printf("Sum=%d",sum);    
    free(ptr);    
return 0;  
}    
#include <stdio.h>
#include <stdlib.h>
  
int main()
{
  
    // This pointer will hold the
    // base address of the block created
    int *ptr, *ptr1;
    int n, i;
  
    // Get the number of elements for the array
    n = 5;
    printf("Enter number of elements: %d\n", n);
  
    // Dynamically allocate memory using malloc()
    ptr = (int*)malloc(n * sizeof(int));
  
    // Dynamically allocate memory using calloc()
    ptr1 = (int*)calloc(n, sizeof(int));
  
    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL || ptr1 == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
  
        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");
  
        // Free the memory
        free(ptr);
        printf("Malloc Memory successfully freed.\n");
  
        // Memory has been successfully allocated
        printf("\nMemory successfully allocated using calloc.\n");
  
        // Free the memory
        free(ptr1);
        printf("Calloc Memory successfully freed.\n");
    }
  
    return 0;
}
