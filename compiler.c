#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

//It compiles a certain c program, repeatedly

int main(){
	char str[100];
	char cmd[200] = "gcc -o ";
	printf("Name of the file (without the extension):\n");
	scanf("%s", str);
	strcat(cmd, str);
	strcat(cmd, " ");
	strcat(cmd, str);
	strcat(cmd, ".c");
	while(1 < 2){
		system(cmd);
	}
	return 0;
}

// 8-26-17
