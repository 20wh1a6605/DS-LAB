#include<stdio.h>
int binary(int a[],int key, int low, int high){
    while(high >= low){
        int mid = (high + low)/2;
        if(a[mid] == key){
            return mid;
        }
        else if(a[mid] > key){
            high = mid - 1;
            return binary(a,key,low,high);
        }
        else if(a[mid]<key){
            low = mid + 1;
            return binary(a,key,low,high);
        } 
        else if(low>high){ 
            return -1;  
        }
    }
    
}
int main(){
    int a;
    printf("Give number of elements\n");
    scanf("%d",&a);
    int arr[100],i,j,key,pos;
    printf("Give array elements\n");
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    printf("key\n");
    scanf("%d",&key);
    pos = binary(arr,key,0,a-1);
    if(pos == -1){
        printf("Not there\n");
    }
    else{
        printf("%d = postion",pos);
    }
}