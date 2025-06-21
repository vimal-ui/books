/*********************************************************************
* Filename: 1-DArraysasArguments.c
* Description: To understand how to pass 1-D arrays as arguments
* Author:   E&R Department, Infosys Technologies Ltd. 
* Date:     16-Mar-2007
*********************************************************************/

#include <stdio.h>
#include <stdlib.h>


/* Declare the prototype of the functions */
void fnEmployeeBasicSalaryIncrement(double adBasicSalaryTemp[]);

/*********************************************************************
* Function: main()
* Description: To accept details of an employee and to 
*	       increase the basic salary by invoking a 
*              function.
* Input Parameters:
*   int argc - Number of command line arguments
*   char **argv  The command line arguments passed
* Returns: 0 on success to the operating system
*********************************************************************/

int main (int argc, char** argv) 
{

 	/* Declare the array to hold employee ids and initialize them */
	int aiEmpId[] = {1001, 1002, 1003, 1004,1005};

	/* Declare the array to hold basic salaries and initialize them */
	double adBasicSalary[5]= {10500,12300,7000,5500,15000};
	

	/* Call the function to increase the basic salary */
	fnEmployeeBasicSalaryIncrement (adBasicSalary);

		/* Print the Details */
		/* Replace this comment and write the code here to print the employee  details */

	/* Return a success code to the Operating System */
 	return 0;
}



/*********************************************************************
* Function: fnEmployeeBasicSalaryIncrement
* Description: To increase the basic salary of employees
* Input Parameters:
*    double adBasicSalaryTemp[] - Basic salary of employees
* Returns: None
*********************************************************************/

void fnEmployeeBasicSalaryIncrement(double adBasicSalaryTemp[])
{
	/* Increase the basic salary */
	/* Replace this comment and write the code here to increase 
	   the basic salary by 20% */
}

/*********************************************************************
* End of 1-DArraysasArguments.c
*********************************************************************/
