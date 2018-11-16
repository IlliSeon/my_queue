#include  "queue.h"
struct  Queue_s   Queue;

void  QueueInit(Queue_s  *queue)
{
     queue->capacity=CAPACITY;
    /*why 1? cause when we enqueue we make rear+1 and then
      make queue[rear]=x; when we dequeue we retrun queue[front]
      then make the front++;
    */
     queue->front=1;  
     queue->rear=0;
     queue->size=0；
}



ElemenType  Dequeue(Queue_s *queue)
{
    ElemenType  ret;
    if(size<=0)
    {
        printf("no element in queue ,illegal!\r\n");
        return ;
    }
    else
    {
        ret=queue->array[front];
        queue->size=(queue->size)-1; /*element num -1*/
        queue->front=(queue->front)+1;
        return ret;
    }

}

void  Equeue(Queue_s *queue,ElemenType X)
{
    if(size>=capacity) 
    {
        printf("no space to enqueue\r\n");
        return;
    }
    else
    {
        if(++queue->rear==CAPACITY)
        {
             queue->rear=0;
        }
        queue->array[queue->rear]=X;
    }


}
