/1

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, n = 0;

    for (x = 1; x <=5; x++){
        n = n + 3;
        printf("%d\n", n);
    }


system("pause");
return 0;
}

/2.1

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, n = 0;

    for (x = 1; x <=100; x++){
        numero = n + 1;
        printf("%d\n", numero);
    }


system("pause");
return 0;
}

/2.2

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;

    while (x <=99){
        x = x + 1;
        printf("%d\n", x);
    }


system("pause");
return 0;
}

/2.3

#include <stdio.h>
#include <stdlib.h>


int main(){
    int x;
    x = 0;
    
    do{
    	x = x + 1;
    	printf("%d\n", x);
    } 
    while (x <= 99);


system("pause");
return 0;
}

/3

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    x = 11;

    while(x > 0){
        x = x - 1;
        printf("%d\n", x);
    }

    printf("FIM!");


system("pause");
return 0;
}

/4

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    x = 0;

    while(x <= 99000){
        x = x + 1000;
        printf("%d\n", x);
    }


system("pause");
return 0;
}

/5

#include <stdio.h>
#include <stdlib.h>

int main(){
    int s = 0, n;
    printf("Digite 10 numeros para somar:\n");

    for(n = 1; n <= 10;n++){
        int n;
        scanf("%d", &n);
        s = s + n;
    }

    printf("Soma igual a %d", s);


system("pause");
return 0;
}

/6

#include <stdio.h>
#include <stdlib.h>

int main(){
    float m, n, s = 0;
    printf("Digite 10 numeros:\n");

    for(n = 1; n <= 10; n++){
        float n;
        scanf("%f",&n);
        s = s + n;
        m = s/10;
    }
    printf("A media eh igual a %.2f", m);


system("pause");
return 0;
}

/7

#include <stdio.h>
#include <math.h>

int main(){
    int i = 0,s = 0, c = 0, v;

    while (i < 10){
        printf("Digite um valor:\n");
        scanf("%d", &v);
        if (v > 0) {
            s += v;
            c++;
        }
        i++;
    }
    printf("A media dos valores digitados eh %d\n", s / c);


system("pause");
return 0;
}

/8

#include <stdio.h>
#include <math.h>

int main (){
    int i, n = 1, c = 10, nd, M = 0, m = 0;

    for (i = 1; i <= c; i++){
        printf("Digite %d o numero:\n", n);
        scanf("%d", &nd);

        if (i == 1){
            M = m = nd;
        }
        if (nd > M){
            M = nd;
        }
        if (nd < m){
            m = nd;
        }
        if (i == c){
            break;
        }
        n++;

    }
    printf("O maior numero apresentado eh: %d \nO menor numero apresentado eh: %d \n", M, m); 


system("pause");
return 0;
}

/9

#include <stdio.h>
#include <math.h>

int main(){
    int n, i;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &n);
    for (i = 1; i <= num; i++){
        if (i % 2 != 0)
        {
            printf("%d \n", i);
        }
        
    }
    

system("pause");
return 0;
}

/10

#include <stdio.h>
#include <math.h>

int main(){
    int s = 0, i;
    for ( i = 0; i <= 50; i+2){
        s += i;
    }
    printf("A soma eh:%d\n", s);

system("pause");
return 0;
}

/11

#include <stdio.h>
#include <math.h>

int main (){
    int x, i;
    printf("Digite um numero qualquer:\n");
    scanf("%d", &x);

    for (i = 0; i <= x; i++){
        printf("%d\n", i);   
    }


system("pause");
return 0;
}

/12

#include <stdio.h>
#include <math.h>

int main() {
    int x, s = 0, i = 1;
    printf("Digite um numero:\n");
    scanf("%d", &x);

    while (i < x) {
        if (x % i == 0){
            s += i;
        }
        i++;
    }
    printf("A soma dos divisores de %d eh %d\n", x, s);


system("pause");
return 0;
}

/13

#include <stdio.h>
#include <math.h>

int main() {
    int i = 1;
    int s = 0;

    while (i < 1000) {
        if (i % 3 == 0 || i % 5 == 0){
            s += i;
        }
        i++;
    }
    printf("%d\n", s);


system("pause");
return 0;
}

/14

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int d1, d2, i, x;
    printf("Digite quantas vezes o dado sera jogado:\n");
    scanf("%d", &x);
    srand(time(NULL));

    for (i = 1; i <= x; i++){
        d1 = (rand() % 5) + 1;
        d2 = (rand() % 5) + 1;
    
        if (d1 > d2){
        printf("%d maior que %d\n", d1, d2);
        }
        else if (d2 > d1){
        printf("%d maior que %d\n", d2, d1);
        }
        else if (d1 == d2){
        printf("%d e %d iguais\n", d1, d2);
        }
    }


system("pause");
return 0;
}

/15 

#include <stdio.h>
#include <math.h>

int main() {
    int v;
    printf("Digite um numero: ");
    scanf("%d", &v);

    while (v > 0) {
        printf("O quadrado de %d eh %d\n", v, v * v);
        printf("O cubo de %d eh %d\n", v, v * v * v);
        printf("A raiz quadrada de %d eh %.2f\n", v, sqrt(v));
        printf("Digite um valor:\n");
        scanf("%d", &v);
    }


system("pause");
return 0;
}

/16 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    float a, s, m, d, x, y;
    int z;
