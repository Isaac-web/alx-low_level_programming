#include <stdio.h>
int main(){
    char myChar;
	int myInt;
	long int myLongInt;
	long long int myLongLongInt;
    float myFloat;
    char myByte;
	
	printf("Size of a char: %lu byte(s)\n", sizeof(myChar));
	printf("Size of an int: %lu byte(s)\n", sizeof(myInt));
	printf("Size of a long int: %lu byte(s)\n", sizeof(myLongInt));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(myLongLongInt));
	printf("Size of a float: %lu byte(s)\n", sizeof(myFloat));
	return 0;
}