#include<stdio.h>
#include<stdlib.h>
#define size 5
struct node{
    int data;
    struct node* link;
    };
struct node* top = NULL;
struct node* cur;
struct node* temp;
void push(int ele){
    cur = (struct node*)malloc(sizeof(struct node));
    cur->data = ele;
    if(top == NULL){
        cur->link = NULL;
    }
    else{
        cur->link = top;
        }
    top = cur;
}
int pop(){
    temp = top;
    if(top == NULL){
        printf("stack overflow");
        }
    else{
        top = top->link;
        return temp->data;
        free(temp);
        }
}
int peak(){
    if(top == NULL){
        printf("stack underflow");
        }
    else{
        return top->data;
    }
}
void display(){
    if(top == NULL){
        printf("Stack underflow");
    }
    else{
        temp = top;
        while(temp != NULL){
            printf("%d\n",temp->data);
            temp = temp->link;
            }
        }
    }
int main(){
    int ch,ele;
    while(1){
        printf("1-push\n2-pop\n3-peek\n4-display\n5-exit\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter ele to be inserted");
                scanf("%d",&ele);
                push(ele);
                break;
            case 2:
                printf("deleted element is %d\n",pop());
                break;
            case 3:
                if(top == NULL){
                    printf("Stack underflow");
                    }
                else{
                    printf("The first element is %d\n",peak());
                    }
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
                }
            }
        }
/*Output
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice
1
Enter ele to be inserted123
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice
1
Enter ele to be inserted124
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice
1
Enter ele to be inserted125
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice
1
Enter ele to be inserted126
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice
1
Enter ele to be inserted127
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice
1
Enter ele to be inserted128
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice
1
Enter ele to be inserted129
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice
1
Enter ele to be inserted130
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice
4
130
129
128
127
126
125
124
123
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice
2
deleted element is 130
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice
3
The first element is 129
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice
4
129
128
127
126
125
124
123
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice
1
Enter ele to be inserted130
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice
4
130
129
128
127
126
125
124
123
1-push
2-pop
3-peek
4-display
5-exit
Enter your choice
5
*/
