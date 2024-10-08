// Given head, the head of a linked list, determine if the linked list has a cycle in it.

// There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

// Return true if there is a cycle in the linked list. Otherwise, return false.
struct Node{
    int val;
    struct Node *next;
}
#include <stdio.h>
#include <stdlib.h>
int hasCycle(struct Node *);
int main(){
    return 0;
}
int hasCycle(struct Node *head){
    struct Node *fast = head;
    struct Node *slow = head;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast){
            return 1;
        }
    }
    return 0;
}