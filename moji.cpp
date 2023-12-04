#include<iostream>
#include"print.h"
#include"loadData.h"
int main(void) {
	char moji[64] = { 0 };
	loadData("data.txt", moji);
	print(moji);
	return 0;
}