/1

#include <stdio.h>

int main(){
    char stg [100];

    printf("Digite uma frase:\n");
    fgets (stg, 100, stdin);

system("pause");
return 0;
}

/2

#include <stdio.h>
#include <string.h>

int main(){
    char stg [100];
    int c = 0, i = 0;

    printf("Digite uma frase em binario:\n");
    fgets(stg, 100, stdin);

    for (i = 0; i < 100; i++){
        if (stg [i] == '1'){
            c++;
        }
    }
    printf("Existem %d numeros 1 nessa frase\n", c);

system("pause");
return 0;
}

/3

#include <stdio.h>
#include <string.h>

int main(){
    char stg [100];
    int i = 0, x;

    printf("Digite uma frase:\n");
    fgets(stg, 100, stdin);

    x = strlen(stg);

    for(i = x; i >= 0; i--){
        printf("%c", stg[i]);
    }


system("pause");
return 0;
}

/4

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char stg [100], x;
    int c = 0, i = 0;

    printf("Digite uma frase:\n");
    fgets(stg, 100, stdin);

    for (i = 0; i < 100; i++){
        if (stg [i] == 'a' || stg [i] == 'A' || stg [i] == 'e' || stg [i] == 'E' || stg [i] == 'i' || stg [i] == 'I' || stg [i] == 'o' || stg [i] == 'O' || stg [i] == 'u' || stg [i] == 'U'){
            c++;
        }
    }
    printf("Existem %d vogais nessa frase\n", c);
    
    printf("Digite um caractere:\n");
    scanf(" %c", &x);

    for (i = 0; i < 100; i++){
        if (stg [i] == 'a' || stg [i] == 'A' || stg [i] == 'e' || stg [i] == 'E' || stg [i] == 'i' || stg [i] == 'I' || stg [i] == 'o' || stg [i] == 'O' || stg [i] == 'u' || stg [i] == 'U'){
            stg[i] = x;
        }
    }
    printf("%s", stg);


system("pause");
return 0;
}

/5

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char stg [100];
    int j = 0, i = 0, x;

    printf("Digite uma frase:\n");
    fgets(stg, 100, stdin);

    x = strlen(stg);

    for (i = 0; i < x; i++){
        if ((stg[i] >= 65 || stg[i] <= 90) && (stg[i] != 32) && (stg[i] != 10)){
            stg[i] += 32;
        }
    }
    printf("%s", stg);


system("pause");
return 0;
}

/6

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char stg [100];
    int j = 0, i = 0, x;

    printf("Digite uma frase:\n");
    fgets(stg, 100, stdin);

    x = strlen(stg);

    for (i = 0; i < x; i++){
        if ((stg[i] >= 97 || stg[i] <= 122) && (stg[i] != 32) && (stg[i] != 10)){
            stg[i] -= 32;
        }
    }
    printf("%s", stg);


system("pause");
return 0;
}

/7 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char stg [100];
    int j = 0, i = 0, x;

    printf("Digite uma frase:\n");
    fgets(stg, 100, stdin);

    x = strlen(stg);

    for (i = 0; i < x; i++){
        if (stg[i] == 32){
            stg[i] += 95;
        }
    }
    printf("%s", stg);


system("pause");
return 0;
}

/8

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char stg [100], l1, l2;
    int i = 0, x;

    printf("Digite uma frase:\n");
    fgets(stg, 100, stdin);

    printf("Digite uma letra:\n");
    scanf(" %c", &l1);

    printf("Digite uma letra:\n");
    scanf(" %c", &l2);

    x = strlen(stg);

    for (i = 0; i < x; i++){
        if (stg[i] == l1){
            if (l2 >= 65 || l2 < 90){
                stg[i] = l2;
            }
            else if (l2 >= 97 || l2 <= 122)
                stg[i] = l2;
        }
    }
    printf("%s", stg);


system("pause");
return 0;
}

/9

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char stg [5][200];
    int vet[5], i, m = 0, pm = 0, x;
    
    for (i = 0; i < 5; i++){
        printf("Digite modelos de carro:\n");
        fgets(stg[i], 200, stdin);
    }

    for (i = 0; i < 5; i++){
        printf("Com 1 litro de combustivel, quantos quilometros percorre o: %s", stg[i]);
        fflush(stdin);
        scanf("%d", &vet[i]);
    }
    
    printf("\n");

    for (i = 0; i < 5; i++){
        if (vet[i] > m){
            m = vet[i];
            pm = i;
        }
    }
    printf("A maior autonomia com %d km/l eh do: %s", vet[pm], stg[pm]);

    printf("\n");

    for (i = 0; i < 5; i++){
        x = 1000 / vet[i];
        printf("Com, aproximadamente, %d litros de combusivel eh possivel percorrer 1000km com o %s", x, stg[i]);
    }


