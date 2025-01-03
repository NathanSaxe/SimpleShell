#ifndef linkedlist
#define linkedlist

struct node{
    char *token;
    node *nPtr;
};

typedef struct node {
   int data;
   struct node* next;
}Node;

struct List{
    node* nHead;
    node* nTail;
};

#endif linkedlist