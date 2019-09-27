bool Push( ElementType X, Deque D )
{
    if ((D->Rear + 1) % D->MaxSize == D->Front)
    {
        return -1;
    }
    else {
        Deque E = (Deque)malloc(sizeof(struct QNode));
        E->Rear=D;
        D=E;
        E->Data[D-1]=X;
        return 1;
    }
}
ElementType Pop( Deque D )
{
    if(D->Front!=D->Rear-1)
    {
        ElementType *a=0;
        a=D->Data;
        free(D);
        return *a;
    }
    else
    {
        return -1;
    }
}
bool Inject( ElementType X, Deque D )
{
    if(D->Rear==D->MaxSize-1)
    {
        return -1;
    }
    else {
        Deque E = (Deque)malloc(sizeof(struct QNode));
        E->Rear=D->Rear;
        D->Rear=E;
        E->Data[D+1]=X;
        return 1;
    }
}
ElementType Eject( Deque D )
{
    if(D->Front!=D->Rear-1)
    {
        ElementType *a;
        a=D->Data;
        free(D);
        return *a;
    }
    else
    {
        return -1;
    }
}
