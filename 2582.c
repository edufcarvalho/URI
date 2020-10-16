#include <stdio.h>

int main(void) {
    char *music[] = {"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!", "CRIPTONIZE", "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"};
    int n;
    scanf("%d", &n);
    while (n--){
        int i, j;
        scanf("%d%d", &i, &j);
        puts(music[i + j]);
    }

    return 0;
}