system("pause");
return 0;
}

/10

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char stg [1][250];
    int i = 0, vet[100], k, x = 0;
    
    for (i = 0; i < 1; i++){
        printf("Escolha uma mercadoria de seu interesse:\n");
        fgets(stg[i], 250, stdin);
    }

    for (i = 0; i < 1; i++){
        printf("Qual o valor do(a) %s", stg[i]);
        fflush(stdin);
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < 1; i++){
    printf("Escolha um metodo de um metodo de pagamento:\nDigite 1 para pagamento: a vista\nDigite 2 para pagamento: parcelado\n");
    scanf("%d", &k);
    
        if (k == 1){
            x = vet[i] * 0.9;
            printf("%s", stg);
            printf("Desconto de 10 por cento sobre o valor total\n");
            printf("O valor total eh: %d\n", vet[i]);
            printf("O valor  a ser pago a vista eh de: %d\n", x);
        }
        else if (k == 2){
            printf("%s", stg);
            printf("O produto nao tem desconto\n");
            printf("O valor total eh: %d\n", vet[i]);
            printf("O valor  a ser pago parcelado eh de: %d\n", vet[i]);
        }
    }


system("pause");
return 0;
}

/11

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char S[100];
    
    int i = 0, j = 0;
    printf("Digite numeros inteiros nao-negativos:\n");
    fgets(S, 100, stdin);

    printf("Digite a posicao inicial de i:\n");
    scanf("%d", &i);

    printf("Digite a posicao final:\n");
    scanf("%d", &j);

    while (i <= j){
        printf("%c", S[i]);
        i++;
    }

system("pause");
return 0;
}

/12

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char stg[100];
    int i, x;
    printf("Digite uma frase para ser criptografada:\n");
    fgets(stg, 100, stdin);

    x = strlen(stg);

    for (i = 0; i < x; i++){
        stg[i] = stg[i] + 3;
        if(stg[i] == '#'){
            stg[i] = ' ';
        }
    }
    printf("O codigo de Cesar corresponde a: %s", stg);

// Nao esta funcionando no Visual Studio Code (VS Code), porem funciona em compiladores online.

system("pause");
return 0;
}

/13

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char stg[250];
    int i, x, o = 0, p = 0;
    printf("Digite uma frase:\n");
    fflush(stdin);
    fgets(stg, 250, stdin);

    x = strlen(stg);

    for (i = 0; i < x; i++){
        while (stg[i] == 32){
            for (o = i; o < x - 1; o++){
                stg[o] = stg[o + 1];
            }
            stg[o] = '\0';
        }
    }

    x = strlen(stg) - 1;

    printf("%s\n", stg);

    for(i = 0; i < x; i++){ 
        printf("posicao %d = %c | posicao %d = %c\n", i, stg[i], x - i - 1, stg[x - i - 1]);
        if(stg[i]!=stg[x-i-1]){
            p = 1;
        }   
    }    
    
    if(p == 0){
        printf("Eh palindromo\n");
    }
    else{
        printf("Nao eh palindromo\n");
    }


system("pause");
return 0;
}

/14

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char stg[100], stg2[100];
    int i, n;
    printf("Digite uma frase:\n");
    fflush(stdin);
    fgets(stg, 100, stdin);

    printf("Digite uma frase:\n");
    fflush(stdin);
    fgets(stg2, 100, stdin);

    printf("Digite um numero inteiro positivo:\n");
    fflush(stdin);
    scanf("%d", &n);

    for (i = 0; i < n; i++){
        strcat(stg, stg2);
    }
    printf("%s", stg);


system("pause");
return 0;
}

