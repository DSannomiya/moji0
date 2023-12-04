#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<assert.h>
#include"loadData.h"
void loadData(const char* filename, char* moji) {
	FILE* fp = fopen(filename, "r");
	assert(fp);
	(void)fscanf(fp, "%[0-1\n]", moji);
	fclose(fp);
}