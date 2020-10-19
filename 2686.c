#include <stdio.h>

int main (void) {
	float angle;

	while (scanf("%f", &angle) != EOF) {
        int x = (int)(angle * 240);

		if (angle >= 0 && angle < 90 || angle == 360) puts("Bom Dia!!");
		else if (angle >= 90 && angle < 180) puts("Boa Tarde!!");
		else if (angle >= 180 && angle < 270) puts("Boa Noite!!");
		else puts("De Madrugada!!");
        printf("%.2d:%.2d:%.2d\n", ((x / 3600) % 60 + 6) % 24, (x / 60) % 60, x % 60);
	}

    return 0;
}
