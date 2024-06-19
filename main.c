#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char *User_command = malloc(sizeof(char));
void Help() {
	printf("===Commands===\n");
	printf("** a: addition\n");
	printf("** s: subtraction **\n");
	printf("** m: multiplication **\n");
	printf("** d: division **\n");
	printf("** r: squreroot **\n");
	printf("** p: power **\n");
	printf("** s: sine **\n");
	printf("** c: cosine **\n");
	printf("** t: tangent **\n");
	printf("==============\n");

}
void Greet() {
	printf("-----Calculator-App-----");
	printf("\n\n\n");
	Help();
}
void GetUserCommand() {
	printf("(h): help\n");
	printf("(e): exit\n");
	printf("Enter a command: ");
	scanf("%c" , User_command);
}
void addition() {
	double* val1 = malloc(sizeof(double));
	double* val2 = malloc(sizeof(double));
	double* result = malloc(sizeof(double));
	
	printf("Enter first value: ");
	scanf("%lf", val1);
	printf("Enter second value: ");
	scanf("%lf", val2);
	
	*result = *val1 + *val2;
	
	printf("The result is: %lf \n", *result);
	
	free(val1);
	free(val2);
	free(result);
}
void subtraction() {
	double* val1 = malloc(sizeof(double));
	double* val2 = malloc(sizeof(double));
	double* result = malloc(sizeof(double));

	printf("Enter first value: ");
	scanf("%lf", val1);
	printf("Enter second value: ");
	scanf("%lf", val2);

	*result = *val1 - *val2;

	printf("The result is: %lf \n", *result);

	free(val1);
	free(val2);
	free(result);
}
void multiplication() {
	double* val1 = malloc(sizeof(double));
	double* val2 = malloc(sizeof(double));
	double* result = malloc(sizeof(double));

	printf("Enter first value: ");
	scanf("%lf", val1);
	printf("Enter second value: ");
	scanf("%lf", val2);

	*result = *val1 * *val2;

	printf("The result is: %lf \n", *result);

	free(val1);
	free(val2);
	free(result);
}
void division() {
	double* dividend = malloc(sizeof(double));
	double* divisor = malloc(sizeof(double));
	double* result = malloc(sizeof(double));

	printf("Enter the dividend: ");
	scanf("%lf", dividend);
	printf("Enter the divisor: ");
	scanf("%lf", divisor);

	*result = (*dividend) / (*divisor);

	printf("The result is %lf \n", *result);

	free(dividend);
	free(divisor);
	free(result);
}
void squareroot() {
	double* val = malloc(sizeof(double));
	double* result = malloc(sizeof(double));

	printf("Enter the value: ");
	scanf("%lf", val);
	
	*result = sqrt(*val);

	printf("The result is %lf \n", *result);

	free(val);
	free(result);
}
void power() {
	double* base = malloc(sizeof(double));
	double* exponent = malloc(sizeof(double));
	double* result = malloc(sizeof(double));

	printf("Enter the base: ");
	scanf("%lf", base);
	printf("Enter the exponent: ");
	scanf("%lf", exponent);
	
	*result = pow(*base, *exponent);

	printf("The result is %lf \n", *result);

	free(base);
	free(exponent);
	free(result);
}
int main() {

	return 0;
}
