#include <stdio.h>
void indInsertation(int arr[],int size,int element, int index);
void display(int arr[],int size);
void delete(int arr[],int size,int index);

int main()
{
    int n,arr[100],size;
    printf("Enter the number of element present in array but less than 100=");
    scanf("%d",&size);
    printf("Enter the elements in the array\n");
    for(int i=0;i<size;i++){
        printf("%d index=",i);
        scanf("%d",&arr[i]);
    }
    display(arr,size);
    
    int index,element;
    printf("Enter the element to be inserted in array=");
    scanf("%d",&element);
    printf("Enter the index=");
    scanf("%d",&index);
    indInsertation(arr,size,element,index);
    size=size+1;
    display(arr,size);
    
    printf("Enter the element index which is to be Deleted=");
    scanf("%d",&index);
    delete(arr,size,index);
    size=size-1;
    display(arr,size);
    
    return 0;
}

//traversing of array
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

//Inserting element in array at the given index 
void indInsertation(int arr[],int size,int element,int index){
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
}

//Deleting element from given index 
void delete(int arr[],int size,int index){
    for(int i=index;i<size;i++){
        arr[i]=arr[i+1];
    }
}
