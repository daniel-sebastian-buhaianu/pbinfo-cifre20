#include <stdio.h>

int main()
{
	unsigned short n, i, nrcif, count = 0;
	char c;
	
	scanf("%hu", &n);
	
	for (i = 0; i < n; i++) {
		// skip over non-digit characters
		do { scanf("%c", &c); } while (c < '0' || c > '9');
		
		nrcif = 0;
		while (c >= '0' && c <= '9') {
			nrcif++;

			scanf("%c", &c);
		}

		if (nrcif % 2) count++;
	}

	printf("%hu", count);

	return 0;
}

// scor 80
