/*********************************************************************
* Filename: StructuresandPassbyValue.c
* Description: To understand how to pass whole structure
*              as arguments to functions using pass by value.
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
};

/* Define a new data type named "Employee" */
typedef struct _employee employee;

/* Declare the prototype of the functions */
employee fnIncreaseBasicSalary(employee sEmpTemp);
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
	
	/* Initialize the employee details */
	sEmp.iEmpId = 1001;
	strcpy(sEmp.acEmpName,"Dennis");
	sEmp.dBasicSalary = 4500.00;
	sEmp.sDob.iDay = 15;
	sEmp.sDob.iMonth = 8;
	sEmp.sDob.iYear = 1985;
		
	/* Increase the basic salary by invoking a function */
	sEmp=fnIncreaseBasicSalary(sEmp);
	
	/* Display the employee details by invoking a function */
	fnDisplayEmployeeDetails(sEmp);

	/* Return a success code to the Operating System */
 	return 0;
}

/*********************************************************************
* Function: fnIncreaseBasicSalary
* Description: Increases the basic salary by 20%
* Input Parameters:
*   sEmpTemp - Structure varaible containing employee details
* Returns: structure variable containing employee details
*********************************************************************/
employee fnIncreaseBasicSalary(employee sEmpTemp)
{
	/* Increase the basic salary by 20% */
/* Replace this comment and write the code here to increase 
	   the basic salary by 20% */

	/* Return the structure variable */
	return sEmpTemp;
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
	/* Display the employee details */
/* Replace this comment and write the code here to display the
	   employee details */

}

/*********************************************************************
* End of StructuresandPassbyValue.c
*********************************************************************/
