

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node!=NULL){
  new_node->data=x;
  new_node->nextPtr=NULL;
  if(q->size==0)
  {
    q->headPtr=new_node;
  }
  else
  {
    q->tailPtr->nextPtr=new_node;
  }
  q->tailPtr=new_node;
  q->size++;
  // printf("enQ %d\n",x);
  /*Finish enqueue */
 }
}


int dequeue_struct(Queue *q){
   NodePtr t=q->headPtr;
   if(t!=NULL){
    int value= t->data;
    q->headPtr=t->nextPtr;
    if(q->size==1)
    {
        q->tailPtr==NULL;
    }
    q->size--;
    free(t);
        /*Finish dequeue */
    return value;
   }
   else printf("Empty queue\n");
   return 0;
}

