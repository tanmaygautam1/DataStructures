#include <bits/stdc++.h>
using namespace std;

class Queue{
  public:
  int front, rear, size;
  unsigned capacity;
  int*array;
};

Queue* Createqueue(unsigned capacity){
  Queue* queue=new Queue();
  queue->capacity=capacity;
  queue->front = queue->rear=0;
  queue->rear=capacity-1;
  queue->array = new int[queue->capacity];
  return queue;


}
int isFull(Queue* queue)
{
    return (queue->size == queue->capacity);
}
int isEmpty(Queue* queue)
{
    return (queue->size == 0);
}
void enqueue(Queue*queue, int item){
  if(isFull(queue))
  return;
  queue->rear=(queue->rear +1)%(queue->capacity);
  queue->array[queue->rear]= item;
  queue->size=queue->size+1;
  cout<<item<<" enqueued to queue"<<"\n";

}
int dequeue(Queue*queue){
  if(isEmpty(queue)){
    cout<<"Empty Queue";
  int item= queue->array[queue->front];
  queue->front=(queue->front +1) %(queue->capacity);
  queue->size=queue->size-1;
  return item; 
  }
}
