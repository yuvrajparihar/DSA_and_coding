#include <stdio.h>
#include <stdlib.h>


struct Array
{
    int *A;
    int size;
    int length;
};

void display(struct Array arr)
{ int i;
 for(i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}
void append(struct Array *arr, int x)
{
    if (arr->length<arr->size)
    {
        arr->A[arr->length++]=x;
    }
}

void insert(struct Array *arr,int index,int x)
{
    int i ;
    if(index>=0 && index<= arr->length)
    {
        for(i=arr->length;i>index;i--)
        {
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}

int main()
{
    freopen("D:/OneDrive/vscode/io/input.txt", "r", stdin);
    freopen("D:/OneDrive/vscode/io/output.txt", "w", stdout);
    struct Array arr;
    int n, i;
    printf("enter size of array");

    scanf("%d", &arr.size);

    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;
    printf("\nEnter no. of numbers\n");
    scanf("%d", &n);
    arr.length=n;
    printf("enter all no.s\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr.A[i]);
    }
      append(&arr,5);
      insert(&arr,4,6);
      display(arr);
      
   
    return 0;
}