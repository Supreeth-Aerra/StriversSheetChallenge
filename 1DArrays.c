/*#include<stdio.h>
int main(){
    int temp;
    int arr[]={101,30,50,43,65,92,87,2,8};
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
            if(arr[j]<arr[i]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    for(int i=0;i<=7;i++){
        printf("%d ",arr[i]);
    }
return 0;
}*/
//Supreeth
//searching key in the Array
/*#include<stdio.h>
int main(){
    int key;
    int arr[]={1,3,4,5,6,7,8,10};
    for(int i=0;i<=7;i++){
        printf("%d ",arr[i]);
    }
    printf("\nEnter the Key");
    scanf("%d",&key);
    for(int i=0;i<=7;i++){
        if(arr[i]==key)
            printf("%d key available in the Array",key);
    }
    return 0;
    printf("Not Available");
    return 0;
}*/
//Smallest and Largest elements in the Array
/*#include<stdio.h>
int main(){
    int arr[40],size,temp;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    printf("Enter %d elements into the array.\n",size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        printf("%d->%d ",i,arr[i]);
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nPrint the array after sorting =>");
    for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
    }
    printf("\nSmallest Element in  the array is : %d",arr[0]);
    printf("\nLargest Element in the array is : %d",arr[size-1]);
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int arr[] = {10,23,45,67,2,14,5,76,35};
    int max = arr[0];
    for(int i=0;i<8;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("Smallest Value in the Array : %d\n",max);
    for(int i=0;i<8;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int arr[] = {2,5,67,22,53,1,0,46,38};
    int temp=arr[0];
    printf("SIZE OF THE ARRAY : %d\n",sizeof(arr)/sizeof(arr[0]));
    for(int i=0;i<8;i++){
        arr[i]=arr[i+1];
        if(i==7)
            break;
    }
    arr[7]=temp;
    for(int i=0;i<8;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}*/
#include<stdio.h>
int main(){
    int arr[40],size;
    printf("Enter the size of the array : \n");
    scanf("%d",&size);
    printf("enter the elements in the array\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d element => %d\n",i+1,arr[i]);
    }
    return 0;
}
