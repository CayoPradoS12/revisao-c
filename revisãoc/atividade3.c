#include <stdio.h>

 int main() {
int a = 5;
int b = 11;
float c;

// nesta atividade existem duas condições (a>b ou a<0), caso uma delas seja cumprida entramos dentro do laço e realizamos a conta b/a para saber o valor de c
scanf("%d %d", &a, &b);

if(a > b || !(a > 0)) {
c = (float)(b / a);
} else { //caso nenhuma das condições do if sejam cumpridas, vamos para o else que realizá a conta a/b.
c = (float)(a / b);
}
printf("%.2f\n", c); 
return 0;
 }
 // porém... por algum motivo o sistema só retorna 0.00, acredito que seja pelo fato das variáveis terem sido declaradas como int e o resultado de c está em float.
