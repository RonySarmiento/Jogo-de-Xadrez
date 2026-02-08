# include <stdio.h>
int main() {
int t = 1;
    int  b = 1;
int r;
    while (t <=5) {
        printf("Torre à direita\n");
t++;
    }

do{
    printf("Bispo para cima\n");
    b++;
    } while (b <= 5);
printf("Bispo à direita\n");

for (r = 1; r <= 8; r++)
{
    printf("Rainha à esquerda\n");
}

    return 0;

}