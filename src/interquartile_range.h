#include <iostream>
#include <iomanip>


class Node {
    public:
        int value;
        Node* next = nullptr;
};


Node* insertEnd(Node* head, int key)
{
    Node* temp = new Node();
    temp->value = key;
    if(head == nullptr)
        head = temp;
    else
    {
        Node* curr = head;
        while(curr->next != nullptr)
            curr = curr->next;
        curr->next = temp;
    }
    return head;
}


float interQuartile(Node* head)
{
    Node* fast = head->next;
    Node* q1Node = head;
    Node* q3Node = head;
    int count = 2;
    float q1, q3 = 0;
    while(fast->next) {
        fast = fast->next;
        if ((count-1) % 4 == 0) q1Node = q1Node->next;
        if ((count+3) % 4 != 0) q3Node = q3Node->next;
        count++;
    }
    if ((int((count) / 2) + 1) % 2 == 0) {
        q1 = q1Node->value;
        q3 = q3Node->next->value;
    }
    else {
        q1 = float(q1Node->value + q1Node->next->value) / 2.0;
        q3 = float(q3Node->value + q3Node->next->value) / 2.0;
    }
    return q3-q1;  
}
