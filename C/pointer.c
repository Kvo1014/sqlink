#include <stdio.h>

struct dat{
int age;
char name[];
};


typedef struct{
int age;
char name[];
}person;

void main()
	{
		struct dat moshe;
		moshe.age=15;
		moshe.name="m";
		
		printf("%d : %s", moshe.age, moshe.name);
		person alex;
		alex.age=26;
		alex.name="m";
		printf("%d : %s", alex.age, alex.name);
	}
