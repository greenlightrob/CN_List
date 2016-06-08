/*
 * Simple Struct example with CN_Lists
 * 
 * CN_Lists hold any datatype as long as the size specified is the same as what you store in it.
 */

#include <stdio.h>
#include <stdlib.h>

#include "../cn_list.h"

typedef struct thing {
	int a, b;
} THING;

main() {
	CN_LIST list = cn_list_init(THING);
	
	THING a;
	a.a = 2;
	a.b = 3;

	cn_list_push_back(list, &a); //Push a copy of a to list

	//Update the original struct
	a.a++;
	a.b = a.a + a.b;
	cn_list_push_back(list, &a); //Push another copy of a to list
	
	CNL_ITERATOR ii = 0; //Iterator
	THING* iii;          //This is an iterator too.
	cn_list_traverse(list, ii) {
		iii = ii->data;
		printf("STRUCT { A: %d, B: %d }\n", iii->a, iii->b);
	}
	
	cn_list_free(list);
}
