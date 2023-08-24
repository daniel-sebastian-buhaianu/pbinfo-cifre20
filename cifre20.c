#include <stdio.h>

int main()
{
	unsigned short n, i, nrcif, count = 0;
	unsigned x;
	
	scanf("%hu", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%u", &x);
		
		nrcif = 0;

		if (x == 0) nrcif = 1;

		while (x) { nrcif++; x /= 10; }

		if (nrcif % 2) count++;
	}

	printf("%hu", count);

	return 0;
}
// scor 100
