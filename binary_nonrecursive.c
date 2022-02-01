#include<stdio.h>
#include<conio.h>
void main()
{
    int a[20], i, n, key, low, high, mid;
    printf("Give the number of elements\n");
    scanf("%d",&n);
    printf("Enter the array elements in ascending order\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the key element\n");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while(high >= low)
    {
        mid = (low + high) / 2;
        if(key == a[mid])
            break;
        else
        { 
            if(key > a[mid])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    if(key == a[mid])
        printf("The key element is found at location %d", mid + 1);
    else
        printf("the key element is not found\n");
}
/*Output:
Give the number of elements
5
Enter the array elements in ascending order
23
24
25
26
27
Enter the key element
24
The key element is found at location 2

Give the number of elements
3
Enter the array elements in ascending order
1 2 3
Enter the key element
0
the key element is not found
*/
