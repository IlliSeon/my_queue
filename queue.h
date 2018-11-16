#ifndef  __queue_h__
#define  __queue_h__

#define CAPACITY     20
typedef int  ElementType;
struct queue
{
    int   front;            /*queue header*/
    int   rear;             /*queue tail*/
    int   size;             /*how many element in queue*/
    int   capacity;         /*capacity of queue*/
    Elememt    array[capacity];  
}Queue_s;

enum  error
{



}Error_e;/*error type*/

void        QueueInit(queue_s  *queue)；
ElemenType  Dequeue(Queue_s *queue);
void        Equeue(Queue_s *queue,ElemenType X);
#endif