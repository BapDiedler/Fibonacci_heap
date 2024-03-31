/**
 * implémentation de tas min
*/
#include <stdlib.h>

//structure de la data
typedef struct data{
    int value;
    int color;
}* data;

//structure du tas
typedef struct node
{
    data* data;
    int nb_child;
}* heap ,node;

//création d'une data
void init_data(data* d, int value);
//initialisation de tas
void init_heap(heap* h);
//ajout d'une valeur dans un tas
void add_heap(heap h, int d);
//renvoie la position du père dans l'arbre
int parent(heap h, int pos);
//fusion de deux tas
void fusion_heap(heap h1, heap h2);
//supprimer un noeud du tas
void delt_heap(heap h, int d);
//supprimer min du tas
void delt_min_heap(heap h);
//affiche le min
int min_heap(heap h);
//afficher tas
void prt_heap(heap h);
//libérer la mémoire du tas
void free_heap(heap h);