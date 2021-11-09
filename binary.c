#include<stdio.h>
int binary(int a[],int key, int low, int high){
    int mid = (high + low)/2;
    while(high >= low){
        if(a[mid] == key){
            return mid;
        }
        else if(a[mid] > key){
            low = mid + 1;
            return binary(a,key,low,high);
        }
        else{
            high = mid - 1;
            return binary(a,key,low,high);
        }
        
    }
    return -1;
}
int main(){
    int a;
    printf("Give elements number");
    scanf("%d\n",&a);
    int arr[100],i,j,key,pos;
    printf("Give array elements");
    for(i=0;i<a;i++){
        scanf("%d\n",&arr[i]);
    }
    printf("key\n");
    scanf("%d\n",&key);
    pos = binary(arr,key,0,a-1);
    if(pos == -1){
        printf("Not there\n");
    }
    else{
        printf("%d = postion",pos);
    }
}