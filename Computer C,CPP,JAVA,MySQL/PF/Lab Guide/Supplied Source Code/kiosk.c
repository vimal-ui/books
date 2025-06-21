/***********************************************************
* File Name: kiosk.c
* Author: E&R Department, Infosys Technologies Ltd.
* Date: 2-Jan-2005
* Description: This program is part of a kiosk installed
*    in a retail outlet. This program is used by customers
*    to check the price of an item and discounts if any.
***********************************************************/

#include <stdio.h>

#define MAX_ITEMS	5

/* Global Variables */

int iItemCodes [] = { 101, 102, 103, 104, 105 };
float fItemCost [] = { 899.95f, 250.0f, 102.0f, 798.95f, 254.6f };
float fItemDiscount [] = { 0.0f, 0.0f, 0.0f, 10.5f, 30.0f};

void fnDisplayItems();
char *fnGetItemName (int iItemCode);

/***********************************************************
* Function:	main()
* Description:	Entry point. Accepts user input and prints
*     the price and discount.
* Input Parameters:
*	int argc - Number of command line arguments
*	char **argv  The command line arguments passed
* Returns:	0 on success to the operating system
***********************************************************/

int main (int argc, char** argv)
{
	int iCount, iItemCode, iIndex;

	/* Call the function to display all items */
	fnDisplayItems ();

	/* Ask user to select an item code to
	       view price and discount */
	printf ("Enter Item code for price and discount: ");
	scanf ("%d", &iItemCode);

	/* Print the Item name and code first */
	printf ("\n\nItem: (%d) %s\n",
		iItemCode, fnGetItemName (iItemCode));

	/* Initialize index to -1 */
	iIndex = -1;
	/* Get the array index of the selected item */
	for (iCount = 0; iCount < MAX_ITEMS; iCount++) {
		if (iItemCodes [iCount] == iItemCode) {
			/* Item code found in list. break */
			iIndex = iCount;
			break;
		}
	}

	if (iIndex == -1) {
		/* Could not find the item code entered by user */
		printf ("Please select a valid Item code\n");
	}
	else {
		printf ("Price: %.2f\n", fItemCost [iIndex]);
		printf ("Discount: %.2f %%\n", fItemDiscount [iIndex]);
	}

	return 0;
}

/***********************************************************
* Function:	fnGetItemName
* Description:	Given an Item ID, returns the name.
* Input Parameters:
*	int iItemId - Id of the Item
* Returns:	Name of the item.
***********************************************************/

char *fnGetItemName (int iItemCode)
{
	char *pcItemName;
	switch (iItemCode) {
		case 101:
			pcItemName = "Acme Shoes";		
		case 102:
			pcItemName = "Best T-Shirt";			
		case 103:
			pcItemName = "Superb sox";			
		case 104:
			pcItemName = "Swanky Jacket";		
		case 105:
			pcItemName = "Leather Belt";			
		default:
			pcItemName = "ERROR: Unknown Item";
			break;
	};
	return pcItemName;
}

/***********************************************************
* Function:	fnDisplayItems
* Description: Displays all the items with code in
*     a tabular form.
* Input Parameters: NONE
* Returns: void
***********************************************************/

void fnDisplayItems() {

	int iCount, iItemCode;

	printf ("-------- List of Items in store --------\n");
	printf ("#  ITEMCODE ITEM NAME\n");
	for (iCount = 0; iCount < MAX_ITEMS; iCount ++) {
		iItemCode = iItemCodes [iCount];
		printf ("%d. (%d)     %s \n",
			(iCount +1), iItemCode, fnGetItemName (iItemCode));
	}
	printf ("----------------------------------------\n");

}

/***********************************************************
* End of kiosk.c
***********************************************************/
