//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa on 5/2/2566 BE.
//
#ifndef Node_h
#define Node_h

struct node
{
    int menu, num;
    struct node *nextPtr;
};

typedef struct node Node;
typedef struct node* NodePtr;


void enqueue(NodePtr * head, NodePtr* tail, int x){
  Node* new_node=(NodePtr) malloc(sizeof(Node));
  if(new_node){
    new_node->data = x;
    new_node->nextPtr = NULL;
    if(*head==NULL) *head=new_node;
    else
    {
      (*tail)->nextPtr=new_node;
    }
    *tail=new_node;
    printf("enQ %d\n", x);
    /* Finish queue*/
 }
 else
 {
    printf("No memory left\n");
 }
}


int dequeue(NodePtr* head, NodePtr* tail){
  NodePtr t=*head;
  if(t!=NULL){
    int value= t->data;
    *head=t->nextPtr;
    if(*head==NULL) *tail==NULL;
    free(t);
    printf("deQ %d\n",value);
   /* Finish dequeue*/
          
    return value;
  }
  else
  {
    printf("Empty queue\n");
  }
  return 0;
}



#endif
