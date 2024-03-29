/**
 * implémentation des listes doublements chaînées cyclique
*/
#include "include/doubly_linked_list.h"

void init(dll* l){
    *l=(dll)malloc(sizeof(doubly_linked_list));
    (*l)->b = NULL;
    (*l)->next = *l;
    (*l)->pre = *l;
}


void add(dll l, element b){
    dll new;
    init(&new);
    new->b = b;
    new->next = l;
    new->pre = l->pre;
    l->pre = new;
    l->pre->next = new;
}


void delt(dll l, element b){
    delt_bis(l, l, b);
}

void delt_bis(dll start, dll l, element b){
    if(l != start){
        if(l->b == b){
            l->next->pre = l->pre;
            l->pre->next = l->next;
            dll tmp = l;
            l = l->pre;
            free(tmp);
        }else
            delt(l->next, b);
    }
}


void prt_list(dll l){
    prt_bis(l, l);
    printf("\n");
}

void prt_bis(dll start, dll l){
    if(l->next != start){
        printf("b");
        printf("-->");
        prt_bis(start, l->next);
    }else
        printf("b");
}

void free_dll(dll l){
    //?????????????????????????????????
}