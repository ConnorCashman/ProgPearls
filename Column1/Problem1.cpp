#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <set>
#define SET 1

#ifdef QSORT
int compare (const void *a, const void *b) {
	return *(int*)a - *(int*)b;
}

int main(void) {
	int list[10] = {3, 6, 2, 5, 9, 9, 8, 8, 4, 11};
	qsort(list, 10, sizeof(int), compare);
	printf("%d", list[0]);
	for (int i = 1; i < 10; i++) {
		printf(",%d", list[i]);
	}
	printf("\n");
	return 0;
}

#endif

#ifdef SET

int main(void) {
	std::set<int> S;
	int i;
	std::set<int>::iterator j;
	while (std::cin >> i)
		S.insert(i);
	for (j = S.begin(); j != S.end(); ++j)
		printf("%d\n", *j);
		std::cout << *j << "\n";
	return 0;
}

#endif
