/1

#include <stdio.h>

int main(){
    int x, *x1;
    float y, *y1;
    char z, *z1;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &x);

    printf("Digite um numero real:\n");
    scanf("%f", &y);

    printf("Digite um caracter:\n");
    scanf(" %c", &z);

    printf("Antes da modiificacao pelos ponteiros\n");
    printf("\n");

    printf("Inteiro:%d\nReal:%.2f\nCaracter:%c\n", x, y, z);

    printf("\n");

    x1 = &x;
    y1 = &y;
    z1 = &z;

    printf("Apos a modificacao pelos ponteiros\n");
    printf("\n");

    printf("Inteiro:%d\nReal:%.2f\nCaracter: %c\n", *x1 + 3, *y1 + 4, *z1 + 2);


system("pause");
return 0;
}

/2

#include <stdio.h>

int main(){
    int x, y;

    if(&x > &y){
        printf("O endereco do maior eh:%d\n", &x);
    }
    else if (&y > &x){
        printf("O endereco do maior eh:%d\n", &y);
    }


system("pause");
return 0;
}

/3

#include <stdio.h>

int main(){
    int x, y, *x1, *y1;

    printf("digite o valor de uma variavel inteira x:\n");
    scanf("%d", &x);
    printf("digite o valor de uma variavel inteira y:\n");
    scanf("%d", &y);

    x1 = &x;
    y1 = &y;

    if(&x1 > &y1){
        printf("O endereco %d da variavel %d eh maior\n", &x1, *x1);
    }
    else if (&y1 > &x1){
        printf("O endereco %d da variavel %d eh maior\n", &y1, *y1);
    }


system("pause");
return 0;
}

/4

#include <stdio.h>

int troca (int *A, int *B){
    int x;
    x = *A;
    *A = *B;
    *B = x;

}


int main(){
    int A, B;

    printf("digite o valor de uma variavel inteira A:\n");
    scanf("%d", &A);
    printf("digite o valor de uma variavel inteira B:\n");
    scanf("%d", &B);

    troca (&A, &B);

    printf("Agora, A equivale a %d e B equivale a %d\n", A, B);


system("pause");
return 0;
}

/5

#include <stdio.h>

int op (int *x, int *y){
    int z;
    if(*y > *x){
        z = *x;
        *x = *y;
        *y = z;
    }
}


int main(){
    int x, y;

    printf("digite o valor de uma variavel inteira x:\n");
    scanf("%d", &x);
    printf("digite o valor de uma variavel inteira y:\n");
    scanf("%d", &y);

    op (&x, &y);

    printf("O maior valor equivale a %d e o menor valor equivale a %d\n", x, y);


system("pause");
return 0;
}

/6

#include <stdio.h>

int soma (int *A, int *B){
    *A = 2 * (*A);
    *B = 2 * (*B);
    return ((*A) + (*B));
}


int main(){
    int A, B, x;

    printf("digite o valor de uma variavel inteira x:\n");
    scanf("%d", &A);
    printf("digite o valor de uma variavel inteira y:\n");
    scanf("%d", &B);

    x = soma (&A, &B);

    printf("A soma do dobro dos dois valores inteiros eh %d\n", x);


system("pause");
return 0;
}

/7

#include <stdio.h>

void soma (int *A, int *B){
    *A = (*A) + (*B);
}

int main(){
    int A, B;

    printf("digite o valor de uma variavel inteira A:\n");
    scanf("%d", &A);
    printf("digite o valor de uma variavel inteira B:\n");
    scanf("%d", &B);

    soma (&A, &B);

    printf("A soma dos dois valores inteiros contidos em A eh %d e o valor de B eh %d\n", A, B);


system("pause");
return 0;
}

/8

#include <stdio.h>

int main(){
    int i, *x;
    float vet[10];

    x = &vet;

    for(i = 0; i < 10; i++){
        printf("O endereco da posicao %d eh %d\n", i, x + i);
    }


system("pause");
return 0;
}



/9 

#include <stdio.h>

int main(){
    int i, *x;
    float mat[3][3];

    x = &mat[0][0];

    for(i = 0; i < 9; i++){
        printf("O endereco eh %d\n", (x + i));
        
    }


system("pause");
return 0;
}

/10

#include <stdio.h>

