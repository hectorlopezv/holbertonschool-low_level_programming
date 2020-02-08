#include <stdio.h>
#include <gmp.h>
int main(void){
int n_0=1;
int n_1=2;
int next_term;
for (int i=1;i<=98;i++){

printf("%d, ",n_0);
next_term=n_0+n_1;
n_0=n_1;
n_1=next_term;
mpz_t n1,n0,next_termito;

mpz_init(n1,n0,next_termito);
mpz_set_ui(n1,0);
mpz_set_ui(n0,0);
mpz_set_ui(next_termito,0);
mpz_add(

}
return (0);
}
