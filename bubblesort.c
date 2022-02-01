#include<stdio.h>    
 void print(int a[], int n)
    {  
    int i;  
    for(i = 0; i < n; i++)    
    {    
        printf("%d ",a[i]);    
    }        
    }  
 void bubble(int a[], int n)
 {  
   int i, j, temp;  
   for(i = 0; i < n; i++)    
    {    
      for(j = i+1; j < n; j++)    
        {    
            if(a[j] < a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
 }  
void main ()    
{    
    int i, j,temp;     
    int n;
    printf("Give the number of ele\n");
    scanf("%d",&n);
    int a[n];
    printf("Give the ele\n");
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    bubble(a, n);  
    printf("\nAfter sorting array elements are - \n");    
    print(a, n);  
} 
/*Output
Give the number of ele
5
Give the ele
23
1451
43
5
0

After sorting array elements are - 
0 5 23 43 1451 
*/