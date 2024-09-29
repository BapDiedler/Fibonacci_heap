# union_find_data_structure
Le projet n'est pas fini et ne le sera jamais car trop long ;)
Le code va s'inspirer du cours de François Schwarzentruber. Vous trouverez son poly dans la documentation.
[Lien](http://people.irisa.fr/Francois.Schwarzentruber/algo1/06tasfibonacci.pdf "lien")
Implémentation.
Liste doublement chaînée pour la liste des racines
Pointeur vers la racine prioritaire
Listes doublement chaînées pour les nœuds frères
Chaque nœud a un pointeur vers le parent
Dans chaque nœud x, on inscrit son degré d(x) dans x.deg
Nombre d’éléments inscrit dans H.n
## 1. Création des listes doublement chaînée cyclique
```c
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
```
## 2. Création des tas soublement chaînée
```c
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
```
## 3. Relation entre les deux éléments
```c
typedef struct block
{
    heap data;
}* element, block;
```