int main(){
    int i, vet[5], *x;

    x = &vet;

    for(i = 0; i < 5; i++){
        printf("Digite 5 valores inteiros para esse vetor:\n");
        scanf("%d", (x + i));
    }

    printf("\n");

    for(i = 0; i < 5; i++){
        printf("O dobro desse valor na posicao %d eh %d\n", i, *(x + i) * 2);
    }


system("pause");
return 0;
}

/11

#include <stdio.h>

int main(){
    int i, vet[5], *x;

    x = &vet;

    for(i = 0; i < 5; i++){
        printf("Digite 5 valores inteiros para esse vetor:\n");
        scanf("%d", x + i);
    }

    printf("\n");

    for(i = 0; i < 5; i++){
        if(*(x + i) % 2 == 0){
            printf("O endereco desse valor na posicao %d eh %d\n", i, x + i);
        }
    }


system("pause");
return 0;
}

/12

#include <stdio.h>

int fun (int *vet){
    int x, i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if (vet[i] < vet[j]){
                x = vet[i];
                vet[i] = vet[j];
                vet[j] = x;
            }
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(vet[i] != vet[j]){
                return 0;
            }
        }
    }

    return 1;

}

int main(){
    int vet[3], i, ig;

    for(i = 0; i < 3; i++){
        printf("Digite tres valores inteiros:\n");
        scanf("%d", &vet[i]);
    }
    
    ig = fun(&vet);
    
    if(ig == 1)
        printf("Iguais\n");
    else
        printf("Diferentes\n");

    for(i = 0; i < 3; i++){
        printf("%d\n", vet[i]);
    }


system("pause");
return 0;
}

/13

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ver (char *vet, char *vet2, int t1, int t2){
    int i, j;
    
    if(t2 > t1){
        return -1;
    }

    for(i = 0; i <= (t1 - t2); i++){
        for(j = 0; j < t2; j++){
            if(vet[i + j] != vet2[j]){
                break;
            }
        }
        if(j == t2){
            return 0;
        }
    }
    return 1;
}

int main(){
    int i, t1, t2, r;
    char vet[100], vet2[100];
  
    printf("Digite uma frase:\n");
    scanf(" %[^\n]s", &vet);
    printf("Digite outra frase:\n");
    scanf(" %[^\n]s", &vet2);

    printf("\n");
    
    t1 = strlen(vet);
    t2 = strlen(vet2);
    
    r = ver (&vet, &vet2, t1, t2);
    
    switch(r){
        case -1:
            printf("ERRO!\nString '%s' maior que string '%s' de comparacao\n", vet2, vet);
        break;
    
        case 0:
            printf("'%s' encontrada em '%s'\n", vet2, vet);
        break;
        
        case 1:
            printf("'%s' nao encontrada em '%s'\n", vet2, vet);
        break;
    }


system("pause");
return 0;
}

/14

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int param (char *vet, char *v){
    int i;

    for(i = 0; *(vet + i) != '\0'; i++){
        *(vet + i) = *v;
    }
}

int main (){
    char vet[100], v;

    printf("Digite uma frase:\n");
    scanf(" %[^\n]s", &vet);
    printf("Digite um caracter para preencher essa frase:\n");
    scanf(" %c", &v);

    param (&vet, &v);

    printf("Seu vetor sera preenchido com: %s\n", vet);


system("pause");
return 0;
}

/15

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int imp (char *vet){
    
    printf("Digite uma frase: %s\n", vet);
    scanf(" %[^\n]s", &vet);

    return printf("A frase digitada foi: %s\n", &vet);
}

int main (){
    char vet[100];

    imp (&vet);

system("pause");
return 0;
}

/16

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int a, *b, **c, ***d;
    printf("Digite um valor para o A:\n");
    scanf("%d", &a);

    b = &a;
    c = &b;
    d = &c;

    printf("O dobro eh: %d\n", ((*b) * 2));
    printf("O triplo eh: %d\n", ((**c) * 3));
    printf("O quadruplo eh: %d\n", ((***d) * 4));


system("pause");
return 0;
}

/17

#include <stdio.h>
#include <math.h>

void frac(float num, int *inteiro, float *fracionado){
    *inteiro = floor(num);
    *fracionado = num - floor(num);
}

int main (){
    int inteiro;
    float num, fracionado;

    printf("Digite um valor real:\n");
    scanf("%f", &num);

    frac(num, &inteiro, &fracionado);

    printf("A parte inteira corresponde a: %d\n", inteiro);

    printf("a parte fracionada corresponde a: %.2f\n", fracionado);


system("pause");
return 0;
}

