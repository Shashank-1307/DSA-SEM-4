//insert before dll

NODE insert_before(NODE head)
{
    NODE newn = getnewnode();
    NODE cur=head, back=NULL;
    int m;
    printf("Enter marks of existing node before which you want to connect\n");
    scanf("%d",&m);
    if(head==NULL)
    {
        head=newn;
    }
    else if(head->marks == m)
    {
        newn->next = head;
        head->prev = newn;
        head = newn;
    }
    else
    {
        while(cur -> next != NULL)
        {
            if(cur->marks == m)
                break;
            back = cur;
            cur = cur->next;
        }
        if(cur->next==NULL && cur->marks != m)
            printf("Entered marks not present in the existing marks list\n");
        else
        {
            back->next = newn;
            newn->prev = back;
            newn->next = cur;
            cur->prev = newn;
        }
    }
    return head;
}
