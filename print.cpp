#include<iostream>
#include "print.h"
void print(char* moji) {
	for (int i = 0; i <= 71; i++) {
		if (moji[i] == '1')printf("–");
		if (moji[i] == '0')printf("@");
		if (moji[i] == '\n')printf("\n");
	}
}
