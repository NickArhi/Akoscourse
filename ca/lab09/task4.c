#include <stdio.h>
#include <stdlib.h>

typedef int Data;
typedef struct Node {
    Data data;
    struct Node * next;
} Node;

Node * list_create () {
    return NULL;
}

void list_print(Node * list) {
    for (Node * p = list; p != NULL; p = p->next) {
        printf("%d ", p->data);
    }
    printf("\n");
} // функция печатает значения списка

void list_push(Node ** plist, Data data) {
    Node * p = malloc(sizeof(Node));
    p->data = data;
    p->next = *plist;
    *plist = p;
}

int list_is_empty(Node * list) {
    return list == NULL;
}

Data list_get(Node ** plist) {
    Data d;
    Node * p = *plist;
    d = p->data;
    return d;
}

Data list_pop(Node ** plist) {
    Data d;
    Node * p = *plist;
    d = p->data;
    *plist = p->next;
    free (p);
    return d;
}

int main() {
    int N = 12;
    Node * list = NULL;
    while (N != 0){
        scanf("%d", &N);
        list_push(&list, N);
    }
    list_pop(&list);
    list_print(list);
    struct Node *prev = NULL;
    struct Node *curr = list;
    struct Node *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    list = prev;
    list_print(list);
    return 0;
}
