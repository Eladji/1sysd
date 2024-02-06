#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>

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
    while (walk != NULL) { // ou juset walk 
        printf("%d ", walk->val);
        fflush(stdout);
        walk = walk->next;
    }
    printf("\n");
}

node *append_val(node *head, int val) {
    node *newnode, *walk;

    newnode = create_node(val);

    if (head == NULL) {
        head = newnode;
    } else {
        walk = head;
        while (walk->next != NULL) {
            walk = walk->next;
        }
        walk->next = newnode;
    }
    return head;
}
void display_tab(int tab[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int list2tab(node *head, int tab[]){
    int i = 0;
    node *walk;
    walk = head;
    while (walk != NULL) {
        tab[i] = walk->val;
        walk = walk->next;
        i++;
    }

    return i;
}
node *tab2list(int tab[], int size){
    node *head = NULL;
    int tmp;
    for (int i = 0; i < size; i++) {
        tmp = tab[i];
        head = append_val(head, tmp);
    }
    return head;
}

int main() {
    int tab[100];
    int sizetab;
    int sizeli; 
    node *head = NULL;

    head = append_val(head, 42);
    head = append_val(head, 12);
    head = append_val(head, -5);
    head = append_val(head, 41);
    print_list(head);
    sizetab = list2tab(head, tab);
    display_tab(tab,sizetab);
    //sizeli=tab2list(tab, sizetab);
    //printf("taille de la liste : %d\n", sizeli);
}
