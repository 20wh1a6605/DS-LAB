#include<stdio.h>
int linear(int a[],int key,int i){
    if(a[i] == key){
        return i;
    }
    else{
        return linear(a,key,i+1);
    }
}
int main(){
    int a[100],i,key,j;
    printf("Number of elements\n");
    scanf("%d\n",&i);
    printf("The elements\n");
    for(j=0;j<=i;j++){
        scanf("%d",&a[j]);
    }
    printf("Give key\n");
    scanf("%d\n",&key);
    printf("%d\n",linear(a,key,0));
}