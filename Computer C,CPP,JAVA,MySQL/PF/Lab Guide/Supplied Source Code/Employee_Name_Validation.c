/*********************************************************************
* Filename: EmpNameValidation.c
* Description: To understand how to pass individual structure members
*              as arguments to functions.
* Author:   E&R Department, Infosys Technologies Ltd. 
* Date:     16-Mar-2007
*********************************************************************/

#include <stdio.h>
#include <string.h>

#define VALID 1
#define INVALID 0

/* Declare the structure to store employee details */
struct _employee
{
	int iEmpId;
	char acEmpName[20];
	double dBasicSalary;
};

/* Define a new data type named "Employee" */
typedef struct _employee employee;

/* Declare the prototype of the function */
int fnValidateEmpName(char acEmpNameTemp[]);

/*********************************************************************
* Function: main()
* Description: To validate the employee name by invoking a function
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
	int iRet;

	/* Accept the employee details */
	printf("Enter employee id: ");
	scanf("%d",&sEmp.iEmpId);
	printf("Enter employee name: ");
	scanf("%s",sEmp.acEmpName);
	printf("Enter basic salary: ");
	scanf("%.2lf",&sEmp.dBasicSalary);
	
	/* validate the employee name */
	iRet = fnValidateEmpName(sEmp.acEmpName);
	
	/* Check the return value */
	if (iRet == VALID)
	{
		printf("%s is a valid name",sEmp.acEmpName);
	}
	else 
	{
		printf("%s is an invalid name",sEmp.acEmpName);
	}

	/* Return a success code to the Operating System */
 	return 0;
}

/*********************************************************************
* Function: fnValidateEmpName
* Description: Validates the employee name
* Input Parameters:
*   char acEmpNameTemp[] - Name of the employee
* Returns: VALID if the employee name is valid, otherwise INVALID 
*********************************************************************/
fnValidateEmpName(char acEmpNameTemp[])
{
	/* Validate the employee name */
/* Replace this comment and write the code here to validate the 
	   employee name and to return VALID or INVALID depending on 
	   whether it is valid or not */
}
/*********************************************************************
* End of EmpNameValidation.c
*********************************************************************/
