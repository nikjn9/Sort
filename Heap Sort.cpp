#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "SortingTest.h"

using namespace std;

void heap_down(int *a, int i, int len){
	int M = i;
	
	while(i < len){		
		int l = 2*i+1;
		int r = l+1;
		
		if(l < len && a[l] > a[M]) M = l;
		if(r < len && a[r] > a[M]) M = r;
		
		if(M == i) break;
		swap(a[i], a[M]);

		
		i = M;
	}
}

void heap_sort(int *a, int len){
	if(a == NULL || len <= 1) return;
	
	for(int i = len-1; i >= 0; i--)
		heap_down(a, i, len);
		
	while(len > 1){
		swap(a[0], a[len-1]);
		len--;
		heap_down(a, 0, len);
	}
}


int main(){


	SortingTest t;
	t.Test(heap_sort);

	return 0;
	
}
