9/1

#include <stdio.h>

int main(){
    float x, y;
    printf("Digite dois numeros:\n");
    scanf("%f %f", &x, &y);
    if (x > y){
        printf("O maior eh:\n %.2f", x);

    }
    else {
        printf("O maior eh:\n %.2f", y);

    }

return 0;

{

/2

#include <stdio.h>
#include <math.h>

int main(){
    int x, r;
    printf("Digite um numero:\n");
    scanf("%d", &x);
    if (x >= 0){
        sqrt(x);
        r = sqrt (x);
        printf("A raiz eh:\n %d", r);

    }
    else {
        printf("O numero eh invalido:\n");

    }

return 0;

/3

#include <stdio.h>
#include <math.h>

int main(){
    int x, r, q;
    printf("Digite um numero:\n");
    scanf("%d", &x);
    if (x >= 0){
        sqrt(x);
        r = sqrt (x);
        printf("A raiz eh:\n %d", r);

    }
    else {
        q = (x * x);
        printf("O quadrado desse numero eh:\n %d", q);

    }

return 0;

/4

#include <stdio.h>
#include <math.h>

int main(){
    int x, r, q;
    printf("Digite um numero:\n");
    scanf("%d", &x);
    if (x >= 0){
        sqrt(x);
        r = sqrt (x);
        q = (x * x);
        printf("A raiz eh e o seu quadrado eh, respectivamente:\n %d \n %d", r, q);

    }


return 0;

/5

#include <stdio.h>
#include <math.h>

int main(){
    int x;
    printf("Digite um numero:\n");
    scanf("%d", &x);
    if (x % 2 == 0){
        printf("O numero eh par:\n %d", x);

    }

    else {
        printf("O numero eh impar:\n %d", x);


    }


return 0;

/6

#include <stdio.h>
#include <math.h>

int main(){
    int x, y, dif1, dif2;
    printf("Digite dois numeros:\n");
    scanf("%d %d", &x, &y);
    if (x > y){
        dif1 = x - y;
        printf("O maior eh e a diferenca entre eles eh:\n %d \n %d", x, dif1);

    }
    else {
        dif2 = y - x;
        printf("O maior eh e a diferenca entre eles eh:\n %d \n %d", y, dif2);

    }

return 0;

}

/7

#include <stdio.h>
#include <math.h>

int main(){
    int x, y;
    printf("Digite dois numeros:\n");
    scanf("%f %f", &x, &y);
    if (x > y){
        printf("O maior eh:\n %d", x);

    }
    else {
        if (y > x)
            printf ("O maior eh:\n %d", y);
        else
            printf ("Os numeros sao iguais\n");

    }


return 0;

}

/8

#include <stdio.h>
#include <math.h>

int main(){
    float n1, n2, M;
    printf("Digite duas notas:\n");
    scanf("%f %f", &n1, &n2);

    if((n1 >= 0 && n1 <= 10) && (n2 >= 0 && n2 <= 10)){
            M = (n1 + n2) / 2;
            printf ("A media eh:\n %f", M);
    }
    else{
        printf("A nota eh invalida:\n");
    }




return 0;


}

/9

#include <stdio.h>
#include <math.h>

int main(){
    float s, pe;
    printf("Digite o valor do salario de um trabalhador:\n");
    scanf("%f", &s);
    printf("Digite o valor da prestacao de um emprestimo:\n");
    scanf("%f", &pe);

    if (pe >= (s * 0.20)){
            printf("Emprestimo nao concedido");
    }
    else{
        printf("Emprestimo concedido");
    }


return 0;


}

/10

#include <stdio.h>
#include <math.h>

int main(){
    float altura, h, m;
    char sexo;
    printf("Digite a altura de uma pessoa, em metros:\n");
    scanf("%f", &altura);
    printf("Digite o sexo (h ou m) dessa pessoa:\n");
    scanf(" %c", &sexo);


    if (sexo == 'h'){
            h = (72.7 * altura) - 58.0;
            printf("O peso ideal eh:\n %.2f", h);
    }

    if (sexo == 'm'){
            m = (62.1 * altura) - 44.7;
            printf("O peso ideal eh:\n %.2f", m);
    }



return 0;


}

/11

#include <stdio.h>
#include <math.h>

int main(){
    int x, soma;
    soma = 0;
    printf("Digite um numero inteiro maior do que 0:\n");
    scanf("%d", &x);
    
	while (x > 0){
    soma = soma + x % 10;
    x = x / 10;
    }
    printf("A soma dos algarismos eh:\n %d", soma);
    if (x < 0){
        printf("O numero eh invalido"
    }


return 0;


}

/12

#include <stdio.h>
#include <math.h>

int main(){
    int x, r;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &x);

    if (x > 0){
            r = log(x);
            printf("O logaritmo desse numero eh:\n %d", r);
    }


return 0;


}

/13

#include <stdio.h>
#include <math.h>

int main(){
    float n1, n2, n3, mp;
    printf("Digite as notas das tres provas;\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    mp = ((n1 * 1) + (n2 * 1) + (n3 *2))/(1 + 1 + 2);
    printf("A media eh:\n %.2f \n", mp);

    if (mp >= 60){
        printf("Voce foi APROVADO");
    }
    else{
        printf("Voce foi REPROVADO");
    }


return 0;


}

/14

#include <stdio.h>
#include <math.h>

int main(){
    float n1, n2, n3, mp;
    printf("Digite a nota do trabalho de laboratorio:\n");
    scanf("%f", &n1);
    printf("Digite a nota da avaliacao trimestral:\n");
    scanf("%f", &n2);
    printf("Digite a nota do exame final:\n");
    scanf("%f", &n3);
    mp = ((n1 * 2) + (n2 * 3) + (n3 *5))/(2 + 3 + 5);
    printf("A media eh:\n %.2f \n", mp);

    if (mp <= 2.9){
            printf("Voce foi REPROVADO");
    }
    if (mp >= 3 && mp <= 4.9){
            printf("Voce esta de RECUPERACAO");
    }
    if (mp >= 5){
            printf("Voce foi APROVADO");
    }


return 0;


}

/15

#include <stdio.h>
#include <math.h>

int main(){
    char x;
    printf("Digite um numero de 1 a 7:\n");
    scanf("%c", &x);

    switch(x){
        case 1:
            printf("O dia da semana eh:\n Domingo");
            break;
        case 2:
            printf("O dia da semana eh:\n Segunda-feira");
            break;
        case 3:
            printf("O dia da semana eh:\n Terca-feira");
            break;
        case 4:
            printf("O dia da semana eh:\n Quarta-feira");
            break;
        case 5:
            printf("O dia da semana eh:\n Quinta-feira");
            break;
        case 6:
            printf("O dia da semana eh:\n Sexta-feira");
            break;
        case 7:
            printf("O dia da semana eh:\n Sabado");
            break;
        default:
            printf("O numero eh invalido");
            break;
    }


return 0;


}

/16

#include <stdio.h>
#include <math.h>

int main(){
    char x;
    printf("Digite um numero de 1 a 12:\n");
    scanf("%c", &x);

    switch(x){
        case 1 :
            printf("O mes eh:\n Janeiro");
            break;
        case 2:
            printf("O mes eh:\n Fevereiro");
            break;
        case 3:
            printf("O mes eh:\n Marco");
            break;
        case 4:
            printf("O mes eh:\n Abril");
            break;
        case 5:
            printf("O mes eh:\n Maio");
            break;
        case 6:
            printf("O mes eh:\n Junho");
            break;
        case 7:
            printf("O mes eh:\n Julho");
            break;
        case 8:
            printf("O mes eh:\n Agosto");
            break;
        case 9:
            printf("O mes eh:\n Setembro");
            break;
        case 10:
            printf("O mes eh:\n Outubro");
            break;
        case 11:
            printf("O mes eh:\n Novembro");
            break;
        case 12:
            printf("O mes eh:\n Dezembro");
            break;
        default:
            printf("O numero eh invalido");
            break;
    }


return 0;


}

/17

#include <stdio.h>
#include <math.h>

int main(){
    float x, y, h, a;
    printf("Digite a base maior de um trapezio:\n");
    scanf("%f", &x);
    printf("Digite a base menor de um trapezio:\n");
    scanf("%f", &y);
    printf("Digite a altura de um trapezio:\n");
    scanf("%f", &h);
    a = ((x + y) * h) / 2;
    printf("A area eh:\n %.2f", a);


return 0;

}

/18 

#include <stdio.h>
#include <math.h>

int main(){
    float x, y, o1, o2, o3, o4;
    char z;
    printf("Escolha entre essas operacoes para realizar um calculo:\n + - * / \n");
    scanf("%c", &z);
    printf("Escolha dois valores:\n");
    scanf("%f %f", &x, &y);

    if (z == '+'){
            o1 = x + y;
            printf("O valor da soma eh:\n %.2f", o1);
    }
    if (z == '-'){
            o2 = x - y;
            printf("O valor da subtracao eh:\n %.2f", o2);
    }
    if (z == '*'){
            o3 = x * y;
            printf("O valor da multiplicacao eh:\n %.2f", o3);
    }
    if (z == '/'){
            o4 = x / y;
            printf("O valor da divisao eh:\n %.2f", o4);
    }


return 0;

}

/19

#include <stdio.h>
#include <math.h>

int main(){
    int x;
    printf("Digite um valor inteiro:\n");
    scanf("%d", &x);

    if (x % 3 == 0){
        printf("Eh divisivel por 3");
    }
    else{
            if (x % 5 == 0)
        printf("Eh divisivel por 5");
    printf("NAO EH DIVISIVEL POR NENHUM DESSES");
    }




return 0;

}

/20

#include <stdio.h>
#include <math.h>

int main(){
    float A, B, C;
    printf("Digite tres valores:\n");
    scanf("%f %f %f", &A, &B, &C);

    if ((A <= B + C) && (B <= A + C) && (C <= A + B)){
        if ((A == B) && (B == C) && (C == A))
            printf("Eh equilatero \n");
        if ((A == B)||(B == C)||(C == A))
            printf("Eh isoceles \n");
        if ((A != B) && (B != C) && (A != C))
            printf("Eh escaleno");
    }

return 0;

}

/21

#include <stdio.h>
#include <math.h>

int main(){
    float x, y, o1, o2, o21, o3, o4;
    char z;
    printf("Escolha entre as opcoes abaixo:\n Soma de dois numeros, digite 1\n Diferenca entre dois numeros, digite 2\n Produto de dois numeros, digite 3\n Divisao de dois numeros, onde o denominador nao pode ser 0, digite 4\n");
    scanf("%c", &z);
    printf("Escolha dois valores:\n");
    scanf("%f %f", &x, &y);


    if ((z == '1') || (z == '2') || (z == '3') || (z == '4')){

    if (z == '1'){
            o1 = x + y;
            printf("O valor da soma eh:\n %.2f", o1);
    }
    switch (z){
        case '2':
        if (x > y){
            o2 = x - y;
            printf("O valor da subtracao eh:\n %.2f", o2);
    }
        else{
            o21 = y - x;
            printf("O valor da subtracao eh:\n %.2f", o21);
    }
    break;
        case '4':
        if (y != 0){
            o4 = x / y;
            printf("O valor da divisao eh:\n %.2f", o4);
    }
        else{
            printf("Digite um numero diferente de zero");
    }
    break;
    }
        if (z == '3'){
            o3 = x * y;
            printf("O valor da multiplicacao eh:\n %.2f", o3);
    }
    }
    else {
        printf("ERRO");
    }



return 0;

}

/22

#include <stdio.h>
#include <math.h>

int main(){
    int x, y;
    printf("Apresente a idade de um trabalhador:\n");
    scanf("%d", &x);
    printf("Apresente a quantidade de anos trabalhados:\n");
    scanf("%d", &
          y);

    if (x >= 65){
        printf("O trabalhador tem direito a aposentadoria");
    }
        else{
            if (y >= 30)
            printf("O trabalhador tem direito a aposentadoria");
            else
                if ((x >= 60) && (y >= 25))
                printf("O trabalhador tem direito a aposentadoria");
                else
                    printf("Nao tem direito a aposentadoria");

}

return 0;

}

/23

#include <stdio.h>
#include <math.h>

int main(){
    int x;
    printf("Apresente um ano do calendario:\n");
    scanf("%d", &x);

    if (((x % 400)==0) || ((x % 4) == 0) && ((x%100)!= 0)){
        printf("Eh um ano bissexto");
    }
        else{
            printf("Nao eh um ano bissexto");
    }


return 0;

}

/24

#include <stdio.h>
#include <math.h>

int main(){
    float x, x1, x2, x3, x4;
    int z;
    printf("Selecione um estado:\n Para MG, digite 1\n Para SP, digite 2\n Para RJ, digite 3\n Para MS, digite 4\n");
    scanf("%d", &z);
    printf("Digite o preco de um produto:\n");
    scanf("%f", &x);


    if (z == 1){
        x1 = x * 1.07;
        printf("O preco do produto em MG eh:  %.2f", x1);
    }
    else if (z == 2){
        x2 = x * 1.12;
        printf("O preco do produto em SP eh:  %.2f", x2);
    }
    else if (z == 3){
        x3 = x * 1.15;
        printf("O preco do produto em RJ eh:  %.2f", x3);
    }
    else if (z == 4){
        x4 = x * 1.08;
        printf("O preco do produto em MS eh:  %.2f", x4);
    }
    else{
        printf("Estado invalido");
    }

return 0;

}

/25
 
#include <stdio.h>
#include <math.h>

int main (){
    float a = 0, b = 0, c = 0, d = 0, y = 0, x1 = 0, x2 = 0;
    printf("Digite os valores de a, b e c de uma equacao de segundo grau ax2 + bx + c:/n");
    scanf("%f %f %f", &a, &b, &c);
    d = (b * b) - 4 * a * c; 
    y = sqrt (d);

    if (d > 0){
        x1 = (-b + y)/(2 * a);
        x2 = (-b - y)/(2 * a);
        printf("As raizes sao:\n %.2f %.2f", x1, x2);
	}
    else if (d == 0){
        x1 = (-b + y)/(2 * a);
        printf("A raiz  unica eh:\n %.2f", x1);
   
	}
    else{
        printf("Nao existe raiz");
    }
    
system("pause");
return 0;
}

/26

#include <stdio.h>
#include <math.h>

int main (){
    float km, d, c;
    printf("Digite a distancia percorrida por um carro durante um percurso:\n");
    scanf("%f", &km);
    printf("Digite a quantidade de gasolina consumida por esse carro durante esse percurso:\n");
    scanf("%f", &d);
    c = km / d;

    if (c < 8){
        printf("VENDA O CARRO\n");
    }
    else if ((c >= 8) && (c <= 14)){
        printf("ECONOMICO\n");
    }
    else if (c > 14){
        printf("SUPER ECONOMICO\n");
    }
    
    
system("pause");
return 0;
}

/27

#include <stdio.h>
#include <math.h>

int main (){
    int x;
    printf("Digite a idade de um nadador:\n");
    scanf("%d", &x);

    if (x < 5){
        printf("Idade invalida\n");
    }
    else if ((x >= 5) && (x <= 7)){
        printf("INFANTIL A\n");
    }
    else if ((x >= 8) && (x<= 10)){
        printf("INFANTIL B\n");
    }
    else if ((x >= 11) && (x <= 13)){
        printf("JUVENIL A\n");
    }
    else if ((x >= 14) && (x <= 17)){
        printf("JUVENIL B\n");
    }
    else if(x >= 18){
        printf("SENIOR\n");
    }
    

system("pause");
 return 0;
}

/28

#include <stdio.h>
#include <math.h>

int main (){
    float x, y, z, m;
    char w;
    printf("Digite tres valores inteiros: \n");
    scanf("%f %f %f", &x, &y, &z);
    printf("Selecione uma opcao de media para calcular:\n (a)Geometrica\n (b)Ponderada\n (c)Harmonica\n (d)Aritmetica\n");
    scanf(" %c", &w);

    if ( w == 'a'){
        m = pow((x * y * z), 1.0 / 3.0);
        printf("A media geometrica eh:\n %d.2f \n", m);
    }
    else if (w == 'b'){
        m = ((1 * x) + (2 * y) + (3 * z)) / 3;
        printf("A media ponderada eh:\n %.2f \n", m);
    }
    else if (w == 'c'){
        m = 1 / ((1 / x) + (1 / y) + (1 / z));
        printf("A media harmonica eh:\n %.2f \n", m);
    }
    else if (w == 'd'){
        m = (x + y +z) / 3;
        printf("A media aritmetica eh:\n %.2f \n", m);
    }

system("pause");
 return 0;
}

/29

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main (){
    int a, b, s = 0, r;
    printf("PROVA DE MATEMATICA\n");
    printf("Nome:____________________________________________                           Data: __/__/__\n");
    printf("Boa prova!\n");
    srand(time(NULL));
    a = rand () % 100;
    b = rand() % 100;
    printf("1- quanto da %d + %d:\n", a, b);
    printf("Digite a resposta:\n");
    scanf("%d", &r);

    if (r == (a + b)){
        printf("TA CERTO\n");
        s++;
    }
    else{
        printf("TA ERRADO\n");
    }
    

    a = rand () % 100;
    b = rand() % 100;
    printf("2- quanto da %d + %d:\n", a, b);
    printf("Digite a resposta:\n");
    scanf("%d", &r);

    if (r == (a + b)){
        printf("TA CERTO\n");
        s++;
    }
    else{
        printf("TA ERRADO\n");
    }
    

    a = rand () % 100;
    b = rand() % 100;
    printf("3- quanto da %d + %d:\n", a, b);
    printf("Digite a resposta:\n");
    scanf("%d", &r);

    
    if (r == (a + b)){
        printf("TA CERTO\n");
        s++;
    }
    else{
        printf("TA ERRADO\n");
    }
    
    
    a = rand () % 100;
    b = rand() % 100;
    printf("4- quanto da %d + %d:\n", a, b);
    printf("Digite a resposta:\n");
    scanf("%d", &r);

    if (r == (a + b)){
        printf("TA CERTO\n");
        s++;
    }
    else{
        printf("TA ERRADO\n");
    }
    
    
    a = rand () % 100;
    b = rand() % 100;
    printf("5- quanto da %d + %d:\n", a, b);
    printf("Digite a resposta:\n");
    scanf("%d", &r);

    if (r == (a + b)){
        printf("TA CERTO\n");
        s++;
    }
    else{
        printf("TA ERRADO\n");
    }
    printf("Numeros de acertos %d \n", s);

system("pause");
 return 0;
}

/30

#include <stdio.h>
#include <math.h>

int main (){
    float x, y, z;
    printf("Digite tres numeros inteiros:\n");
    scanf("%f %f %f", &x, &y, &z);
    

    if ((x > y) && (y > z)){
        printf("%.2f %.2f %.2f \n", x, y, z);
    }
    if ((x > z) && (z > y)){
        printf("%.2f %.2f %.2f \n", x, z, y);
    }
    else if ((y > x) && (x > z)){
        printf("%.2f %.2f %.2f \n", y, x, z);
    }
    else if ((y > z) && (z > x)){
        printf("%.2f %.2f %.2f \n", y, z, x);
    }
    else if ((z > x) && (x > y)){
        printf("%.2f %.2f %.2f \n", z, x, y);
    }
    else if ((z > y) && (y > x)){
        printf("%.2f %.2f %.2f \n", z, y, x);
    }

system("pause");
 return 0;
}

/31

#include <stdio.h>
#include <math.h>

int main (){
    float h, w;
    printf("Digite a altura, em metros, e peso, em kg, de uma pessoa:\n");
    scanf ("%f %f", &h, &w);

    if ((h < 1.20) && (w == 60.0)){
        printf("CLASSIFICACAO A\n");
    }
    else if ((h >= 1.20 && h <= 1.70) && (w == 60.0)){
        printf("CLASSIFICACAO B\n");
    }
    else if ((h > 1.70) && (w == 60.0)){
        printf("CLASSIFICACAO C\n");
    }
    else if ((h < 1.20) && (w >= 60.0 && w <= 90.0)){
        printf("CLASSIFICACAO D\n");
    }
    else if ((h >= 1.20 &&  h <= 1.70) && (w >= 60.0 && w <= 90.0)){
        printf("CLASSIFICACAO E\n");
    }
    else if ((h > 1.70) && (w >= 60.0 && w <= 90.0)){
        printf("CLASSIFICACAO F\n");
    }
    else if ((h < 1.20) && (w > 90.0)){
        printf("CLASSIFICACAO G\n");
    }
    else if ((h >= 1.20 && h <= 1.70) && (w >= 60.0 && w <= 90.0)){
        printf("CLASSIFICACAO H\n");
    }
    else if ((h > 1.70) && (w > 90.0)){
        printf("CLASSIFIACAO I\n");
    }

system("pause");
 return 0;
}

/32

#include <stdio.h>
#include <math.h>

int main(){
    int x;
    float q, cq, b, bo, h, c, s, r, t;
    printf("Escolha no cardapio um lanche de acordo com seu codigo simplificado\n Cachorro Quente Codigo: 100\n Bauru Simples Codigo: 101\n Bauru com Ovo Codigo: 102\n Hamburguer Codigo: 103\n Cheeseburguer Codigo: 104\n Suco Codigo: 105\n Refrigerante Codigo: 106\n");
    scanf("%d", &x);
    printf("Qual a quantidade?\n");
    scanf("%f", &q);

    switch (x){
        case 100:{
        cq = 1.20;
        t = cq * q;
        printf("O valor do pedido eh:\n %.2f \n", t);
    break;
        }
        case 101:{
        b = 1.30;
        t = b * q;
        printf("O valor do pedido eh:\n %.2f \n", t);
        break;
        }
        case 102:{
        bo = 1.50;
        t = bo * q;
        printf("O valor do pedido eh:\n %.2f \n", t);
    break;
        }
        case 103:{
        h = 1.20; 
        t = h * q;
        printf("O valor do pedido eh:\n %.2f \n", t);
    break;
        }
        case 104:{
        c = 1.70;
        t = c * q;
        printf("O valor do pedido eh:\n %.2f \n", t);
    break;
        }
        case 105:{
        s = 2.20;
        t = s * q;
        printf("O valor do pedido eh:\n %.2f \n", t);
    break;
        }
        case 106:{
        r = 1.00;
        t = r * q;
        printf("O valor do pedido eh:\n %.2f \n", t);
    break;
        }
}

system("pause");
return 0;

}

/33

#include <stdio.h>
#include <math.h>

int main(){
    float p, pa;
    printf("Apresente o valor antigo de um produto:\n");
    scanf("%f", &p);
    
    if (p < 50){
        pa = p * 1.05;
        printf("O atual valor do produto eh:\n %.2f \n", pa);
    }
    else if ((p >= 50) && (p <= 100)){
        pa = p * 1.10;
        printf("O atual valor do produto eh:\n %.2f \n", pa);
    }
    else if (p > 100){
        pa = p * 1.15;
        printf("O atual valor do produto eh:\n %.2f \n", pa);
    }
    if (pa < 80){
        printf("BARATO\n");
    }
    else if ((pa >= 80) && (pa <= 120)){
            printf("NORMAL\n");
    }
    else if((pa > 120) && (pa <= 200)){
        printf("CARO\n");
    }
        else if (pa > 200){
            printf("MUITO CARO\n");
    }

system("pause");
return 0;

}

/34

#include <stdio.h>
#include <math.h>

int main(){
    float n, f;
    printf("Apresente a nota de um aluno de 0.0 a 10.0:\n");
    scanf("%f", &n);
    printf("Apresente a quantidade de faltas desse aluno:\n");
    scanf("%f", &f);

    
    if (f < 20){
        if ((n >= 0.0) && (n <= 3.9)){
            printf("E\n");
        }
        else if ((n >= 4.0) && (n <= 4.9)){
            printf("D\n");
        }
         else if ((n >= 5.0) && (n <= 7.4)){
            printf("C\n");
        }
         else if ((n >= 7.5) && (n <= 8.9)){
            printf("B\n");
        }
         else if ((n >= 9.0) && (n <= 10.0)){
            printf("A\n");
        }
    }
    if (f > 20){
        if ((n >= 0.0) && (n <= 3.9)){
            printf("E\n");
        }
        else if ((n >= 4.0) && (n <= 4.9)){
            printf("E\n");
        }
         else if ((n >= 5.0) && (n <= 7.4)){
            printf("D\n");
        }
         else if ((n >= 7.5) && (n <= 8.9)){
            printf("C\n");
        }
         else if ((n >= 9.0) && (n <= 10.0)){
            printf("B\n");
        }
    }
   

system("pause");
return 0;

}

/35

#include <stdio.h>
#include <math.h>

int main(){
    int d, m, a;
    printf("Digite uma data dia, mes e ano:\n");
    scanf("%d %d %d", &d, &m, &a);

    if ((a > 0) && (d >= 1) && (d <= 31) && (m >= 1) && (m <= 12)){
        switch (m){
            case 1:
            printf("Valido\n");
        break;
        
            case 2:
            if (((a % 400) == 0) || ((a % 4) == 0) && ((a % 100)!= 0)){
                if ((d >= 1) && (d <= 29)){
                    printf("Valido\n");
                }
            }
            else{
                if ((d >= 1) && (d <= 28)){
                printf("Valido\n");
                }
                else{
                    printf("Invalido\n");
            }
            }
        break;

            case 3:
            printf("Valido\n");
        break;

             case 4:
            if (d <= 30){
                printf("Valido\n");
            }
            else{
                printf("Invalido\n");
            }
         break;

            case 5:
            printf("Valido\n");
        break;

            case 6:
             if (d <= 30){
                printf("Valido\n");
            }
            else{
                printf("Invalido\n");
            }
        break;

            case 7:
            printf("Valido\n");
        break;

            case 8:
            printf("Valido\n");
        break;

            case 9:
            if (d <= 30){
                printf("Valido\n");
            }
            else{
                printf("Invalido\n");
            }
        break;

            case 10:
            printf("Valido\n");
        break;

            case 11:
            if (d <= 30){
                printf("Valido\n");
            }
            else{
                printf("Invalido\n");
            }
        break;

            case 12:
            printf("Valido\n");
        break;
        }
    }
    else{
        printf("Invalido\n");
    }
   
system("pause");
return 0;

}

/36

#include <stdio.h>
#include <math.h>

int main(){
    float x, c1, c2, c3, c4, c5, c6;
    printf("Digite o valor das vendas:\n");
    scanf("%f", &x);

    if (x >= 100.000){
        c1 = 700.0 + (x * 1.16);
        printf("A comissao equivale a:\n %.2f \n", c1);
    }
    if ((x >= 80.000) && (x < 100.000)){
        c2 = 650.0 + (x * 1.14);
        printf("A comissao equivale a:\n %.2f \n", c2);
    }
    if ((x >= 60.000) && (x < 80.000)){
        c3 = 600 + (x * 1.14);
        printf("A comissao equivale a:\n %.2f \n", c3);
    }
    if ((x >= 40.000) && (x < 60.000)){
        c4 = 550 + (x * 1.14);
        printf("A comissao equivale a:\n %.2f \n", c4);
    }
    if ((x >= 20.000) && (x < 40.000)){
        c5 = 500 + (x * 1.14);
        printf("A comissao equivale a:\n %.2f \n", c5);
    }
    if (x < 20.000){
        c6 = 400 + (x * 1.14);
        printf("A comissao equivale a:\n %.2f \n", c6);
    }

system("pause");
return 0;

}

/37

#include <stdio.h>
#include <math.h>

int main (){
    float he, me, hs, ms, e, s, ph, vt;
    int p;
    printf("Digite o horario de entrada, em horas e minutos:\n");
    scanf("%f %f", &he, &me);
    printf("Digite o horario de saida, em horas e minutos:\n");
    scanf("%f %f", &hs, &ms);
    
    if (he > hs){
        he -= 24;
        e = he * 60 + me;
        s = hs * 60 + ms;
        p = s - e;
    }
    if (p % 60 > 0){
        ph = (p / 60) + 1;
    }
    else{
        ph = p / 60;
    }
    if (p <= 2){
        vt = ph * 1;
        printf("O valor total ser pago eh:\n %.2f \n", vt);
    }
    else if (ph <= 4){
        vt = ph * 1.4;
        printf("O valor total ser pago eh:\n %.2f \n", vt);
    }
    else if (ph >= 5){
        vt = ph * 2;
         printf("O valor total ser pago eh:\n %.2f \n", vt);
    }

    system("pause");
    return 0;

}

/38

#include <stdio.h>
#include <math.h>

int 
main(){
    int d, m, a, at=2022;
    printf("Digite uma data dia, mes e ano:\n");
    scanf("%d %d %d", &d, &m, &a);

    if ((a > 0) && (d >= 1) && (d <= 31) && (m >= 1) && (m <= 12) && (a <= at)){
        switch (m){
            case 1:
            printf("Valido\n");
        break;
        
            case 2:
            if (((a % 400) == 0) || ((a % 4) == 0) && ((a % 100)!= 0)){
                if ((d >= 1) && (d <= 29)){
                    printf("Valido\n");
                }
            }
            else{
                if ((d >= 1) && (d <= 28)){
                printf("Valido\n");
                }
                else{
                    printf("Invalido\n");
            }
            }
        break;

            case 3:
            printf("Valido\n");
        break;

             case 4:
            if (d <= 30){
                printf("Valido\n");
            }
            else{
                printf("Invalido\n");
            }
         break;

            case 5:
            printf("Valido\n");
        break;

            case 6:
             if (d <= 30){
                printf("Valido\n");
            }
            else{
                printf("Invalido\n");
            }
        break;

            case 7:
            printf("Valido\n");
        break;

            case 8:
            printf("Valido\n");
        break;

            case 9:
            if (d <= 30){
                printf("Valido\n");
            }
            else{
                printf("Invalido\n");
            }
        break;

            case 10:
            printf("Valido\n");
        break;

            case 11:
            if (d <= 30){
                printf("Valido\n");
            }
            else{
                printf("Invalido\n");
            }
        break;

            case 12:
            printf("Valido\n");
        break;
        }
    }
    else{
        printf("Invalido\n");
    }
   
system("pause");
return 0;

}

/39

#include <stdio.h>
#include <math.h>

int main(){
    float sa, ts, b1, b2, b3, b4, fs;
    printf("Digite o atual salario de um funcionario:\n");
    scanf("%f", &sa);
    printf("Tempo de servico na empresa, em anos:\n");
    scanf("%f", &ts);
    b1 = 100;
    b2 = 200;
    b3 = 300;
    b4 = 500;

    
    if (ts < 1){
        if (sa <= 500){
            fs = sa * 1.25;
            printf("O valor do reajuste salarial eh:\n %.2f \n", fs);
        }
        else if ((sa > 500) && (sa <= 1000)){
            fs = sa * 1.20;
            printf("O valor do reajuste salarial eh:\n %.2f \n", fs);
        }
        else if ((sa > 1000) && (sa <= 1500)){
            fs = sa * 1.15;
            printf("O valor do reajuste salarial eh:\n %.2f \n", fs);
        }
        else if ((sa > 1500) && (sa <= 2000)){
            fs = sa * 1.10;
            printf("O valor do reajuste salarial eh:\n %.2f \n", fs);
        }
        else if (sa > 2000){
            fs = sa * 1;
        }
    }

    if ((ts >= 1) && (ts <= 3)){
        if (sa <= 500){
            fs = (sa * 1.25) + b1;
            printf("O valor do reajuste salarial eh:\n %.2f \n", fs);
        }
        else if ((sa > 500) && (sa <= 1000)){
            fs = (sa * 1.20) + b1;
            printf("O valor do reajuste salarial eh:\n %.2f \n", fs);
        }
        else if ((sa > 1000) && (sa <= 1500)){
            fs = (sa * 1.15) + b1;
            printf("O valor do reajuste salarial eh:\n %.2f \n", fs);
        }
        else if ((sa > 1500) && (sa <= 2000)){
            fs = (sa * 1.10) + b1;
            printf("O valor do reajuste salarial eh:\n %.2f \n", fs);
        }
        else if (sa > 2000){
            fs = (sa * 1) + b1;
        }
    }

    if ((ts >= 4) && (ts <= 6)){
        if (sa <= 500){
            fs = sa * 1.25 + b2;
            printf("O valor do reajuste salarial eh:\n %.2f \n", fs);
        }
        else if ((sa > 500) && (sa <= 1000)){
            fs = sa * 1.20 + b2;
            printf("O valor do reajuste salarial eh:\n %.2f \n", fs);
        }
        else if ((sa > 1000) && (sa <= 1500)){
            fs = sa * 1.15 + b2;
            printf("O valor do reajuste salarial eh:\n %.2f \n", fs);
        }
        else if ((sa > 1500) && (sa <= 2000)){
            fs = sa * 1.10 + b2;
            printf("O valor do reajuste salarial eh:\n %.2f \n", fs);
        }
        else if (sa > 2000){
            fs = sa * 1 + b2;
        }
    }

    if ((ts >= 7) && (ts <= 10)){
        if (sa <= 500){
            fs = sa * 1.25 + b3;
            printf("O valor do reajuste salarial eh:\n %.2f \n", fs);
        }
        else if ((sa > 500) && (sa <= 1000)){
            fs = sa * 1.20 + b3;
            printf("O valor do reajuste salarial eh:\n %.2f \n", fs);
        }
        else if ((sa > 1000) && (sa <= 1500)){
            fs = sa * 1.15 + b3;
            printf("O valor do reajuste salarial eh:\n %.2f \n", fs);
        }
        else if ((sa > 1500) && (sa <= 2000)){
            fs = sa * 1.10 + b3;
            printf("O valor do reajuste salarial eh:\n %.2f \n", fs);
        }
        else if (sa > 2000){
            fs = sa * 1 + b3;
        }
    }

    if (ts > 10){
        if (sa <= 500){
            fs = sa * 1.25 + b4;
            printf("O valor do reajuste salarial eh:\n %.2f \n", fs);
        }
        else if ((sa > 500) && (sa <= 1000)){
            fs = sa * 1.20 + b4;
            printf("O valor do reajuste salarial eh:\n %.2f \n", fs);
        }
        else if ((sa > 1000) && (sa <= 1500)){
            fs = sa * 1.15 + b4;
            printf("O valor do reajuste salarial eh:\n %.2f \n", fs);
        }
        else if ((sa > 1500) && (sa <= 2000)){
            fs = sa * 1.10 + b4;
            printf("O valor do reajuste salarial eh:\n %.2f \n", fs);
        }
        else if (sa > 2000){
            fs = sa * 1 + b4;
        }
    }

    if ((sa > 2000) && (ts < 1)){
        printf("Salario nao sofrera reajuste\n");
    }
system("pause");
return 0;
    
}

/40

#include <stdio.h>
#include <math.h>

int main(){
    float cf, cd, i, cc;
    printf("Digite o custo de fabrica de um carro:\n");
    scanf("%f", &cf);

    if (cf <= 12000){
        cc = cf * 1.05;
        printf("O custo do carro para o consumidor eh:\n %.2f \n", cc);
    }
    if ((cf > 12000) && (cf <= 25000)){
        cc = (cf * 1.10) + (cf * 1.15);
        printf("O custo do carro para o consumidor eh:\n %.2f \n", cc);
    }
     if (cf > 25000){
        cc = (cf * 1.15) + (cf * 1.20);
        printf("O custo do carro para o consumidor eh:\n %.2f \n", cc);
    }

system("pause");
return 0;    

}
