/******************************************************************************
* Filename    : RetailAppln.c
* Author      : Education & Research Dept, Infosys Technologies Limited
* Date        : 29-Jun-2009
* Description : Displays the main menu for items maintenace and
*				invokes the respective functions
******************************************************************************/

/* Include files */
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <conio.h>

/* Include the file */
#include "structures.h"

/******************************************************************************
* Function: fnDisplayMainMenu
* Description: Displays the main menu of Retail Application System. Then
*		waits for user's input using scanf function. Until the user types in
*		a selection, control will not be returned to the calling function.
* Input Parameters: None
* Returns: The user's choice
******************************************************************************/

int fnDisplayMainMenu()
{

	int iChoice;
	/* Clear the screen */

	system("cls");

	/* Display the set of choices of main menu and accept a choice */

	printf("\t\tItem Maintenance System\n");
	printf("\t\t======================================\n\n");

	printf("\t\t\tMain Menu\n");
	printf("\t\t\t=========\n\n");

	printf("\t\t\t1. Add Item\n");
	printf("\t\t\t2. Update Item Price\n");
	printf("\t\t\t3. Item Report\n");
	printf("\t\t\t4. Exit\n\n");

	printf("\t\t\tEnter your choice :");
	scanf("%d",&iChoice);
	return iChoice;

}

/******************************************************************************
* Function: fnMainMenu
* Description: Calls fnDisplayMainMenu and waits for user's choice. Upon
*     user's selection, does appropriate action. If user chooses 'exit'
*     option, returns control back to the calling function.
* Input Parameters: None
* Returns: None
******************************************************************************/

void fnMainMenu () {
	int iChoice;

	do {

		/* Display the main menu. Wait for user's response */
		iChoice=fnDisplayMainMenu();

		switch(iChoice) {
			case 1:
				fnAddNewItem();
				break;

			case 2:
				fnUpdateItemPrice();
				break;

			case 3:
				fnItemReport();
				break;
			
			case 4:
				return;

			default:
				printf("\n\n\t\t\tInvalid choice. Press any key to continue.....");
				getch();
				break;
		}

	} while (iChoice != 4);

}

/******************************************************************************
* Function: main
* Description: Entry point of program.
* Input Parameters: None
* Returns: 0 on success to the operating system
******************************************************************************/

int main (int argc, char** argv) {
	int iRet;
	fnInitializeItem();
	fnInitializeSupplier();
	/* Initialize the Dept code for new dept*/
	fnInitializeItemCode ();
	/* Initiate the main menu */
	fnMainMenu();
	return 0;

}

/******************************************************************************
* End of RetailAppln.c
******************************************************************************/
