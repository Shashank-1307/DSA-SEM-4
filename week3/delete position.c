//delete position

NODE DeletePosition(NODE head,int pos)
{
    NODE prev,cur,New;
    int count=0,temp=0;
    cur=head;
    while (cur!=NULL)
    {
        cur=cur->next;
        count++;
    }
    if (head==NULL)
    {
        printf("\nList is empty\n");
        return head;
    }
    if (pos<=0)
    {
        printf("\nInvalid position\n");
        return head;
    }
    if (pos==1)
    {
        cur=head;
        head=head->next;
        free(cur);
        return head;
    }
    if (pos<=count)
    {
        prev=NULL;
        cur=head;
        while (cur!=NULL && temp!=pos-1)
        {
            prev=cur;
            cur=cur->next;
            temp++;
        }
        prev->next=cur->next;
        free(cur);
        return head;
    }
    if (pos>count)
    {
        printf("\nInvalid Position\n");
        return head;
    }
}
