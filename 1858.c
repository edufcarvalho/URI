#include <stdio.h>

int main(void) {
	int i, a, result, min = 11;

	scanf("%d",&a);
	for (i = 1; i <= a; i++) {
        int b;
		scanf("%d", &b);
        if (min > b) {
            min = b;
            result = i;
        }
    }
	
	printf("%d\n", result);
    return 0;
}
