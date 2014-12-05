all: heap insert merge quick bubble select

heap:
	g++ "Heap Sort.cpp"      "SortingTest.cpp" -o "Heap Sort"

insert:
	g++ "Insertion Sort.cpp" "SortingTest.cpp" -o "Insertion Sort"

select:
	g++ "Selection Sort.cpp" "SortingTest.cpp" -o "Selection Sort"

merge:
	g++ "Merge Sort.cpp"     "SortingTest.cpp" -o "Merge Sort"
	
quick:
	g++ "Quick Sort.cpp"     "SortingTest.cpp" -o "Quick Sort"
	
bubble:
	g++ "Bubble Sort.cpp"    "SortingTest.cpp" -o "Bubble Sort"

clean:
	ls | grep -v -e '\.cpp' -e '\.h' -e 'makefile' -e 'egrep' | xargs -d '\n' rm
	
