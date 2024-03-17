//insert end

NODE insert_end_dll(NODE head)
{
    NODE cur, temp;
    temp = getnewnode();
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        cur=head;
        while(cur->next != NULL)
                cur=cur->next;
        cur->next = temp;
        temp->prev = cur;
    }
    return head;
}
