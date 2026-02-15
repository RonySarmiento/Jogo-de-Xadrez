# include <stdio.h>

// ============================================
// FUNÇÕES COM RECURSIVIDADE
// ============================================

// Função recursiva para movimento da torre
void movimentotorre_recursivo(int t) {
    if (t >= 0) {
        printf("Torre à direita\n");
        movimentotorre_recursivo(t - 1);
    }
}

// Função recursiva para movimento do bispo
void movimentobispo_recursivo(int b) {
    if (b >= 0) {
        printf("Bispo para cima\n");
        movimentobispo_recursivo(b - 1);
    }
}

// Função recursiva para movimento da rainha
void movimentorainha_recursivo(int r) {
    if (r >= 0) {
        printf("Rainha à esquerda\n");
        movimentorainha_recursivo(r - 1);
    }
}

// Função recursiva para movimento do cavalo
void movimentocavalo_recursivo(int cavalo) {
    if (cavalo >= 0) {
        printf(" Cavalo esquerda\n");
        movimentocavalo_recursivo(cavalo - 1);
    }
}

// ============================================
// MAIN COM LOOPS E RECURSIVIDADE
// ============================================


int main() {
int t = 1;
    int  b = 1;
int r;

    int movimentocavalo = 1;
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
printf("\n");

do{ // loops aninhados
    for (movimentocavalo = 1; movimentocavalo <= 2; movimentocavalo++)
    printf(" Cavalo esquerda\n");
}while (movimentocavalo <= 2);
printf("Cavalo direita\n");

movimentotorre_recursivo(4);
 printf("\n");
movimentobispo_recursivo(4);
printf("Bispo à direita\n");
movimentorainha_recursivo(7);
 printf("\n");
movimentocavalo_recursivo(1);
printf("Cavalo direita\n");
return 0;

}