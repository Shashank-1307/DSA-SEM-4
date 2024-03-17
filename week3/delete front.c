//delete front

NODE DeleteFront(NODE head)
{
    NODE cur;
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
        head=head->next;
        printf("\nDeleted node is %d\n",cur->data);
        free(cur);
    }
    return head;
}
