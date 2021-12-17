#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* prev;
    struct node* next;
};
struct node* head = NULL;
struct node* cur;
struct node* temp;
struct node* tail = NULL;
struct node* temp1;
struct node* create(struct node* head){
    int n;
    printf("Give the no of nodes\n");
    scanf("%d",&n);
    while(n--){
        cur = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&cur->data);
        cur->prev = NULL;
        cur->next = NULL;
        if(head == NULL){
            tail = head = cur;
        }
        else{
            tail->next = cur;
            cur->prev= tail;
            tail = cur;
        }
    }
    return head;

}
struct node* insert_begin(struct node* head,int ele){
	cur = (struct node*)malloc(sizeof(struct node));
	cur->data = ele;
	cur->prev = NULL;
	cur->next = head;
	head = cur;
	return head;
}
struct node* insert_end(struct node* tail,int ele){
	cur = (struct node*)malloc(sizeof(struct node));
	cur->data = ele;
	cur->prev = tail;
	cur->next = NULL;
	tail = cur;
	return tail;
}
struct node* insert_pos(struct node* head,int pos,int ele){
	int c = 1;
	cur = (struct node*)malloc(sizeof(struct node));
	cur->data = ele;
	temp = head;
	while(c<pos){
		temp1 = temp;
		temp = temp->next;
		c++;
	}
	temp1->next = cur;
	cur->next = temp;
	temp->prev= cur;
	cur->prev = temp1;
	return head;
}
void delete_begin(struct node* head){
	temp = head;
	head = temp->next;
	printf("Deleted element %d",temp->data);
	free(temp);
}

void delete_end(struct node* tail){
	temp = tail;
	tail = tail->prev;
	tail->next = NULL;
	printf("Deleted element %d",temp->data);
	free(temp);
}
void delete_pos(struct node* head, int pos){
	int c = 1;
	temp = head;
	while(c<pos){
		temp1 = temp;
		temp = temp->next;
		c++;
	}
	temp1->next = temp->next;
	temp->next->prev = temp1;
	printf("Deleted element is %d\n",temp->data);
	free(temp);
}
void display(struct node* head){
	temp = head;
	while(temp != NULL){
		printf("%d\n",temp->data);
		temp = temp->next;
	}
}
void rev_display(struct node* tail){
	temp = tail;
	while(temp != NULL){
		printf("%d\n",temp->data);
		temp = temp->prev;
	}
}

int main(){
    int ch,i,ele;
    while(1){
	printf("Give your choice\n");
	printf("1-create\n2-insert at begin\n3-insert at end\n4-insert at pos\n5-del at begin\n6-del at end\n7-del pos\n8- display\n9-rev display\n10-exit\n");
	scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            head = create(head);
            break;
        case 2:
            scanf("%d",&i);
            head = insert_begin(head,i);
            break;
        case 3:
            scanf("%d",&i);
            tail = insert_end(tail,i);  
            break;
        case 4:
	    printf("Give pos\n");
            scanf("%d",&i);
	    printf("Give ele\n");
	    scanf("%d",&ele);
            head = insert_pos(head,i,ele);
            break;
        case 5:
            delete_begin(head);
            break;
        case 6:
            delete_end(tail);
            break;
        case 7:
            scanf("%d",&i);
            delete_pos(head,i);
            break;
        case 8:
             display(head);
            break;
        case 9:
             rev_display(tail);
	     break;
	case 10:
	     exit(0);
        default:
            break;
        }
    }
}

