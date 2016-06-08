/*
 * Simple Integer List Test
 * 
 * Tests CN_Lists and how they can be used to store integers and
 * print them out in the order that they were added to the list.
 * 
 * This application stores 0 through 9 in the list and then
 * prints them out in that order by iterating through.
 */

#include <stdio.h>
#include <stdlib.h>

#include "../cn_list.h"

main() {
	//Initialize the list
	CN_LIST list = cn_list_init(int);
	
	int a;
	for (a = 0; a < 10; a++)
		cn_list_push_back(list, &a); //Pushes the value of "a" into the list
	
	int i = 0;
	for (; i < cn_list_size(list); i++)
		printf("%d\n", cn_list_get(list, int, i)); //Prints to stdout.
	
	//Free the list
	cn_list_free(list);
}
