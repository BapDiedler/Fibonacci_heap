/**
 * implémentation de liste doublement chaînée cyclique
*/

#include <stdlib.h>

typedef struct block
{
    /* data */
}* element, block;


//structure de la liste
typedef struct doubly_linked_list
{
    element b;
    doubly_linked_list* next;
    doubly_linked_list* pre;
} * dll, doubly_linked_list;


//initialisation de la liste doublement chaînée
void init(dll* l);
//ajout d'un élément dans la liste en tête
void add(dll l, element b);
//supprimer un élément de la liste
void delt(dll l, element b);
//afficher la liste
void prt_list(dll l);
//libérer la mémoire de la liste
void free_dll(dll l);