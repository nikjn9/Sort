#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <algorithm>
#include <stack>
#include "SortingTest.h"

using namespace std;

void swap(int &a, int &b){
	int t = a;
		a = b;
		b = t;
}

void SortingTest::setMod(int m){
	mod = m;
}

	
void SortingTest::setTestsCount(int tests){
	testsCount = tests;
}


bool SortingTest::isCorrect(int length){
	if(a == NULL && b == NULL) return true;
	if(a == NULL || b == NULL) return false;
	
	sort(b, b+length);
	
	for(int i = 0; i < length; i++)
		if(a[i] != b[i]) return false;
	
	return true;
}



bool SortingTest::Test(void (*f)(int *, int)){
	srand(time(NULL));
	
	a = new int[testsCount];
	b = new int[testsCount];
	stack <int> fails;
	
	for(int l = 0; l <= testsCount; l++){
		fillArray(l);
		printf("Input : ");
		printArray(a, l);
		
		f(a, l);
		if(!isCorrect(l)) fails.push(l);
		
		printf("Output: ");
		printArray(a, l);
	}
	
	
	delete[] a;
	delete[] b;
	
	if(fails.empty()){
		printf("Add tests ok\n");
		return true;
	}
	
	printf("Failed for following lengths: ");
	
	while(!fails.empty()){
		printf("%d ", fails.top());
		fails.pop();
	}
	
	printf("\n");
	return false;
}

void SortingTest::printArray(int *a, int length){
	for(int i = 0; i < length; i++)
		printf("%3d ", a[i]);
	printf("\n");
}


void SortingTest::fillArray(int length){
	for(int i = 0; i < length; i++)
		a[i] = b[i] = rand() % mod;
}
