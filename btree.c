#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data){
    struct Node *newNode = malloc(sizeof(struct Node));
    if(newNode==NULL){
        printf("memory allocation failed!");
        exit(1);
    } 
    newNode->data = data ;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int main(){
    struct Node *root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    printf("root : %d\n",root->data);
    printf("left child : %d\n",root->left->data);
    printf("right child : %d\n",root->right->data);
    return 0;
}