/15

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char stg[100], stg2[100], stgA[20], x, l, sub;
    int c = 0, r = 0, i = 0, t = 0, y = 0;

    do{

        printf("Escolha uma opcao:\n");
        printf("Digite A - Ler uma string S1 (tamanho maximo 20 caracteres)\n");
        printf("Digite B - Imprimir o tamanho da string S1\n");
        printf("Digite C - Comparar a string S1 com uma nova string S2 fornecida pelo usuario e imprimir o rado da comparacao\n");
        printf("Digite D - Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenacao\n");
        printf("Digite E - Imprimir a string S1 de forma reversa\n");
        printf("Digite F - Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuario\n");
        printf("Digite G - Substituir a primeira ocorrencia do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 serao lidos pelo usuario\n");
        printf("Digite H - Verificar se uma string S2 eh substring de S1. A string S2 deve ser informada pelo usuario\n");
        printf("Digite I - Retornar uma substring da string S1. Para isso o usuario deve informar a partir de qual posicao deve ser criada a substring e qual eh o tamanho da substring.\n\n");
        printf("Opcao: \n");
        
        scanf("%c", &x);
    } 
    while (x < 65 && x > 90);
    
    fflush(stdin);

    if (x == 'a' || x == 'A'){
        fflush(stdin);
        printf("Digite uma frase:\n");
        scanf("%20[^\n]", stgA);

        printf("A frase digitada foi:\n%s\n", stgA);
    
    return 0;
    }

    printf("Digite um frase:\n");
    scanf("%100[^\n]", stg);

    y = strlen(stg);

    if (x == 'b' || x == 'B'){
        printf("O tamanho da string eh de: %d\n", y);
    } 

    else if (x == 'c' || x == 'C'){
        fflush(stdin);
        printf("Digite uma frase para comparacao com a primeira digitada:\n");
        scanf("%100[^\n]", stg2);

        printf("O resultado da comparacao eh: %d\n", strcmp(stg, stg2));
    }

    else if (x == 'd' || x == 'D'){
        fflush(stdin);
        printf("Digite uma frase para concatenar na primeira digitada:\n");
        scanf("%100[^\n]", stg2);

        printf("%s\n", strcat(stg, stg2));
    }

    else if (x == 'e' || x == 'E'){
        fflush(stdin);
        printf("A frase ao inverso eh: \n");
        for (c = strlen(stg); c > -1; c--){
            printf("%c", stg[c]);
        }
    }

    else if (x == 'f' || x == 'F'){
        fflush(stdin);
        printf("Digite o caracter que voce deseja contar:\n");
        scanf("%c", &l);
        for (c = 0; c < 100; c++){
            if (stg[c] == l){
                r++;
            }
        }
    printf("O caracter %c aparece %d vez(es) nessa frase\n", l, r);
    }
    
    else if (x == 'g' || x == 'G'){
        fflush(stdin);
        printf("Digite o caracter que voce deseja mudar:\n");
        scanf("%c", &l);
        fflush(stdin);
        printf("Digite um caracter para substitui-lo:\n");
        scanf("%c", &sub);
        for (c = 0; c < 100; c++){
            if (stg[c] == l){
                stg[c] = sub;
            }
        }
    printf("%s", stg);
    }

    else if (x == 'h' || x == 'H'){
        fflush(stdin);
        printf("Digite uma frase para saber se eh subfrase da primeira frase digitada:\n");
        scanf("%100[^\n]", stg2);
        r = strstr(stg, stg2);
        if(r){
            printf("Eh subfrase\n");
        }
        else{
            printf("A segunda frase nao eh subfrase da primeira digitada\n");
        }
    }

    else if (x == 'i' || x == 'I'){
        fflush(stdin);
        printf("Digite uma posicao inicial da subfrase:\n");
        scanf("%d", &i);
        fflush(stdin);
        printf("Digite o tamanho da frase:\n");
        scanf("%d", &t);
        for (c = i; c < (i + t); c++){
            printf("%c", stg[c]);
        }
    }

return 0;
}

/16

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char stg[1500];
    int i = 0, j = 0, p, mx = 0;

    printf("Digite o numero sugerido:\n");
    fflush(stdin);
    fgets(stg, 1500, stdin);

    for (i = 0; stg[i + 4] != '\0' && stg[i + 4] != '\n'; i++){
        p = 1;
        for (j = i; j < i + 5; j++){
            p = p * (stg[j] - 48);
        }
        if (p > mx){
            mx = p;
        }
    }
    fflush(stdin);
    printf("O maior produto dessa sequencia de numeros eh: %d\n", mx);


system("pause");
return 0;
}

