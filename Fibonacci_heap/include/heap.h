/**
 * implémentation de tas min
*/
#include <stdlib.h>

//structure du tas
typedef struct node
{
    int data;
    heap parent;
    heap* child;
}* heap, node;


//initialisation de tas
void init_heap(heap* h);
//ajout d'une valeur dans un tas
void add_heap(heap h, int d);
//supprimer un noeud du tas
void delt_heap(heap h, int d);
//supprimer min du tas
void delt_min_heap(heap h);
//afficher tas
void prt_heap(heap h);
//libérer la mémoire du tas
void free_heap(heap h);