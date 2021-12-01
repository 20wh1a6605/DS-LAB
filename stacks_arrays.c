#include<stdio.h>
#include<stdlib.h>
#define size 5
int top = -1;
int stack[size];
void push(int ele){
    stack[++top] = ele;
    }
int pop(){
    return stack[top--];
    }
int peak(){
    return stack[top];
    }
void display(){
    int i;
    for(i= top;i>=0;i--){
        printf("%d\n",stack[i]);
        }
}
int main(){
    int ch;
    while(1){
        printf("1-push\n2-pop\n3-peek\n4-display\n5-exit\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                if(top == size-1){
                    printf("Stack overflow");
                    }
                else{
                    int ele;
                    printf("Enter ele to be inserted");
                    scanf("%d",&ele);
                    push(ele);
                    }
                break;
            case 2:
                if(top == -1){
                    printf("stack underflow");
                    }
                else{
                    printf("deleted element is %d\n",pop());
                    }
                break;
            case 3:
                if(top == -1){
                    printf("Stack underflow");
                    }
                else{
                    printf("The first element is %d\n",peak());
                    }
                break;
            case 4:
                if(top == -1){
                    printf("stack underflow");
                }  
                else{
                    display();
                    }
                break;
            case 5:
                exit(0);
                }
            }
        }
/* Output
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice
1
Enter ele to be inserted23
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice
1
Enter ele to be inserted24
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice
1
Enter ele to be inserted25
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice
1
Enter ele to be inserted26
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice
1
Enter ele to be inserted27
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice
1
Stack overflow1-push
2-pop
3-peek
4-display
5-exit
Enter your choice
4
27
26
25
24
23
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice
3
The first element is 27
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice
2
deleted element is 27
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice
1
Enter ele to be inserted29
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice
4
29
26
25
24
23
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice
5
*/
