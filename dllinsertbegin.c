#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *insertbeginning(struct node *head,int data){
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    if(newNode==NULL){
        printf("memory allocation failed");
        return head;
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = head;
    if(head!=NULL){
        head->prev = newNode;
    }
    head=newNode;
    return head;
}
void display(struct node *head){
    struct node * temp=head;
    while(temp!=NULL){
        printf(" %d <->",temp->data);
        temp=temp->next;
    }
}
int main(){
    struct node *head=NULL;
    struct node *first=NULL;
    struct node *second=NULL;
    struct node *third=NULL;
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    if(first==NULL || second==NULL || third==NULL){
        printf("memory allocation failed");
        free(first);
        free(second);
        free(third);
        return 1;
    }
    first->data=10;
    first->prev=NULL;
    first->next=second;
    second->data=20;
    second->prev=first;
    second->next=third;
    third->data=30;
    third->prev=second;
    third->next=NULL;
    head=first;
    
    printf("original linked list:");
    display(head);
    
    head = insertbeginning(head,3);
    printf("Linked list after insertion at begnning:");
    display(head);
     struct node *temp;

    while(head != NULL){
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
