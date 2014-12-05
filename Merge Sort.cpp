#include <stdio.h>
#include <stdlib.h>
#include "SortingTest.h"

using namespace std;

void merge_sort(int *a, int len){
	if(a == NULL || len <= 1) return;
	
	int l1 = len/2, l2 = len-l1, i;
	int p = 0, q = 0;
	
	int *l = new int[l1];
	int *r = new int[l2];
	
	for(i = 0; i < len; i++){
		if(i < l1) l[p++] = a[i];
		else       r[q++] = a[i];
	}
	
	merge_sort(l, l1); merge_sort(r, l2);
	
	p = q = i = 0;
	
	while(p < l1 && q < l2){
		if(l[p] < r[q]) a[i] = l[p++];
		else            a[i] = r[q++];
		i++;
	}
	
	while(p < l1) a[i++] = l[p++];
	while(q < l2) a[i++] = r[q++];
	
	delete[] l;
	delete[] r;
}


int main(){
	
	SortingTest t;
	t.Test(merge_sort);
	
	return 0;
}