/18

#include <stdio.h>
#include <math.h>

void calc_esfera(float R, float *area, float *volume){
    M_PI;
    *area = 4 * M_PI * (R * R);
    *volume = 4 / 3 * M_PI * (R * R * R);
}

int main (){
    float R, area, volume;

    printf("Digite um numero real para um raio de uma circunferencia:\n");
    scanf("%f", &R);

    calc_esfera(R, &area, &volume);

    printf("O area de superficie desse circunferencia eh: %.2f\n", area);

    printf("O volume desse circunferencia eh: %.2f\n", volume);


system("pause");
return 0;
}

/19

#include <stdio.h>
#include <stdlib.h>

void fun (int N, int *x){
    int i, ma, c = 0;
    
    for(i = 0; i < N; i++){
        printf("Digite os valores de cada elemento de vetor:\n");
        scanf("%d", &x[i]);  
    }

    ma = x[0];

    for(i = 1; i < N; i++){
        if(ma < x[i]){
            ma = x[i];
        }
    }

    printf("O maior elemento eh: %d\n", ma);

    for(i = 0; i < N; i++){
        if(ma == x[i]){
            c++;
        }
    }

    printf("O elemento tem %d incidencia(s) no vetor\n", c);

}

int main (){
    int N, *x;

    printf("Digite o tamanho do seu vetor:\n");
    scanf("%d", &N);

    x = (int*) malloc(sizeof(int) * N);

    fun (N, x);


system("pause");
return 0;
}

/20

#include <stdio.h>
#include <stdlib.h>

int negativos(float *vet, int N){
    int i, c = 0;
    
    for(i = 0; i < N; i++){
        printf("Digite os valores reais de cada elemento de vetor:\n");
        scanf("%f", &vet[i]);  
    }

    for(i = 0; i < N; i++){
        if(vet[i] < 0){
            c++;
        }
    }

    printf("Esse vetor tem %d numeros negativos\n", c);
}

int main (){

    int N;
    float *vet;

    printf("Digite o tamanho do seu vetor:\n");
    scanf("%d", &N);

    vet = (float*) malloc(sizeof(float) * N);

    negativos(vet, N);


system("pause");
return 0;
}

/21

#include <stdio.h>

int main(){
    int N, vet[N], *x, i;

    printf("Digite o tamanho do seu vetor:\n");
    scanf("%d", &N);

    x = (int) malloc(sizeof(int) * N);

    for (i = 0; i < N; i++){
        printf("Digite o valor de cada posicao do vetor:\n");
        scanf("%d", &x[i]);
    }

    for (i = 0; i < N; i++){
        printf("Agora, para a posicao %d se tem o valor %d\n", i, x[i] + 1);
    }


system("pause");
return 0;
}

/22

#include <stdio.h>
#include <stdlib.h>

int soma (int N, int N2, int *x, int *y, int *z){
    int i;

    for(i = 0; i < N; i++){
        printf("Digite os elemetos do do vetor X:\n");
        scanf("%d", &x[i]);
    }
    for(i = 0; i < N2; i++){
        printf("Digite os elemetos do do vetor Y:\n");
        scanf("%d", &y[i]);
    }

    if (N != N2){
        return 0;
    }

    if (N == N2){
        for(i = 0; i < N; i++){
            *z += x[i] + y[i];
        }
    }


    return 1;
}

int main(){
    int N, N2, *x, *y, z, ig;

    printf("Digite o tamanho do seu vetor X:\n");
    scanf("%d", &N);
    printf("Digite o tamanho do seu vetor Y:\n");
    scanf("%d", &N2);

    x = (int*) malloc (sizeof(int) * N);
    y = (int*) malloc (sizeof(int) * N2);

    ig = soma (N, N2, &x, &y, &z);

    if(ig == 0){
        printf("ERRO!\n");
    }
    else if(ig == 1){
        printf("Concluido!\n");
        printf("O valor da soma dos vetores eh: %d\n", z);
    }


system("pause");
return 0;
}

/23

#include <stdio.h>
#include <stdlib.h>

