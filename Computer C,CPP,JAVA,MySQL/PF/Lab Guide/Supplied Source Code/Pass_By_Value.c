/*********************************************************************
* Filename: PassbyValue.c
* Description: To understand pass by value 
* Author:   E&R Department, Infosys Technologies Ltd. 
* Date:     16-Mar-2007
*********************************************************************/

#include <stdio.h>
#include <stdlib.h>


#define VALID 1
#define INVALID 0

/* Declare the prototype of the functions */
void fnEmployeeJobBandChange(char cJobBandTemp, double dBasicSalaryTemp);
int fnValidateJobBand(char cJobBandTemp);

/*********************************************************************
* Function: main()
* Description: To accept details of an employee and to change the 
*              job band and increase the basic salary by invoking a
*              function.
* Input Parameters:
*   int argc - Number of command line arguments
*   char **argv  The command line arguments passed
* Returns: 0 on success to the operating system
*********************************************************************/

int main (int argc, char** argv) 
{

 	/* Declare the variables */
	int iEmpId;
	char cJobBand;
	double dBasicSalary;
	int iRet;

	/* Accept the employee details from the user*/
	printf("Enter the employee id ");
	scanf("%d",&iEmpId);

	/* Clear the buffer */
	fflush(stdin);

	printf("Enter the job band ");
	scanf("%c",&cJobBand);
	printf("Enter the Basic Salary ");
	scanf("%lf",&dBasicSalary);
	
	/* Call the function to validate the job band */
	iRet = fnValidateJobBand(cJobBand);

	/* Display the message based on the return value */
	if (iRet == INVALID)
	{
		printf("\n\n%c is an invalid job band\n", cJobBand);
	}
	else
	{
		/* Call the function to change the job band and increase 
              the basic salary */
		fnEmployeeJobBandChange(cJobBand,dBasicSalary);


		/* Print the employee id */
		printf("\n\nEmployee Id:%d\n",iEmpId);
		printf("Updated Job Band %c\n",cJobBand);
		printf("Updated Basic Salary %lf\n",dBasicSalary);
	}

	/* Return a success code to the Operating System */
 	return 0;
}



/*********************************************************************
* Function: fnValidateJobBand()
* Description: To accept the job band of an employee
*              and to validate the job band. The valid job bands are
*              'A', 'B', 'C' and 'D'
* Input Parameters:
*   char cJobBand - The job band of an employee
* Returns: VALID if the job band is valid and INVALID if the job band 
*          is invalid
*********************************************************************/

int fnValidateJobBand(char cJobBandTemp)
{
	/* Validate the job band */
	switch (cJobBandTemp)
	{
		case 'A':
		case 'a': return VALID;
		
		case 'B': 
		case 'b': return VALID;

		case 'C': 
		case 'c': return VALID;

		case 'D': 
		case 'd': return VALID;

		default : return INVALID;

	}
}

/*********************************************************************
* Function: fnEmployeeJobBandChange
* Description: To update the job band and basic salary of an employee
* Input Parameters:
*   char cJobBandTemp - The job band of an employee
*   double dBasicSalaryTemp - Basic salary of an employee
* Returns: None
*********************************************************************/

void fnEmployeeJobBandChange(char cJobBandTemp, 
                             double dBasicSalaryTemp)
{
	/* Update the job band and increase the basic salary */
	/* Replace this comment and write the code here to update the
	  job band and increase the basic salary according to the 
	  conditions specified */
}


/*********************************************************************
* End of PassbyValue.c
*********************************************************************/
