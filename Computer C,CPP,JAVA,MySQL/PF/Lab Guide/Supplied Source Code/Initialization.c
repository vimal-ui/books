/******************************************************************************
* Filename    : structures.c
* Author      : Education & Research Dept, Infosys Technologies Limited
* Date        : 19 May 2010
* Description : Contains the functions required for initializing the array of 
*				structures with some initial values
******************************************************************************/

/* Include files */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* Declaration of functions and constants used */
#include "structures.h"
void fnInitializeItem(){
	gasItem[0].iItemCode=1000;
	strcpy(gasItem[0].acItemName,"chair");
	gasItem[0].dItemPrice=200;
	gasItem[0].iSupplierCode=1111;
	gasItem[1].iItemCode=1001;
	strcpy(gasItem[1].acItemName,"fan");
	gasItem[1].dItemPrice=600;
	gasItem[1].iSupplierCode=2222;
}

void fnInitializeSupplier(){
	gasSupplier[0].iSupplierCode=1111;
	strcpy(gasSupplier[0].acSupplierName,"Hareram traders");
	strcpy(gasSupplier[0].acPhoneNo,"9898989898");
	gasSupplier[0].iSupplierCode=2222;
	strcpy(gasSupplier[0].acSupplierName,"Abdullah traders");
	strcpy(gasSupplier[0].acPhoneNo,"9898989899");
}
/******************************************************************************
* End of FileFunctions.c
******************************************************************************/
