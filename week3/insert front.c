//insert front

NODE insert_front(NODE head)
{
    NODE new_node;
    new_node = read_details();
    new_node->next = head;
    head = new_node;
    return head;
}
