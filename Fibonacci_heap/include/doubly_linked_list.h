/**
 * implémentation de liste doublement chaînée cyclique
*/

#include <stdlib.h>
#include "include/heap.h"

typedef struct block
{
    heap data;
}* element, block;


//structure de la liste
typedef struct doubly_linked_list
{
    element b;
    doubly_linked_list* next;
    doubly_linked_list* pre;
} * dll, doubly_linked_list;


//initialisation de la liste doublement chaînée
void init_dll(dll* l);
//ajout d'un élément dans la liste en tête
void add_dll(dll l, element b);
//supprimer un élément de la liste
void delt_dll(dll l, element b);
//afficher la liste
void prt_dll(dll l);
//libérer la mémoire de la liste
void free_dll(dll l);