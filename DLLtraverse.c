#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
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
    printf("forward traversal\n");
    struct node *current = head;
    while(current!=NULL){
        printf(" %d ",current->data);
        current=current->next;
    }
    
    printf("\nbackward traversal\n");
    current = third;
    while(current!=NULL){
        printf(" %d ",current->data);
        current=current->prev;
    }
    free(first);
    free(second);
    free(third);
    return 0;
}
