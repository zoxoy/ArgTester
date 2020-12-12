#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	system("title Argument Tester");
	FILE* file = NULL;
	file=fopen("arg.txt", "w");
	printf("Amount of arguments : %d\n", argc);
	fprintf(file,"Amount of arguments : %d\n",argc);
	for (int i = 0; i < argc; i++) {
		printf("Argument %d: %s\n", i, argv[i]);
		fprintf(file, "Argument %d: %s\n", i, argv[i]);
	}
	fclose(file);
	printf("\nThe contents above have been written to file \"arg.txt\" successfully.\n\n");
	system("pause");
	return 0;
}