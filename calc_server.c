/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calc.h"

float *
add_1_svc(num *argp, struct svc_req *rqstp)
{
	static float  result;

	/*
	 * insert server code here
	 */
    printf("ADD(%f, %f) function called\n", argp->a, argp->b);
    result = argp->a + argp->b;
	return &result;
}

float *
sub_2_svc(num *argp, struct svc_req *rqstp)
{
	static float  result;

	/*
	 * insert server code here
	 */
    printf("SUB(%f, %f) function called\n", argp->a, argp->b);
    result = argp->a - argp->b;
	return &result;

}

float *
div_3_svc(num *argp, struct svc_req *rqstp)
{
	static float  result;

	/*
	 * insert server code here
	 */
    printf("DIV(%f, %f) function called\n", argp->a, argp->b);
    result = argp->a / argp->b;
	return &result;
}

float *
mult_4_svc(num *argp, struct svc_req *rqstp)
{
	static float  result;

	/*
	 * insert server code here
	 */
    printf("MULT(%f, %f) function called\n", argp->a, argp->b);
    result = argp->a * argp->b;
	return &result;
}