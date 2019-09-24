#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void destroyStr         (void* elem, void* context);
void destroyKey			(void* elem, void* context);
void printStr           (void* value);
int compareStr          (void* elemA, void* elemB);
unsigned long hashStr   (void* key);

int main()
{
	FILE* fp;
    Hashtable_t* ht = NULL;
	
	int size = 10;
	elemDestroy     destroy_str = destroyStr;
	elemDestroy 	destroy_key	= destroyKey;
	elemPrint       print_str   = printStr;
	elemCompare     compare_str = compareStr;
    hashFunction    hash_str    = hashStr;

	int inPtr1 = 5;
	int inPtr2 = 10;
	int inPtr3 = 11;
	int inPtr4 = 13;

	fp = fopen("File.txt","w");
	printf("\nTrying to insert in non-existing Hash: \n");

	if (insertHash(ht,"Lala",&inPtr4)==4)
	{
		printf("Cannot insert, null Hash\n ");
	}

	ht = createHash(size,hash_str, compare_str);
	insertHash(ht,"Nike",&inPtr1);
	insertHash(ht,"Adidas",&inPtr2);
	insertHash(ht,"Puma",&inPtr3);
	insertHash(ht,"Diadora",&inPtr4);
	
	printf("\n");
	hashForEach(ht, print_str);
	
	printf("\nTrying to insert value 5: \n");
	if (insertHash(ht,"Nike",&inPtr1)== 3)
	{
		printf ("\n%d Already exists\n", inPtr1);
	}

	printf("\nDeleting Nike - value 10:\n");
	deleteElem(ht,"Nike",destroy_key,destroy_str,fp);
	hashForEach(ht, print_str);
	printf("\n\nSearching Nike - Value 10\n");

	if (findHash(ht,"Nike")==2)
	{
		printf("Not Found !\n");
	}
	else
	{
		printf("Found!\n");
	}
	printf("\nDeleting Nike again - value 10:\n");
	if (deleteElem(ht,"Nike",destroy_key,destroy_str,fp)!=0)
	{
		printf("Item does not exist\n");
	}
	hashForEach(ht, print_str);
	printf("\n");

	destroyHash(ht,destroy_key, destroy_str,fp);

	fclose(fp);
	return 0;
}

void destroyStr(void* elem, void* context)
{
    FILE* fp = (FILE*) context;
	int* n = (int*) elem;
	
	fprintf(fp,"%d ", *n);
}

void printStr(void* _elem)
{
	int* n = (int*) _elem;
	printf("%d ", *n);
}

int compareStr(void *_elemA, void *_elemB)
{
	char *a =(char*) _elemA;
	char *b =(char*) _elemB;
    return (strcmp(a,b));    
}

unsigned long hashStr(void* str)
{
	unsigned char* s = (unsigned char*) str;
    unsigned long hash = 5381;
    int c;

    while (c=*s++)
    {
        hash = ((hash<<5)+hash)+c;
    }
    return hash;
}

void destroyKey(void* elem, void* context)
{
	FILE* fp = (FILE*) context;
	unsigned char* n = (unsigned char*) elem;
	
	fprintf(fp,"%s ", n);
	return;
	
}
