#include <stdiolib>

char User_command;
void Help() {
	printf("===Commands===");
	printf("** a: addition");
	printf("** s: subtraction **")
	printf("** m: multiplication **");
	printf("** d: division **");
	printf("** r: squreroot **");
	printf("** p: power **");
	printf("** s: sine **");
	printf("** c: cosine **");
	printf("** t: tangent **");
	printf("==============");

}
void Greet() {
	printf("-----Calculator-App-----");
	printf("\n\n\n");
	Help();
}
void GetUserCommand() {
	scanf("%c" , User_command);
}
int main() {

	return 0;
}
