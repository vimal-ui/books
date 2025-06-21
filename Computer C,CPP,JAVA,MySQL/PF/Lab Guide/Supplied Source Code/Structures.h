/******************************************************************************
* Filename    : Structures.h
* Author      : Education & Research Dept, Infosys Technologies Limited
* Date        : 19/May/2010
* Description : Declaration of structures
******************************************************************************/


/* Item Structure Declaration*/
typedef struct _Item
{
	int iItemCode;
	char acItemName[26];
	double dItemPrice;
	int iSupplierCode;
}Item;

/* Supplier Structure Declaration*/
typedef struct _Supplier
{
	int iSupplierCode;
	char acSupplierName[26];
	char acPhoneNo[11];
}Supplier;

/* Declaration of array of structures */
Item gasItem[10];
Supplier gasSupplier[10];

/******************************************************************************
* End of Structures.h
******************************************************************************/
