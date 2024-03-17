//dll delete end

NODE delete_end(NODE head)
{
    NODE cur=head, back=NULL;
    if(head==NULL)
    {
            printf("DLL marks list is empty\n");
    }
    else if(head->next==NULL)
    {
            printf("Deleted marks %d\n",head->marks);
		    free(head);
		    head=NULL;
    }
	else
	{
		while(cur->next != NULL)
        {
            back = cur;
            cur=cur->next;
        }
        printf("Deleted marks %d\n",cur->marks);
        back->next = NULL;
        cur->prev=NULL;
        free(cur);
    }
    return head;
}
