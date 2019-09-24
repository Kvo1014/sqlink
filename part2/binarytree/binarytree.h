
#ifndef H_TREE
#define H_TREE
#include <stdlib.h>

typedef enum {OK, AllocationError,notInTree,True,False} AdtStatus; 
typedef struct bTree bTree;
typedef void (* elementWalk)(int val);

bTree * createTree();
AdtStatus  destroyTree(bTree * tree);
void walkTree(bTree * tree,elementWalk func,int order);
AdtStatus   insertTree(bTree * tree,  int _item);
AdtStatus   deleteTree(bTree * tree,  int _item);
AdtStatus   searchTree(bTree * tree,  int  _item);
int checkPerfect ( Node* root, int h, int deep);
#endif
