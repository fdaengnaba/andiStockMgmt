/*
 * Program untuk mengelola stock barang
 *
 * 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char name[100];
    int qtt;
    struct node *prev;
    struct node *next;
} Node;

typedef struct list{
    Node *head;
} doubleLinkedList;