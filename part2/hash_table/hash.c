#include <stdlib.h>
#include "hash.h"

struct Node 
{
	void *key;
	void *value;
	struct Node *n_next;
};

struct hashtable 
{
	struct Node_t **buckets;
    unsigned int  hashCapacity;
	hashFunction  hashFunc;  
	elemCompare compFunc;
};


hashtable_t*createHash (int capacity ,hushFunction hashFunc,elemCompare compFunc)

{
    hashtable_t *hashtable = NULL ;
	int i;

	if( capacity < 1 ) 
    {
        return NULL;
    }

	if( ( hashtable = malloc( sizeof( hashtable_t ) ) ) == NULL )          /* Allocate the table itself. */
    {
		return AllocationError;
	}

	/* Allocate pointers to the head nodes. */
	if( ( hashtable->buckets = malloc( sizeof( hashtable*)*capacity ) ) == NULL ) /*לבדוק שוב פעם את הפוינטר ב  HASHTABLE*/
    {
		return AllocationError;
		free(hashtable);
	}

    /*create buckets such as capacity*/

	for( i = 0; i < capacity; i++ ) 
    {
		hashtable_t->buckets[i] = NULL;
	}

	hashtable->capacity   = capacity;
	hashtable->compFunc   = compFunc;
	hashtable->hashFunc   = hashFunc;/* i don't know*/
	
	return hashtable;	
}

/*
int ht_hash( hashtable_t *hashtable, char *key )
{
    unsigned long int hashval;
	int i = 0;

	
	while( hashval < ULONG_MAX && i < strlen( key ) ) 
    {
		hashval = hashval << 8;
		hashval += key[ i ];
		i++;
	}

	return hashval % hashtable->size;
}
*/

adtStatus insertHash( hashtable_t* hashtable, void* key, void* value ) 
{
	int long bin    = 0;
	Node_t* newpair = NULL;
	Node_t* next    = NULL;
	Node_t* last    = NULL;

	bin = hash-> hashFunc(key)%(hash->hashCapacity);    /*לבדוק איך אני יזוז בין האינדקסים ב-HASH*/ /*hash function הועתקה מהאינטרנט*/
    next = hashtable-> buckets [bin]; 

	while( next != NULL && next->key != NULL && strcmp( key, next->key ) > 0 )    /*the first character that does not match has a greater value in ptr1 than in ptr2*/
    {
	  last= next; 
	  next= next-> n_next;	
	}

	/* There's already a pair.  Let's replace that string. */
	if( next != NULL && next->key != NULL && compFunc( key, next->key ) == 0 )
    {
      return Found;
	} 

    else 
    {
		newpair = ht_newpair( key, value );

		/* We're at the start of the linked list in this bin. */
		if( next == hashtable->buckets [ bin ] ) 
        {
			newpair->next = next;
			hashtable->buckets[ bin ] = newpair;
	
		/* We're at the end of the linked list in this bin. */
		}
		else if ( next == NULL )
         {
			last->n_next = newpair;
	
		/* We're in the middle of the list. */
		}
			else  
			{
				newpair->n_next = next;
				last->n_next = newpair;
			}
	}
	return Ok;
}



AdtStatus findHash(hashtable_t* hash, void* key)	
{
	int bin = 0;
	Node_t* pair = malloc(sizeof(Node_t));

	if (hash==NULL || pair ==NULL)
	{
		return AllocationError;
	}
		
	bin = hash->hashFunc(key)%(hash->m_hashCapacity);
	
	pair = hash->buckets[bin];
	while(pair != NULL && pair->m_key != NULL && hash->compFunc(key, pair->m_key) > 0) 
	{
		pair = pair->m_next;
	}
	if(pair == NULL || pair->m_key == NULL || hash->compFunc(key, pair->m_key) != 0) 
	{
		return NotFound;
	} 
	else 
	{
		return Found;
	}
}


Node *ht_newpair( char *key, char *value )
{
	Node *newpair;

	if( ( newpair = malloc( sizeof( Node ) ) ) == NULL ) 
    {
		return AllocationError;
	}

	if( ( newpair->key = strdup( key ) ) == NULL ) 
    {
		return NULL;
	}

	if( ( newpair->value = strdup( value ) ) == NULL ) 
    {
		return NULL;
	}

	newpair->next = NULL;

	return newpair;
}

