//insert end
NODE insert_end(NODE head)
{
    NODE new_node, cur;
    new_node = read_details();
    new_node->next = NULL;
    if (head == NULL) {
        return new_node;
    }
    cur = head;
    while (cur->next != NULL) {
        cur = cur->next;
    }
    cur->next = new_node;
    return head;
}
