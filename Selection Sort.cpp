#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "SortingTest.h"

using namespace std;


void selection_sort(int *a, int len){
	if(a == NULL || len <= 1) return;
	
	for(int i = 0; i < len-1; i++){
		
		int m  = a[i+1];
		int mi = i+1;
		
		for(int j = i+1; j < len; j++){
			if(m > a[j]){
				m  = a[j];
				mi = j;
			}
		}
		
		if(m < a[i]) swap(a[i], a[mi]);
	}
}


int main(){


	SortingTest t;
	t.Test(selection_sort);

	return 0;
	
}
