#include <stdio.h>
#include <stdlib.h>

struct node {int i; struct node *next;};

void print_list(struct node * head) {
    if (head == NULL) printf("EMPTY");
    while ( head != NULL) {
        printf("%d -> ", head->i);
        head = head->next;
    }
    printf("\n");
}


struct node * insert_front(struct node * head, int data) {
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->i = data;
    new->next = head;
    return new;
    
} 

struct node * free_list(struct node * head) {
    struct node * nxt;
    struct node * frst;
    while ( head != NULL) {
        nxt = head->next;
        free(head);
        head = nxt;
    }
    frst = NULL;
    return frst;
}
