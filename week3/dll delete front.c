//delete front dll

NODE delete_front(NODE head)
{
    NODE cur=head;
    if(head==NULL)
    {
        printf("The DLL marks list is empty\n");
    }
    else if(head->next==NULL)
	{
            printf("Deleted marks %d\n",head->marks);
		    free(head);
		   head=NULL;
	}
    else
    {
        cur=head;
        printf("Deleted marks %d\n",cur->marks);
        head=head->next;
        head->prev=NULL;
        cur->next = NULL;
        free(cur);
    }
    return head;
}