int print (int N, int *x){
    int i, k, j = 0, ma;

    for(i = 0; i < N; i++){
        printf("Digite os elementos do vetor:\n");
        scanf("%d", &x[i]);
    }

    printf("Digite quantos elementos voce quer imprimir por linha:\n");
    scanf("%d", &k);

    printf("\n");

    for(i = 0; i < N;){
        for(j = 0; j < k; j++, i++){
            printf("|%d|", x[i]);

            if(i == N - 1){
                i++;
                break;
            }
        }
        printf("\n");
    }
    

    /*for(i = 0; i < N; i++, j++){
            if(j < k){
                printf("|%d|", x[i]);
            }
            else{
                j = -1;
                i--;
                printf("\n");
            }
        }
    */

    printf("\n");

    ma = x[0];

    for(i = 1; i < N; i++){
        if(ma < x[i]){
            ma = x[i];
        }
    }

    printf("O maior elemento eh: %d\n", ma);

}

int main(){
    int N, *x;

    printf("Digite o tamanho do seu vetor X:\n");
    scanf("%d", &N);

    x = (int*) malloc (sizeof(int) * N);

    print (N, &x);


system("pause");
return 0;
}

/24

#include <stdio.h>
#include <stdlib.h>

int calc (int N, int *V, int *max, int *min){
    int i;

    for(i = 0; i < N; i++){
        printf("Digite os elementos do seu vetor:\n");
        scanf("%d", &V[i]);
    }

    max = V[0];

    for(i = 1; i < N; i++){
        if(max < V[i]){
            max = V[i];
        }
    }

    printf("O maior elemento eh: %d\n", max);

	min = max;
	
	for(i = 0; i < N; i++){
        if(min > V[i]){
            min = V[i];
        }
    }

    printf("O menor elemento eh: %d\n", min);


}

int main(){
    int N, *V, max, min;

    printf("Digite o tamanho do seu vetor:\n");
    scanf("%d", &N);

    V = (int*) malloc (sizeof(int) * N);

    calc (N, &V, &max, &min);


system("pause");
return 0;
}

/25

#include <stdio.h>
#include <stdlib.h>

int leit (int *x, int *y){
    printf("Digite uma nota X (0 a 10):\n");
    scanf("%d", x);
    printf("Digite uma nota Y (0 a 10):\n");
    scanf("%d", y);

    printf("\n");

    printf("As notas sao:\nX: %d\nY: %d\n", *x, *y);


}

int media (int *x, int *y){ 
    float m1 = 0, m2 = 0;

    m1 = ((*x) + (*y)) * 1.0/ 2;
    m2 = ((*x) + ((*y) * 2)) * 1.0 / 3;
    
    printf("A media aritmetica das notas eh: %.2f\n", m1) ;

    printf("A media ponderada das notas eh: %.2f\n", m2);


}


int main(){
    int x, y;

    leit (&x, &y);

    printf("\n");

    media (&x, &y);

system("pause");
return 0;
}


/26

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int raiz (float a, float b, float c, float *x1, float *x2){
    float raiz[2]; 
    float Delta;

    Delta = (b * b) -4 * a * c; 
    
    if (Delta < 0){
        return 0;
    }

    
    if (Delta == 0){
        raiz[0] = (((-1) * b) + sqrt(Delta)) / (2 * a); 
        
        *x1 = raiz[0]; 
        
        printf("Unica raiz da equacao: %.2f\n", *x1);
        
        return 1; 
    }
    
    if (Delta > 0){
        raiz[0] = (((-1) * b) + sqrt(Delta)) / (2 * a);
        raiz[1] = (((-1) * b) - sqrt(Delta)) / (2 * a);

        *x1 = raiz[0]; 
        *x2 = raiz[1];
        
        printf ("Raizes da equacao:\nx1: %.2f\nx2: %.2f\n", *x1, *x2);

        return 2; 
    } 
}

int main (){
  
   float a, b, c, r; 
   float *x1, *x2; 

    printf("Digite um valor A:\n");
    scanf("%f", &a); 
    printf("Digite um valor B:\n");
    scanf("%f", &b); 
    printf("Digite um valor C:\n"); 
    scanf("%f", &c); 
    
    x1 = (float*) malloc (sizeof(float));
    x2 = (float*) malloc (sizeof(float));

    r = raiz (a, b, c, x1, x2); 


    if (r == 0) {
        printf("O resultado dessa equacao nao possui raizes reais\n"); 
    }
    if (r == 1) {
        printf("O resultado dessa equacao tem uma unica raiz real\n");
    }
    if (r == 2) {
        printf("O resultado dessa equacao tem duas raizes reais\n");
    }
    
    
system("pause");
return 0;
} 

