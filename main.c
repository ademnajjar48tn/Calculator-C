#include <stdio.h>
#include <stdlib.h>

char *User_command;
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

	*result = *val1 + *val2;

	printf("The result is: %lf \n", *result);

	free(val1);
	free(val2);
	free(result);
}
int main() {

	return 0;
}
