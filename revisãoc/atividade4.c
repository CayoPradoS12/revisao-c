#include <stdio.h>

int main() {
int y = 5;
int z = 11;
int w;
w = y + z;
if (y > z) {
w = y * z;
}
printf("%d", w);
return 0;
} 
// Nessa atividade a saída será o valor de w, visto que a condição do if não foi atendida, devido ao y ser menor que z.