do{
    do{
        printf("Adicao (opcao 1)\nSubtracao (opcao 2)\nMultiplicacao (opcao 3)\nDivisao (opcao 4)\nSaida (opcao 5)\n");
        scanf("%d", &z);
        
        if ((z != 1)&&(z != 2)&&(z != 3)&&(z != 4)&&(z != 5)){
            printf("INVALIDO");
        }
    }

    while ((z < 1 && z > 5));
        if (z == 1){
            printf("Digite dois valores:\n");
            scanf("%f %f", &x, &y);
            a = x + y;
            printf("A soma eh:\n %.2f \n", a);
        }
        if (z == 2){
            printf("Digite dois valores:\n");
            scanf("%f %f", &x, &y);
            if (x > y){
                s = x - y;
                printf("A subtracao eh:\n %.2f \n", s);
            }
            else{
                s = y - x;
                printf("A subtracao eh:\n %.2f \n", s);
            }
        }
        if (z == 3){
            printf("Digite dois valores:\n");
            scanf("%f %f", &x, &y);
            m = x * y;
            printf("A multiplicacao eh:\n %.2f \n", m);
        }
        if (z == 4){
            printf("Digite dois valores:\n");
            scanf("%f %f", &x, &y);
            if (x > y){
                d = x / y;
                printf("A divisao eh:\n %.2f \n", d);
            }
            else{
                s = y / x;
                printf("A divisao eh:\n %.2f \n", d);
            }
        }
        if (z == 5){
            printf("SAIDA\n");
        }
}
while (z != 5);


system("pause");
return 0;
}


/17

#include <stdio.h>
#include <math.h>

int main (){
    int Ze = 110, Chico = 150, a = 0;

    while (Ze <= Chico){
        Ze = Ze + 3;
        Chico = Chico + 2;
        a++;
    }
    printf ("Ze sera maior que Chico daqui a: %d anos\n", a + 1);


system("pause");
return 0;
}

/18

#include <stdio.h>
#include <math.h>

int main(){
    float s = 2000, aum = 0.015;
    int a = 1995;
    
    while(a < 2023){
        (s += s) * aum;
        aum *= 2;
        a++;
        printf("%.2f\n", aum);
    }
    printf("Salario no ano %d: %.2f\n", a, s);


system("pause");
return 0;
}

/19

#include <stdio.h>
#include <math.h>

int main(){
    int i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, sq;
    printf("Digite o valor do saque:\n");
    scanf("%d", &sq);
    i = sq / 100;
    j = sq % 100;
    k = j / 50;
    l = j % 50;
    m = l / 20;
    n = l % 20;
    o = n / 10;
    p = n % 10;
    q = p / 5;
    r = p % 5;
    s = r / 2;
    t = r % 2;
    u = t / 1;
    v = t % 1;
    w = i + k + m + o + q + s + u;
    printf("Serão necessárias %d notas para atender ao saque.\n", w);
    printf("Notas de 100: %d\n", i);
    printf("Notas de 50: %d\n", k);
    printf("Notas de 20: %d\n", m);
    printf("Notas de 10: %d\n", o);
    printf("Notas de 5: %d\n", q);
    printf("Notas de 2: %d\n", s);
    printf("Notas de 1: %d\n", u);
    

system("pause");
return 0;
}

/20

#include <stdio.h>
#include <math.h>

int main (){
    
    int n = 2, r = 0, c = 0, d = 0, nd = 0, s = 0;
    printf("Digite um numero que seja diferente de 0 e 1, em seguida sera apresentada a soma de todos os primos ate ele:\n");
    scanf("%d", &nd);
    if ((nd == 0)||(nd == 1)){
        printf("INVALIDO\n");
    system("pause");
    }
    
    while (n <= nd){
        for (c = 2; c < n; c++){
            r = 0;                     
            d = n % c;
            if (d == 0){
                r++;
            break;
            }
        }
            if (r == 1){
                printf("");
            }
            if (r == 0){
            printf("%d\n", n);
            s = s + n;
            }
            n++;
    }
    printf("A soma dos primos eh: %d\n", s + 1);

system("pause");
return 0;
}           


/21

#include <stdio.h>
#include <math.h>

int main() {
    int x, y, i = x, c = 0, j = 1, d = 0;
    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &x, &y);

    while (i <= y){
        while (j <= i){
            if (i % j == 0){
                d++;
            }
            j++;
        }
        if (d == 2){
            c++;
        }
        i++;
    }
    printf("Existem %d numeros primos entre %d e %d\n", c, x, y);

system("pause");
return 0;
}

/22

#include <stdio.h>
#include <math.h>

int main(){
    int n1, n2, pal, temp, c, fm1, fm2, ni = 0, qd = 0, mp = 0;

    for (n1 = 999; n1 >= 100; n1--) {
        for (n2 = n1; n2 >= 100; n2--) {
            pal = n1 * n2;

            if (pal > mp) {
                temp = pal;
                while (temp != 0) {
                    qd++;
                    temp /= 10;
                }
                temp = pal;
                ni = 0;
                while(temp != 0) {
                    c = temp % 10;
                    ni += c * pow(10, qd - 1);
                    temp /= 10;
                    qd--;
                }
                if (pal == ni) {
                    mp = ni;
                    fm1 = n1;
                    fm2 = n2;
                }
            }
        }
    }

    printf("O maior palindromo eh dado pela multiplicacao de %d * %d = %d\n", fm1, fm2, mp);


system("pause");
return 0;
}

/23

#include <stdio.h>
#include <math.h>
int main (){
    int li, c, x;
    int y = 1;
    printf("Digite a quantidade de linhas desejadas:\n");       
    scanf("%d", &li);
    for (x = 1; x <= li; x++){
        for (c = 1; c <= x; c++){
            printf(" %d ", y);
            y++;
        }
        printf("\n");
    }

system("pause");        
return 0;
}      
