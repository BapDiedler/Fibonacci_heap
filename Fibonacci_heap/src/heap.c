/**
 * implémentation des tas
*/

#include "include/heap.h"

void init_heap(heap * h){
    *h = (heap)malloc(sizeof(node));
    (*h)->data = NULL;
    (*h)->nb_child = 0;
}

void init_data(data* d, int value){
    *d = (data)malloc(sizeof(struct data));
    (*d)->value = value;
    (*d)->color = 0; 
}

void go_up(heap h, int pos_child, int pos_parent){
    data tmp = h->data[pos_child];
    h->data[pos_child] = h->data[pos_parent];
    h->data[pos_parent] = tmp;
}

void add_heap(heap h, int d){
    //voir la théorie
    data new_d;
    init_data(&new_d, d);
    h->data[h->nb_child-1] = new_d;
    h->nb_child++;
    int pos = h->nb_child-1;
    int pos_parent;
    while(1){
        pos_parent = parent(h, pos);
        if(h->data[pos] >= pos_parent)
            break;
        go_up(h, pos, pos_parent);
    }
}

int parent(heap h, int pos){
    
}