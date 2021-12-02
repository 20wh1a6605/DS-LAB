#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};
struct node* front = NULL;
struct node* rear = NULL;
struct node* cur;
void enqueue(){
    cur = (struct node*)malloc(sizeof(struct node));
    printf("Give the element\n");
    scanf("%d",&(cur->data));
    cur->link = NULL;
    if(front == NULL){
        rear = cur;
        front = cur;
    }
    else{
        rear->link = cur;
        rear = cur;
    }
}
void dequeue(){
    cur = (struct node*)malloc(sizeof(struct node));
    if(front == NULL){
        printf("Queue underflow\n");
    }
    else if(front != rear){
        cur = front;
        front = front->link;
        printf("Deleted element is %d\n",cur->data);
        free(cur);
    }
    else{
        printf("Deleted element is %d\n",front->data);
        front = NULL;
        rear = NULL;
    }
}
void display(){
    cur = front;
    if(front == NULL){
        printf("Queue underflow\n");
    }
    else{
        while(cur!=NULL){
            printf("%d\n",cur->data);
            cur = cur->link;
        }
    }
}
int main(){
    int ch,ele;
    while(1){
        printf("1-insert\n2-delete\n3-display\n4-exit\nGive your choice\n");
        scanf("%d",&ch);
        switch (ch){
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
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
Give the element
12
1-insert
2-delete
3-display
4-exit
Give your choice
1
Give the element
13
1-insert
2-delete
3-display
4-exit
Give your choice
1
Give the element
14
1-insert
2-delete
3-display
4-exit
Give your choice
1
Give the element
15
1-insert
2-delete
3-display
4-exit
Give your choice
1
Give the element
16
1-insert
2-delete
3-display
4-exit
Give your choice
1
Give the element
17
1-insert
2-delete
3-display
4-exit
Give your choice
1
Give the element
18
1-insert
2-delete
3-display
4-exit
Give your choice
3
12
13
14
15
16
17
18
1-insert
2-delete
3-display
4-exit
Give your choice
2
Deleted element is 12
1-insert
2-delete
3-display
4-exit
Give your choice
1
Give the element
19
1-insert
2-delete
3-display
4-exit
Give your choice
3
13
14
15
16
17
18
19
1-insert
2-delete
3-display
4-exit
Give your choice
4
*/

