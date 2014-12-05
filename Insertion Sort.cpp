#include <stdio.h>
#include <stdlib.h>
#include "SortingTest.h"

using namespace std;

void insertion_sort(int *a, int len){
	if(a == NULL || len <= 1) return;
	
	for(int i = 1; i < len; i++){
		
		int t = a[i], j = i-1;
		
		while(j >= 0 && a[j] > t){
			a[j+1] = a[j];
			j--;
		}
		
		a[j+1] = t;
	}
}

int main(){
	
	SortingTest t;
	t.Test(insertion_sort);
	
	return 0;
}
