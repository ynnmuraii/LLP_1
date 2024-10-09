#include <stdio.h>

char str[256];
int freq[256];

void main2() {
	int i = 0;

	printf("Enter something: ");
	fgets(str, 256, stdin);

L1:
	if (str[i] == 0) goto L2;
	freq[(unsigned char)str[i]]++;
	i++;
	goto L1;

L2:
	i = 0;

L3:
	if (i >= 256) goto L4;
	if (freq[i] != 0) {
		printf("The character '%c' occurs %d times\n", i, freq[i]);
	}
	i++;
	goto L3;

L4:
	return;
}