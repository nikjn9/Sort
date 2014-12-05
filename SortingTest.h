#ifndef SORTING_TEST_H
#define SORTING_TEST_H


void swap(int &a, int &b);

class SortingTest{
	
private:
	int mod;
	int testsCount;
	int *a, *b;

	void fillArray(int length);
	bool isCorrect(int length);
	
public:
	SortingTest() : mod(40), testsCount(20) {}
	~SortingTest() {}
	
	void setMod(int mod);
	void setTestsCount(int tests);
	static void printArray(int *a, int length);
	
	bool Test(void (*f)(int *, int));
};


#endif
