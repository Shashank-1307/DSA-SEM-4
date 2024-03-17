//insert position

NODE InsertPosition(NODE head,int pos)
{
    NODE cur,prev,New;
    int count=0,temp=0;
    New=CreateNode();
    if (pos<=0)
    {
        printf("\nInvalid position\n");
        free(New);
        return head;
    }
    cur=head;
    while (cur!=NULL)
    {
        cur=cur->next;
        count++;
    }
    if (pos==1)
    {
        if (head!=NULL)
            New->next=head;
        else
            New->next=NULL;
        head=New;
        return head;
    }
    if (pos<=count+1)
    {
        prev=NULL;
        cur=head;
        while (cur!=NULL && temp!=pos-1)
        {
            prev=cur;
            cur=cur->next;
            temp++;
        }
        prev->next=New;
        New->next=cur;
        return head;
    }
    if (pos>count+1)
    {
        printf("\nInvalid position\n");
        free(New);
        return head;
    }
}
