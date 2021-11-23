#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};
struct node* head = NULL;
struct node* cur;
struct node* temp;
struct node* temp1;
struct node* create(){
    int n;
    printf("Give the no of nodes");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cur = (struct node*)malloc(sizeof(struct node));
		printf("give the data\n");
        scanf("%d",&cur->data);
        cur->link = NULL;
        if(head == NULL){
            head = cur;
        }
        else{
            temp = head;
            while(temp->link != NULL){
                temp = temp->link;
            }
            temp->link = cur;
        }
    }
    return head;

}
struct node* insert_begin(struct node* head,int i){
    cur = (struct node*)malloc(sizeof(struct node));
    cur->data = i;
    
    if(head == NULL){
        head = cur;
        cur->link = NULL;
        return head; 
    }
    
    cur-> link = head;
    head = cur;
    return head;

}
struct node* insert_end(struct node* head, int i){
	cur = (struct node*)malloc(sizeof(struct node));
	cur->data = i;
	cur->link = NULL;
	temp = head;
	while(temp->link != NULL){
		temp = temp->link;
	}
	temp -> link = cur;
	return head;
}
struct node* insert_pos(struct node* head, int i, int pos){
	int c =0;
	cur = (struct node*)malloc(sizeof(struct node));
	cur->data = i;
	temp = head;
	while(c<pos-1){
		temp = temp->link;
		c++;
	}
	cur->link = temp->link;
	temp->link = cur;
	return head;
}
struct node* del_begin(struct node* head){
	temp = head;
	head = temp->link;
	printf("deleted element %d",temp->data);
	free(temp);
	return head;
}
struct node* del_end(struct node* head){
	temp = head;
	while(temp->link != NULL){
		temp1 = temp;
		temp = temp->link;
	}
	temp1->link = NULL;
	printf("Deleted element %d",temp->data);
	free(temp);
	return head;
}
struct node* del_pos(struct node* head, int pos){
	temp = head;
	int c = 1;
	while(c<pos){
		temp1 = temp;
		temp = temp->link;
		c++;
	}
	temp1->link = temp->link;
	printf("deleted element %d",temp->data);
	free(temp);
	return head;
}
void display(struct node* head){
	temp = head;
	while(temp != NULL){
		printf("%d",temp->data);
		temp = temp->link;
	}
}
void rev_display(struct node* head){
	if(head!= NULL){
		rev_display(head->link);
		printf("%d",head->data);
	}
}
int main(){
    int ch,i;
    printf("Give the choice");
    printf("1-create\n2-insert at begin\n3-insert at end\n4-insert at pos\n5-del at begin\n6-del at end\n7-del pos\n8- display\n9-rev display");
    scanf("%d",&ch);
    while(1){
        switch (ch)
        {
        case 1:
            head = create();
            break;
       case 2:
            printf("give the number\n");
            scanf("%d",&i);
            head = insert_begin(head,i);
            break;

        case 3:
			printf("Give the number\n");
            scanf("%d",&i);
            head = insert_end(head,i);  
            break;
        case 4:
			int pos;
			printf("Give the pos\n");
			scanf("%d",&pos);
			printf("Give the integer\n");
            scanf("%d",&i);
            head = insert_pos(head,i,pos);
            break;
        case 5:
            head = del_begin(head);
            break;
        case 6:
            head = del_end(head);
            break;
        case 7:
            scanf("%d",&i);
            head = del_pos(head,i);
            break;
        case 8:
            display(head);
            break;
        case 9:
            rev_display(head);
        default:
            break;
        }
    }
}
