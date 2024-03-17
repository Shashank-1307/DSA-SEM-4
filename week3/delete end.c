//delete end

NODE DeleteEnd(NODE head)
{
    NODE cur,prev;
    if (head==NULL)
    {
        printf("\nEmpty List\n");
    }
    else if (head->next==NULL)
    {
        free(head);
        return NULL;
    }
    else
    {
        cur=head;
        prev=NULL;
        while (cur->next!=NULL)
        {
            prev=cur;
            cur=cur->next;
            printf("\nDeleted node is %d\n",cur->data);
        }
        prev->next=NULL;
        free(cur);
    }
    return head;
}
