#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Grupo: Celenny Cristhyne, Daniel Farias, Gabriel Benigno e Richelle

typedef struct node {
    int value;
    struct node *next;
} Node;

typedef struct {
    Node *init;
    Node *end;
    int length;
} List;

void createList(List *list) {
    list->init = NULL;
    list->end = NULL;
    list->length = 0;
}

void insertItem(List *list, int num) {
    Node *newItem = malloc(sizeof(Node));

    if (newItem){
        newItem->value = num;

        if (list->init == NULL) {
            list->init = newItem;
            list->end = newItem;
            list->end->next = list->init;
        } else {
            list->end->next = newItem;
            list->end = newItem;
            newItem->next = list->init;
        }
        list->length++;
    } else {
        printf("Erro ao criar item\n");
    }
}

Node* removeItem(List *list, int num) {
    Node *aux, *remove = NULL;

    if (list->init){
        if (list->init == list->end && list->init->value == num) {
            remove = list->init;
            list->init = NULL;
            list->end = NULL;
            list->length--;
        } else if (list->init->value == num) {
            remove = list->init;
            list->init = remove->next;
            list->end->next = list->init;
            list->length--;
        } else {
            aux = list->init;
            while (aux->next != list->init && aux->next->value != num)
                aux = aux->next;
            if (aux->next->value == num) {
                if (list->end == aux->next) {
                    remove = aux->next;
                    aux->next = remove->next;
                    list->end = aux;
                } else {
                    remove = aux->next;
                    aux->next = remove->next;
                }
                list->length--;
            }
        }
    }

    return remove;
}

Node* searchItemByIndex(List *list, int num, int init) {
    Node *aux = list->init;

    if (aux) {
        for (int i = 0; i < num; i++) {
            aux = aux->next;
        }
        
        for (int s = 0; s < init; s++) {
            aux = aux->next;
        }
        
        return aux;
    }
    return NULL;
}

int main() {
    int soldiers;
    List list;
    Node *removed, *itemToRemove;
    createList(&list);
    
    printf("Digite o valor de Soldados: ");
    scanf("%d", &soldiers);

    for (int i = 1; i <= soldiers; i++) {
        insertItem(&list, i);
    }

    while (list.length > 1) {
        srand(time(NULL));
        
        int m = rand() % 1000 + 1;
        int soldier = rand() % list.length + 1;
    
        itemToRemove = searchItemByIndex(&list, m, soldier);
        removed = removeItem(&list, itemToRemove->value);
        if(removed){
            printf("O soldado removido foi: %d\n", removed->value);
            free(removed);
        }
    }

    printf("O soldado que irá buscar ajuda será o numero: %d\n", list.init->value);
    return 0;
}