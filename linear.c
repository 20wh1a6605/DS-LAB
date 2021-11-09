#include<stdio.h>
int main(){
    int a[100],i,key,j;
    printf("Number of elements");
    scanf("%d\n",&i);
    printf("The elements\n");
    for(j=0;j<i;j++){
        scanf("%d",&a[j]);
    }
    printf("Give key\n");
    scanf("%d\n",&key);
    for(j=0;j<i;j++){
        if(a[j] == key){
            printf("found = %d\n",j);
        }
        else{
            printf("not found\n");
        }
    }    
}