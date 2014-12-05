#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "SortingTest.h"

using namespace std;


void bubble_sort(int *a, int len){
	if(a == NULL || len <= 1) return;
	
	for(int i = 0; i < len-1; i++){
		for(int j = i+1; j < len; j++)
			if(a[i] > a[j]) swap(a[i], a[j]);
	}
}


int main(){

	SortingTest t;
	t.Test(bubble_sort);

	return 0;
	
}
