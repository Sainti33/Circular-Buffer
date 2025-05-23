#define MAX_SIZE 5
typedef struct
{
    int DataBuff[MAX_SIZE];
    int Front,Rear;
}CIR_BUFF;

CIR_BUFF CirBuf;
int IsQueFull(void)
{
    return (((CirBuf.Rear+1)%MAX_SIZE)==CirBuf.Front);
}
int IsQueEmpty(void)
{
    return (CirBuf.Front==-1);
}

void Enqueue(int val)
{
    if(!IsQueFull())
    {
        CirBuf.Rear = (CirBuf.Rear+1)%MAX_SIZE;
        CirBuf.DataBuff[CirBuf.Rear] = val;
        if(CirBuf.Front==-1) CirBuf.Front=0;
    }else
    {
        printf("Queue is full");
    }
}
int Dequeue(void)
{
    int val=-1;
    if(!IsQueEmpty())
    {
        val=CirBuf.DataBuff[CirBuf.Front];
        if(CirBuf.Front == CirBuf.Rear) CirBuf.Front = CirBuf.Rear=-1; // Reset 
        else CirBuf.Front = (CirBuf.Front+1)%MAX_SIZE;
    }else
    {
        printf("Queue is underflow");
    }
    return val;
}
int main(void)
{
    CirBuf.Rear = CirBuf.Front=-1;
}
