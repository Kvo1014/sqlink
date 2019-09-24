#ifndef header_h
#define header_h

typedef struct hashtable hashtable_t; 
typedef struct Node Node_t; 

typedef enum {Ok ,AllocationError, NotFound ,Found}AdtStatus;


typedef int(*hashfunction)     (void* key);
typedef int(*elemCompare)      (void* elemA,void* elemB);
typedef int(*elemDestroy)      (void* key, void*  context);
typedef int(*elemPrint)        (void* value);
typedef void(*valdestroy)      (*void value, void*context); 

hashtable_t* createHash  (int capacity,hushFunction,elemCompare);
void         destroyHash   (hashtable_t* hash, elemdestroy,void* context);

AdtStatus    destroyHash   (hashtable_t* hash, elemDestroy, void*context);
AdtStatus    insertHash    (hashtable_t* hash, void*key, void*value);
AdtStatus    findHash      (hashtable_t* hash, void*key);
AdtStatus    hashForEach   (hashtable_t* hash, elemPrint);
AdtStatus    deleteElement (hashtable_t* hash, elemDestroy, destroyFunc, valDestroy destroyValue, void*context); 

#endif