/*********************************************************************
* Filename: 2-DArraysasArguments.c
* Description: To understand how to pass 2-D arrays as arguments
* Author:   E&R Department, Infosys Technologies Ltd. 
* Date:     16-Mar-2007
*********************************************************************/

#include <stdio.h>
#include <stdlib.h>


/* Declare the prototype of the function */
void fnCustFeedbackAverage(int aiEmpCustFeedbackTemp[][4],
						   float afAvgFeedbackTemp[]);

/*********************************************************************
* Function: main()
* Description: To accept details of an employee 
*   	       increase the basic salary by invoking a 
*              function.
* Input Parameters:
*   int argc - Number of command line arguments
*   char **argv  The command line arguments passed
* Returns: 0 on success to the operating system
*********************************************************************/

int main (int argc, char** argv) 
{

 	/* Declaration of 2-D array. Since there are two employees and 
	   three customers, row size is 2 and the column size is 4 
	   (To store employee id and the feedback) */
	int aiEmpCustFeedback[2][4]={71005,7,8,10,71006,5,5,7}; 
	float afAvgFeedback[2];


	/* Call the function to find the average feedback and it 
        should be stored into aiAvgFeedback array */
	fnCustFeedbackAverage(aiEmpCustFeedback,
						    afAvgFeedback);
		/* Print the Details */
		/* Replace this comment and write the code here to print 
              the customer feedbak and the average feedback */

	/* Return a success code to the Operating System */
 	return 0;
}



/*********************************************************************
* Function: fnCustFeedbackAverage
* Description: To find the average customer feedback
* Input Parameters:
*    int aiEmpCustFeedbackTemp[][4] - Customer feedback
*    float afAvgFeedbackTemp[] - Average customer feedback
* Returns: None
*********************************************************************/

void fnCustFeedbackAverage(int aiEmpCustFeedbackTemp[][4],
						   float afAvgFeedbackTemp[])
{
	/* Find the average customer feedback */
	/* Replace this comment and write the code here to compute the
	   average customer feedback and store into afAvgFeedbackTemp[]
	   array */
}

/*********************************************************************
* End of 2-DArraysasArguments.c
*********************************************************************/
