#include<stdio.h>
#include<stdlib.h>
#define size 5
int front = -1, rear = -1, a[size];
void enqueue(int ele){
    a[++rear] = ele;
    if(front == -1){
        front = 0;
    }
}
int dequeue(){
    if(front == rear){
        return a[front];
        front = -1;
        rear = -1;
    }
    else{
        return a[front];
        front++;
    }
}
void display(){
    for(int i = front;i<rear;i++){
        printf("%d\n",a[i]);
    }
}
int main(){
    int ch,ele;
    while(1){
        printf("1-insert\n2-delete\n3-display\n4-exit\nGive your choice\n");
        scanf("%d",&ch);
        switch (ch){
            case 1:
                if(rear == size-1){
                    printf("Queue overflow\n");
                }
                else{
                    printf("Enter the element to be inserted\n");
                    scanf("%d",&ele);
                    enqueue(ele);
                }
                break;
            case 2:
                if(front == -1){
                    printf("Queue underflow\n");
                }
                else{
                    printf("The deleted element is %d\n",dequeue());
                }
                break;
            case 3:
                if(front == -1){
                    printf("Queue underflow\n");
                }
                else{
                    display();
                }
                break;
            case 4:
                exit(0);
        }
    }
}
/*Output
1-insert
2-delete
3-display
4-exit
Give your choice
1
Enter the element to be inserted
23
1-insert
2-delete
3-display
4-exit
Give your choice
1
Enter the element to be inserted
24
1-insert
2-delete
3-display
4-exit
Give your choice
1
Enter the element to be inserted
25
1-insert
2-delete
3-display
4-exit
Give your choice
1
Enter the element to be inserted
26
1-insert
2-delete
3-display
4-exit
Give your choice
1
Enter the element to be inserted
27
1-insert
2-delete
3-display
4-exit
Give your choice
3
23
24
25
26
1-insert
2-delete
3-display
4-exit
Give your choice
2
The deleted element is 23
1-insert
2-delete
3-display
4-exit
Give your choice
1
Queue overflow
1-insert
2-delete
3-display
4-exit
Give your choice
4
*/