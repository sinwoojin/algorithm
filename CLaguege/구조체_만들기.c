#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct ListNode {
    char data[10];
    struct ListNode * link;
} listNode;

typedef struct {
    listNode * head;
} linkedList_h;

linkedList_h * createLinkedList_h (void) {
    linkedList_h * L;

    L = (linkedList_h*)malloc(sizeof(linkedList_h));

    L -> head = NULL;
    return L;
}

void insertFirst (linkedList_h * L, char *x) {
    listNode * newNode;
    newNode = (listNOde*)malloc(sizeof(listNode));
    strcpy(newNode -> data, x);
    newNode -> link = L -> head;
    L -> head = newNode;
}

