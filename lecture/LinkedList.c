#include <stdio.h>

struct Node {
  int data;
  struct Node *next;
};

void append(struct Node **head, int data) {
  if (*head == NULL) {
    *head = createNode(data);
  } else {
    struct Node *current = *head;
    while (current->next != NULL) {
      current = current->next;
    }
    current->next = createNode(data);
  }
}
