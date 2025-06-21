/*********************************************************************
* Filename: StructuresandPassbyReference.c
* Description: To understand how to pass whole structure
*              as arguments to functions using pass by reference.
* Author:   E&R Department, Infosys Technologies Ltd. 
* Date:     16-Mar-2007
*********************************************************************/

#include <stdio.h>
#include <string.h>

/* Declare the structure to store the date */
struct _date 
{
	short int iDay;
	short int iMonth;
	short int iYear;
};

/* Define a new data type named "Date" */
typedef struct _date date;

/* Declare the structure to store employee details */
struct _employee
{
	int iEmpId;
	char acEmpName[20];
	date sDob;
	double dBasicSalary;
	float dAllowances;
};

/* Define a new data type named "Employee" */
typedef struct _employee employee;

/* Declare the prototype of the functions */
void fnComputeAllowances(employee *psEmpTemp);
void fnDisplayEmployeeDetails(employee sEmpTemp);

/*********************************************************************
* Function: main()
* Description: To incrase the basic salary of the employee by invoking a 
*              function
* Input Parameters:
*   int argc - Number of command line arguments
*   char **argv  The command line arguments passed
* Returns: 0 on success to the operating system
*********************************************************************/

int main (int argc, char** argv) 
{

 	/* Declare the structure variable */
	employee sEmp;

	/* Declare the other required variables */
	

	/* Initialize the employee details */
	sEmp.iEmpId = 1001;
	strcpy(sEmp.acEmpName,"Dennis");
	sEmp.dBasicSalary = 4500.00;
	sEmp.sDob.iDay = 15;
	sEmp.sDob.iMonth = 8;
	sEmp.sDob.iYear = 1985;
		
	/* Compute the allowances by invoking a function */
	fnComputeAllowances(&sEmp);
	
	/* Display the employee details by invoking a function */
	fnDisplayEmployeeDetails(sEmp);

	/* Return a success code to the Operating System */
 	return 0;
}

/*********************************************************************
* Function: fnIncreaseBasicSalary
* Description: Increases the basic salary by 20%
* Input Parameters:
*   *psEmpTemp - pointer to the structure containing employee details
* Returns: structure variable containing employee details
*********************************************************************/
void fnComputeAllowances(employee *psEmpTemp)
{
	/* Compute the allowances as 40% of the basic salary */
	/* Replace this comment and write the code here to compute the 
	   allowances */
	
}

/*********************************************************************
* Function: fnDisplayEmployeeDetails
* Description: Display the employee details
* Input Parameters:
*   sEmpTemp - Structure varaible containing employee details
* Returns: None
*********************************************************************/
void fnDisplayEmployeeDetails(employee sEmpTemp)
{
	/* Declaration of variables */
     /* Replace this comment and write the variable declaration for 
        The necessary variables */

	/* Compute the gross salary */
	/* Replace this comment and write the code here to compute the 
	   gross salary */
	
	/* Print the employee details */
     /* Replace this comment and write the code here to print the 
        Employee details */	
}

/*********************************************************************
* End of StructureasArguments.c
*********************************************************************/
