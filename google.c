#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

//It googles an input

int main(){
	char term[100];
	char google[200] = "firefox https://www.google.com/search?q=";
	printf("What would you like to search about:\n");
	scanf("%s", term);
	strcat(google, term);
	system(google);
	return 0;
}

// 8-26-17

