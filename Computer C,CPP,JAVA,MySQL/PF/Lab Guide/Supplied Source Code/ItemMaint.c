/******************************************************************************
* Filename    : ItemMaint.c
* Author      : Education & Research Dept, Infosys Technologies Limited
* Date        : 19 May 2010
* Description : Contains the functions required for item maintenance
******************************************************************************/

/* Include files */
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <conio.h>



#include "Structures.h"

/* Global variable. Stores the Code of the next item that may be added */
int giItemCode=0;

/******************************************************************************
* Function: fnInitializeItemCode                 	
* Description: Reads all the items from the items file and initializes
*		the global variable giItemCode for any new item to be added to
*		the system. The items file should've been opened in the program already!
* Input Parameters: None
* Returns: None
******************************************************************************/

void fnInitializeItemCode () {

	int iRet;
		    
	giItemCode=gasItem[0].iItemCode;
	/* If the structure is empty (no item record found), then
		set the item Code to 1000 */
	if (giItemCode == 0) {
		giItemCode = 1000;
	}
	else {
		for(iRet=1;iRet<10;iRet++){
			if(gasItem[iRet].iItemCode==0){
		/* If the items are already present, then increment the
		   last item code */
				giItemCode= gasItem[iRet-1].iItemCode+1;
				break;
			}
		}
	}
}

/******************************************************************************
* Function: fnAddItem
* Description: Adds a new item entry into the items structure. 
* Input Parameters: 
* 	char acItemName[] - Name of the new item
*   double dItemPrice - Price of the item
*   int iSupplierCode - Supplier Code
* Returns: None
******************************************************************************/

void fnAddItem (char acItemName[],double dItemPrice,int iSupplierCode) {
	int iIndex;
	for(iIndex=0;iIndex<10;iIndex++){
		if(gasItem[iIndex].iItemCode==0){
			/* Create the record to be stored in structure */
			gasItem[iIndex].iItemCode=giItemCode;
			strcpy(gasItem[iIndex].acItemName,acItemName);
			gasItem[iIndex].dItemPrice=dItemPrice;
			gasItem[iIndex].iSupplierCode=iSupplierCode;
			break;
		}
	}
	/* print the Item code */
	printf("\n\t\t\tItem Code : %d",giItemCode);
	
	/* Increment the Item code for the next new item */
	giItemCode++;
	
	printf("\n\n\t\t\tPress any key to return to Main Menu....");
	getch();
}

/******************************************************************************
* Function: fnItemReport
* Description: Prints item details
* Input Parameters: None
* Returns: None
******************************************************************************/

void fnItemReport () {

	int iRet;
	
	/* Clear the screen */
	system("cls");
	printf ("Item Code\tItem Name\tPrice\t\tSupplier Code\n");
	printf ("---------\t----------\t-----\t\t-------------\n");
	
	for(iRet=0;iRet<10;iRet++){
		if(gasItem[iRet].iItemCode!=0){
		/* Display last read record */
		printf ("%d\t\t%s\t\t%lf\t\t%d\n", gasItem[iRet].iItemCode, gasItem[iRet].acItemName,
			gasItem[iRet].dItemPrice,gasItem[iRet].iSupplierCode);
		}
		else{
			break;
		}
	}
	getch();
}


/******************************************************************************
* Function: fnCheckItemName
* Description: Checks whether the item name is already present in the structure
* Input Parameters: char acItemName[] - Item Name
* Returns: 1 if the item name is already present in the structure
*		   0 if the item name is not present in the structure 
******************************************************************************/

int fnCheckItemName (char acItemName[]) {
	
	int iRet;
	char acItemNameInRecord[26];
	
	for(iRet=0;iRet<10 && strcmp(gasItem[iRet].acItemName,"/0");iRet++){
		if(strcmpi(gasItem[iRet].acItemName,acItemName) == 0) {
		
			return 1;
		}
	}
	return 0;

}

