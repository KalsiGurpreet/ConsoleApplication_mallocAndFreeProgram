#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	int* ptr; //uninitialized pointer not pointing to anything.

	

	ptr = (int*)malloc(sizeof(int)); // pointer ptr points to newly allocated memory block.

	/*
	 
	We invoke the malloc function, requiring the allocation of a 
	memory block sufficient to store one value of type int (sizeof (int)) – 
	this enables our program to correctly execute, regardless of 
	how many bytes are utilized by the int type in the specific 
	implementation of the language and/or hardware platform;
	The malloc's return value is assigned to the ptr variable using type casting, 
	converting the pointer of the (void*) type into an (int*) type.

	*/

	printf("%p\n", ptr);

	if (ptr != NULL)
	{
		*ptr = 200;
		printf("pointer points to value of %d\n", *ptr);
		free(ptr); // free up the pointer pointing to allocated memory location.
	}
	else
	{
		printf("allocation failed");
	}
	return 0;

}