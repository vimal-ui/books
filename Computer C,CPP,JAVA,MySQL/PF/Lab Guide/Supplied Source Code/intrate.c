/**********************************************************************
* File Name: intrate.c
* Description: Given a principal amount and term, finds the
*    interest rate and computes the amount of interest
*    earned after the term.
*
* Author: E&R Department, Infosys Technologies Ltd.
* Date: 28-Jan-2005
**********************************************************************/

#include <stdio.h>

/* Forward declaration of functions defined later */

float fnComputeInterestRate (int iNumberOfMonths);

/**********************************************************************
* Function:	main()
* Description:	Reads principal amount and term, and then
*					Displays applicable interest rate.
*					Displays Interest amount earned at the end of term.
*
* Input Parameters:
*	int argc - Number of command line arguments
*	char **argv  The command line arguments passed
*
* Returns:	0 on success to the operating system
**********************************************************************/

int main (int argc, char** argv)
{
	float fAmount;				/* Stores the amount */
	int iNumberOfMonths;		/* Stores Term */
	float fRateOfInterest;		/* Stores Rate of Interest*/
	float fAmountEarned;		/* Stores interest Amount earned at the end of term */

	/* Read the Principal Amount */
	printf ("Enter the Principal Amount (in USD): ");
	scanf ("%f", &fAmount);

	/* Read the Term (Number of Months) */
	printf ("Enter the Term (Months): ");
	scanf ("%d", &iNumberOfMonths);

	fRateOfInterest = fnComputeInterestRate (iNumberOfMonths);

	/* ERROR HANDLING: Check if term entered was valid! */
	if (fRateOfInterest == -1.0) {
		/* Invalid Term */
		printf ("\nERROR: Invalid Term!\n");
	}
	else {
		/* Valid Term! */
		printf ("\n\nPrincipal Amount: %.2f USD\n", fAmount);
		printf ("Term: %d months\n", iNumberOfMonths);
		printf ("Rate Of Interest: %.2f%%\n", fRateOfInterest);

		fAmountEarned = fAmount * (fRateOfInterest / 100);

		/* Print the interst amount earned after term */
		printf ("Interest amount earned after Term: %.2f USD\n", fAmountEarned);
	}

	/* Return a status code to Operating System */
	return 0;
}

/**********************************************************************
* Function:	fnComputeInterestRate
* Description: Given the term of the deposit, computes and returns
*    the interest rate.
*
* Criteria for Interest: Minimum 1 month term and maximum is 48 months
*	    1 month to 2 months  1%
*	    3 months to 5 months  3.5%
*	    6 months to 11 months  4.5%
*	    12 months to 24 months 5.0%
*	    25 months to 48 months 5.5%
*      Invalid duration 0.0%
* PARAMETERS:
*	int iNumberOfMonths - Number of months. Can have values 1-48 only
* RETURNS: Appropriate Rate of Interest. -1.0 in case of error.
**********************************************************************/

float fnComputeInterestRate (int iNumberOfMonths )
{

	float fInterestRate;



		if (iNumberOfMonths < 3) {
			/* Term: 1-2 months */
			fInterestRate = 1.0;
		}
		else if ((iNumberOfMonths >3) && (iNumberOfMonths <6)) {
			/* Term: 3-6 months */
			fInterestRate = 3.5;
		}
		else if ((iNumberOfMonths >= 6) && (iNumberOfMonths < 11)) {
			/* Term: 6-11 months */
			fInterestRate = 4.5;
		}
		else if ((iNumberOfMonths > 12) && (iNumberOfMonths < 24)) {
			/* Term: 12-24 months */
			fInterestRate = 5.0;
		}
		else if ((iNumberOfMonths >= 25) && (iNumberOfMonths < 48)) {
			/* Term: 25-48 months */
			fInterestRate = 5.5;
		}
		else {
			/* ERROR Condition. Return '-1.0' */
			fInterestRate = -1.0;
		}

	return fInterestRate;
}

/**********************************************************************
* End of intrate.c
**********************************************************************/

