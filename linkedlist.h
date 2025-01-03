#ifndef LINKEDLIST_H
#define LINKEDLIST_H

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

#endif