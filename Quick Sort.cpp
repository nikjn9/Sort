#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stack>
#include "SortingTest.h"

using namespace std;

void quick_sort(int *a, int len){
	if(a == NULL || len <= 1) return;
	
	stack <int> s;
	s.push(0); s.push(len-1);
	
	while(!s.empty()){
		int r = s.top(); s.pop();
		int l = s.top(); s.pop();
		
		if(l >= r) continue;
		
		if(l+1 == r){
			if(a[l] > a[r]) swap(a[l], a[r]);
			continue;
		}
		
		int p = l, q = l+1;
		
		for(int i = q; i <= r; i++){
			if(a[i] < a[p]){
				swap(a[i], a[q]);
				q++; 
			}
		}
		
		swap(a[p], a[q-1]);
		p = q-1;
		
		s.push(l); s.push(p-1);
		s.push(p+1); s.push(r);
	}
}


int main(){

	SortingTest t;
	
	t.Test(quick_sort);

	return 0;
	
}
