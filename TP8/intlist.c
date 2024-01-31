#include<stdio.h>
#include<stdlib.h>

typedef struct node node;
struct node {
   int val;
   node *next;
};

node *create_node(int val) {
    node *p;
    p = malloc(sizeof(node));
    p->val = val;
    p->next = NULL;
    return p;
}

void print_list(node *head) {
    node *walk;

    walk = head;
    while (walk != NULL) { // ou juste walk 
        printf("%d ", walk->val);
        walk = walk->next;
    }
    printf("\n");
}

node *append_val(node *head, int val) {
    node *newnode, *walk;

    newnode = create_node(val);
   
    // note : on peut omettre tous les "!= NULL"
    // un pointeur est "faux" ssi il est NULL
    if (head == NULL) { // liste vide
        head = newnode;
    } else {            // on parcourt la liste jusqu'à la fin
        walk = head;
        while (walk->next != NULL) { // on va jusqu'au dernier nœud
            walk = walk->next;
        }
        walk->next = newnode; // on ajoute le nouvel élément
    }
    return head;
}
int length(node *head){}
int min(node *head){}
int max(node *head){}
int sum(node *head){}
int main() {
    node *head = NULL;
    node *empty = NULL;

    head = append_val(head, 42);
    head = append_val(head, 12);
    head = append_val(head, 100);
    head = append_val(head, -5);
    head = append_val(head, 41);
    
    print_list(head);
   // printf("Longueur : %d\n", length(head));
}