/******************************************************************************
* Function: fnCheckSupplierCode
* Description: Checks whether the supplier code is already present in the 
*				structure
* Input Parameters: int iSupplierCode - suppiler code
* Returns: 1 if the supplier code is present in the structure
*		   0 if the supplier code is not present in the structure 
******************************************************************************/

int fnCheckSupplierCode(int iSupplierCode) {
	/* Variable Declarations */
	/* Replace this comment and write thc code here to declare
	   the necessary variables */

	/* Check the supplier code in supplier structure */
	/* Replace this comment and write the code here to check the 
	   supplier code */
}
	
/******************************************************************************
* Function: fnAddNewItem
* Description: Allows user to visually add a new Item into the system
* Input Parameters: None
* Returns: None
******************************************************************************/

void fnAddNewItem () {

	/* Variable declaration */
	int iSupplierCode;
	int iRet;
	char acItemName[26];
	double dItemPrice;

	/* Accept the item name and call the function to 
	   add the item */
	system("cls");
	printf("\t\tItems Maintenance System\n");
	printf("\t\t======================================\n\n");
	printf("\t\t\tAdd an Item\n");
	printf("\t\t\t================\n\n");
	/* Clear the keyboard buffer */
	fflush(stdin);
	printf("\n\t\t\tEnter Item Name :");
	gets(acItemName);

	/* Check the item name in the structure*/
	do {
		iRet = fnCheckItemName(acItemName);
		if (1 == iRet ) {
			printf("\n\t\t\tItem Name already exists\n");
			fflush(stdin);
			printf("\n\t\t\tRe-Enter Item Name :");
			gets(acItemName);
		}
	} while (1 == iRet);

	printf("\n\t\t\tEnter Item Price :");
	scanf("%lf",&dItemPrice);
	printf("\n\t\t\tEnter Supplier Code :");
	scanf("%d",&iSupplierCode);

	do {
		iRet = fnCheckSupplierCode(iSupplierCode);
		if (1 == iRet) {
			printf("\n\t\t\tInvalid Supplier Code\n");
			printf("\n\t\t\tRe-Enter Supplier Code :");
		}
	} while (1 == iRet);

	
	/* Storing the record in the structure */
	fnAddItem(acItemName,dItemPrice,iSupplierCode);
	
}

/******************************************************************************
* Function: fnUpdateItemPriceInStructure
* Description:Updates the item price for a particular item in the structure
* Input Parameters: 
* int iItemCode - Item Code
* double dItemPrice - Item Price
* Returns: None
******************************************************************************/
void fnUpdateItemPriceInStructure(int iItemCode,double dItemPrice) {
	int iRet,iUpdateRet;
	int iItemCodeInRecord;
	for(iRet=0;iRet<10;iRet++){
		/* Find the required record */
		if (gasItem[iRet].iItemCode == iItemCode) {
			
			/* store the new item price in the structure */
			gasItem[iRet].dItemPrice=dItemPrice;
			printf("Price Updated Suceesfully\n");
				getch();
				return;
		}
	}
	printf("Invalid Item Code\n");
	getch();
}


/******************************************************************************
* Function: fnUpdateItemPrice
* Description:Accepts the item id and price
* Input Parameters: None
* Returns: None
******************************************************************************/
void fnUpdateItemPrice() {
	/* Declare Variables */
	int iItemCode;
	double dItemPrice;

	system("cls");
	printf("\t\tItems Maintenance System\n");
	printf("\t\t======================================\n\n");
	printf("\t\t\tUpdate Item Price\n");
	printf("\t\t\t================\n\n");

	printf("\n\t\t\tEnter Item Code :");
	scanf("%d",&iItemCode);
	printf("\n\t\t\tEnter Item Price :");
	scanf("%lf",&dItemPrice);
	
	/* Invoke the function to update the price */
	fnUpdateItemPriceInStructure(iItemCode,dItemPrice);
}

/******************************************************************************
* End of ItemMaint.c
******************************************************************************/