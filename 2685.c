#include <stdio.h>

int main (void) {
	int angle;

	while (scanf("%d", &angle) != EOF) {
		if (angle >= 0 && angle < 90 || angle == 360) puts("Bom Dia!!");
		else if (angle >= 90 && angle < 180) puts("Boa Tarde!!");
		else if (angle >= 180 && angle < 270) puts("Boa Noite!!");
		else puts("De Madrugada!!");
	}

    return 0;
}
