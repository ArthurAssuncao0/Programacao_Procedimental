/1

#include <stdio.h>
#include <stdlib.h>


struct data{
    int dia;
    int mes;
    int ano;
};
typedef struct data d;

struct horario{
    int hora;
    int minuto;
    int segundo;
};
typedef struct horario h;

struct info{
    char compromisso[100];
};
typedef struct info i;

int main(){
   d x;
   h y;
   i z;
   printf("Digite a data:\n");
   scanf("%d %d %d", &x.dia, &x.mes, &x.ano);

   printf("Digite o horario:\n");
   scanf("%d %d %d", &y.hora, &y.minuto, &y.segundo);

   printf("Descreva um compromisso:\n");
   fflush(stdin);
   fgets(z.compromisso, 100, stdin);

   printf("A data eh: %d/%d/%d\n", x.dia, x.mes, x.ano);
   printf("O horario eh: %d:%d:%d\n", y.hora, y.minuto, y.segundo);
   printf("O compromisso eh: %s", z.compromisso);


system("pause");
return 0;
}

/2

#include <stdio.h>
#include <stdlib.h>

struct info{
    char nome[100];
    int idade;
    char endereco[100];
};
typedef struct info i;

int main(){
    i x;
    printf("Digite um nome:\n");
    fflush(stdin);
    fgets(x.nome, 100, stdin);
    printf("digite uma idade:\n");
    scanf("%d", &x.idade);
    printf("Digite um endereco:\n");
    fflush(stdin);
    fgets(x.endereco, 100, stdin);

    printf("A struct contem os seguintes dados:\nnome: %sidade: %d\nendereco: %s", &x.nome, x.idade, x.endereco);


system("pause");
return 0;
}

/3

#include <stdio.h>
#include <stdlib.h>

struct aluno{
    char nome[100];
    char matricula [100];
    char curso[100];
};
typedef struct aluno a;

int main(){
    a x[5];
    int i = 0;

    for(i = 0; i < 5; i++){
    printf("Digite o nome do aluno:\n");
    fflush(stdin);
    fgets(x[i].nome, 100, stdin);
    printf("digite a matricula do aluno:\n");
    fflush(stdin);
    fgets(x[i].matricula, 100, stdin);
    printf("Digite o curso do aluno:\n");
    fflush(stdin);
    fgets(x[i].curso, 100, stdin);
    }

    for(i = 0; i < 5; i++){
        printf("Dados:\nnome: %smatricula: %scurso: %s", x[i].nome, x[i].matricula, x[i].curso);
    }


system("pause");
return 0;
}

/4

#include <stdio.h>
#include <string.h>

struct aluno{
    char nome[100];
    char matricula[100];
    float nota_p1;
    float nota_p2;
    float nota_p3;
};
typedef struct aluno a;

int main(){
    a x[5];
    int i;
    char n[100], n1[100], n2[100];
    float ma = 0, med[5], mag = 0, meg = 0;

    for(i = 0; i < 5; i++){
    printf("Digite o nome do aluno:\n");
    fflush(stdin);
    fgets(x[i].nome, 100, stdin);
    printf("digite a matricula do aluno:\n");
    fflush(stdin);
    fgets(x[i].matricula, 100, stdin);
    printf("Digite a nota da primeira prova desse aluno:\n");
    scanf("%f", &x[i].nota_p1);
    printf("Digite a nota da segunda prova desse aluno:\n");
    scanf("%f", &x[i].nota_p2);
    printf("Digite a nota da terceira prova desse aluno:\n");
    scanf("%f", &x[i].nota_p3);
    printf("\n");
    }

    printf("ALUNOS DO CURSO DE CIENCIA DA COMPUTACAO\n");
    printf("Dados:\n");

    for(i = 0; i < 5; i++){
        printf("Nome: %sMatricula: %sNota da primeira prova: %.2f\nNota da segunda prova: %.2f\nNota da terceira prova: %.2f\n\n", x[i].nome, x[i].matricula, x[i].nota_p1, x[i].nota_p2, x[i].nota_p3);
    }

    ma = x[0].nota_p1;

    for(i = 1; i < 5; i++){
        if(x[i].nota_p1 > ma){
            ma = x[i].nota_p1;
            strcpy(n, x[i].nome);
        }
    }
   
    printf("A maior nota da primeira prova foi %.2f do aluno %s", ma, n);

    printf("\n");

    for(i = 0; i < 5; i++){
        med[i] = 0;
        med[i] = (x[i].nota_p1 + x[i].nota_p2 + x[i].nota_p3)/3;
        printf("A media geral eh %.2f do aluno %s", med[i], x[i].nome);
        if(med[i] >= 6){
            printf("Aprovado\n");
        }
        else{
            printf("Reprovado\n");
        }
    }

    printf("\n");

    mag = med[0];

    for(i = 1; i < 5; i++){
        if(med[i] > mag){
            mag = med[i];
            strcpy(n1, x[i].nome);
        }
    }
    printf("a maior media geral eh %.2f do aluno %s", mag, n1);
    
    printf("\n");

    meg = med[0];

    for(i = 0; i < 5; i++){
        if(med[i] < meg){
            meg = med[i];
            strcpy(n2, x[i].nome);
        }
    }
    printf("a menor media geral eh %.2f do aluno %s", meg, n2);


system("pause");
return 0;
}

/5

#include <stdio.h>
#include <math.h>

struct vetor{
    float a;
    float b;
    float c;
}; 
typedef struct vetor v;

int main(){
    v x[2];
    int i;
    float u = 0, v = 0, soma = 0;
   
    for (i= 0; i < 2; i++){
        printf("Digite a posicao X do vetor %d: ", i);
        scanf("%f", &x[i].a);

        printf("Digite a posicao Y do vetor %d: ", i);
        scanf("%f", &x[i].b);

        printf("Digite a posicao Z do vetor %d: ", i);
        scanf("%f", &x[i].c);
    }

    u = sqrt((x[0].a * x[0].a) + (x[0].b * x[0].b) + (x[0].c * x[0].c));
    v = sqrt((x[1].a * x[1].a) + (x[1].b * x[1].b) + (x[1].c * x[1].c));

    soma = u + v;

    printf("O resultado da soma eh: %.2f\n", soma);


system("pause");
return 0;
}

/6

#include <stdio.h>
#include <stdlib.h>

struct funcionario{
    char nome[100];
    int idade;
    char sexo[100];
    char CPF[100];
    int dia;
    int mes;
    int ano;
    int setor;
    char cargo[30];
    int salario;

};
typedef struct funcionario f;

int main(){
    f x;

    printf("Digite o nome do funcionario:\n");
    fflush(stdin);
    fgets(x.nome, 100, stdin);
    printf("Digite a idade do funcionario:\n");
    scanf("%d", &x.idade);
    printf("Digite o  sexo do funcionario:\n");
    fflush(stdin);
    fgets(x.sexo, 100, stdin);
    printf("Digite o CPF desse funcionario:\n");
    fflush(stdin);
    fgets(x.CPF, 100, stdin);
    printf("Digite o ano em que o funcionario nasceu:\n");
    scanf("%d %d %d", &x.dia, &x.mes, &x.ano);
    printf("Digite o setor (0-99) em que esse funcionario trabalho:\n");
    scanf("%d", &x.setor);
    printf("Digite o cargo que esse funcionario ocupa:\n");
    fflush(stdin);
    fgets(x.cargo, 100, stdin);
    printf("Digite o salario dessse funcionario:\n");
    scanf("%d", &x.salario);

    printf("\n");

    printf("Dados:\n");
    printf("Nome: %sIdade: %d\nSexo: %sCPF: %sData de Nascimento: %d/%d/%d\nSetor: %d\nCargo: %sSalario: %d reais\n", x.nome, x.idade, x.sexo, x.CPF, x.dia, x.mes, x.ano, x.setor, x.cargo, x.salario);

system("pause");
return 0;
}

/7

#include <stdio.h>
#include <stdlib.h>

struct pessoa{
    char nome[100];
    char endereco[100];
    char telefone[100];
};
typedef struct pessoa p;

int main(){
    p x[5];
    int i;
    char aM[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'}, am[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    printf("%c", aM[0]);
    printf("%c", am[0]);

    for (i = 0; i < 5; i++){
        printf("Digite o nome de uma pessoa:\n");
        fflush(stdin);
        fgets(x[i].nome, 100, stdin);
        printf("Digite o endereço da pessoa:\n");
        fflush(stdin);
        fgets(x[i].endereco, 100, stdin);
        printf("Digite o telefone:\n");
        fflush(stdin);
        fgets(x[i].telefone, 100, stdin);
    }

    printf("\n");

    for (int i = 0; i < 26; i++){
        if (x[0].nome[0] == aM[i] || x[0].nome[0] == am[i]){
            printf("Nome: %sEndereco: %sTelefone: %s\n", x[0].nome, x[0].endereco, x[0].telefone);
        }
        if (x[1].nome[0] == aM[i] || x[1].nome[0] == am[i]){
            printf("Nome: %sEndereco: %sTelefone: %s\n", x[1].nome, x[1].endereco, x[1].telefone);
        }
        if (x[2].nome[0] == aM[i] || x[2].nome[0] == am[i]){
            printf("Nome: %sEndereco: %sTelefone: %s\n", x[2].nome, x[2].endereco, x[2].telefone);
        }
        if (x[3].nome[0] == aM[i] || x[3].nome[0] == am[i]){
            printf("Nome: %sEndereco: %sTelefone: %s\n", x[3].nome, x[3].endereco, x[3].telefone);
        }
        if (x[4].nome[0] == aM[i] || x[4].nome[0] == am[i]){
            printf("Nome: %sEndereco: %sTelefone: %s\n", x[4].nome, x[4].endereco, x[4].telefone);
        }    
    }


system("pause");
return 0;
}

/8

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct naipe{
    char tipo[4][10]
}; 
typedef struct naipe naipe;

struct baralho{
    naipe naipe_carta;
    int numero;
};
typedef struct baralho baralho;

int main(){
    int i = 0, a = 0, a_naipe = 0;

    baralho x;

    srand(time(NULL));

    strcpy(x.naipe_carta.tipo[0], "Ouro");
    strcpy(x.naipe_carta.tipo[1], "Paus");
    strcpy(x.naipe_carta.tipo[2], "Copas");
    strcpy(x.naipe_carta.tipo[3], "Espadas");

    printf("O jogador 1 possui as cartas:\n");
    
    for (i = 0; i < 3; i++){
        a = (rand() % 9) + 1;
        a_naipe = (rand() % 3) + 1;
        printf("%d de %s\n", a, x.naipe_carta.tipo[a_naipe]);
    }
    printf("O jogador 2 possui as cartas:\n");
    
    for (int i = 0; i < 3; i++){
        a = (rand() % 9) + 1;
        a_naipe = (rand() % 3) + 1;
        printf("%d de %s\n", a, x.naipe_carta.tipo[a_naipe]);
    }


system("pause");
return 0;
}

/9

#include <stdio.h>
#include <string.h>

struct ficha_carro{
    char marca[15];
    int ano;
    int preco;
};
typedef struct ficha_carro fc;

int main(){
    fc x[5];
    char app[5];
    int vmax = 0, c, ct = 0, y = 0, i = 0;

    printf("Digite o preco que voce esta disposto a pagar por um carro:\n");
    scanf("%d", &vmax);

    for (c = 0; c < 5; c++){
        printf("Carro %d\n", c + 1);
        fflush(stdin);
        printf("Digite a marca do carro:\n");
        fgets(x[c].marca, 15, stdin);

        printf("Digite o ano que foi fabricado:\n");
        scanf("%d", &x[c].ano);

        printf("Digite o preco do carro: ");
        scanf("%d", &x[c].preco);

        if(x[c].preco <= vmax) {
            app[ct] = c;
            ct++;
        }
        printf("\n");
    } 

    y = strlen(app);
    
    if (y > 0){
        for (c = 0; c < y; c++){
            i = app[c];
            printf("Marca: %sAno: %d\nPreco: %d\n", x[i].marca, x[i].ano, x[i].preco);
            printf("\n");
        }
    } 


system("pause");
return 0;
}

/10

#include <stdio.h>
#include <string.h>

struct livro{
    char titulo[30];
    char autor[15];
    int ano;
};
typedef struct livro l;

int main(){
    l x[5];
    int i;
    char v[30];

    for(i = 0; i < 5; i++){
        printf("Digite o titulo de um livro:\n");
        fflush(stdin);
        fgets(x[i].titulo, 30, stdin);
        printf("digite o nome do autor desse livro:\n");
        fflush(stdin);
        fgets(x[i].autor, 15, stdin);
        printf("Digite o ano desse livro:\n");
        scanf("%d", &x[i].ano);
        printf("\n");
    }

    printf("Dados:\n");
    printf("\n");

    for(i = 0; i < 5; i++){
        printf("Titutlo: %sAutor: %sAno: %d\n", x[i].titulo, x[i].autor, x[i].ano);
        printf("\n");
    }

    printf("PESQUISA:\n");
    printf("\n");

    while(strcmp(v, x[i].titulo) != 0){

    printf("Digite o nome de um titulo que voce deseja encontrar:\n");
    fflush(stdin);
    fgets(v, 30, stdin);

        for(i = 0; i < 5; i++){
            if(strcmp(v, x[i].titulo) == 0){
                printf("Seu livro foi encontrado! O ano do seu livro eh %d e o autor eh %s", x[i].ano, x[i].autor);
            break;
            }
            else{
                printf("O livro nao foi encontrado!\n");
            }
        }   
    } 

system("pause");
return 0;
}

/11

#include <stdio.h>

struct compromisso{
    char compromisso[60];
};
typedef struct compromisso c;

struct data{
    int dia, mes, ano;
};
typedef struct data d;

int main (){
    c x[5];
    d y[5];
    int i, M, A;

    for(i = 0; i < 5; i++){
    printf("Digite um compromisso:\n");
    fflush(stdin);
    fgets(x[i].compromisso, 60, stdin);
    printf("Digite a data desse compromisso (dia/mes/ano):\n");
    scanf("%d %d %d", &y[i].dia, &y[i].mes, &y[i].ano);
    printf("\n");
    }

    printf("AGENDA\n");
    printf("\n");

    for(i = 0; i < 5; i++){
        printf("Compromisso: %sData: %d/%d/%d\n", x[i].compromisso, y[i].dia, y[i].mes, y[i].ano);
        printf("\n");
    }

    printf("Digite o mes da agenda:\n");
    scanf("%d", &M);

    printf("Digite o ano da agenda:\n");
    scanf("%d", &A);

    printf("\n");

	do{
    for (i = 0; i < 5; i++){
        if (y[i].mes == M && y[i].ano == A){
            printf("Compromisso: %s", x[i].compromisso);
            printf("\n");
        }
		
		if(M == 0){
			printf("FIM!");    
		}
	}	
	while(M != 0);


system("pause");
return 0;
}

/12

#include <stdio.h>

struct eletro{
    char nome[15];
    float potencia, tempo;
};
typedef struct eletro e;

int main (){
    e x[5];
    int i;
    float t = 0, t1, t2 = 0, consumo[5], t3;

    for(i = 0; i < 5; i++){
        printf("Digite o nome do eletrodomestico:\n");
        fflush(stdin);
        fgets(x[i].nome, 15, stdin);
        printf("Digite a potencia do eletrodomestico:\n");
        scanf("%f", &x[i].potencia);
        printf("Digite o tempo ativo por dia (em horas):\n");
        scanf("%f", &x[i].tempo);
        printf("\n");
    }

    printf("Dados:\n");
    printf("\n");

    for(i = 0; i < 5; i++){
        printf("Nome: %sPotencia: %.2f\nTempo ativo: %.2f\n", x[i].nome, x[i].potencia, x[i].tempo);
        printf("\n");
    }

    printf("\n");

    printf("Digite o tempo que esses aparelhos ficam ligados (em dias):\n");
    scanf("%f", &t);

    printf("\n");

    t1 = 0;

    for(i = 0; i < 5; i++){
        t1 += x[i].potencia * x[i].tempo;
    }

    t2 = t1 * t;

    printf("O consumo total dessa casa eh: %.2f\n", t2);

    printf("\n");

    for(i = 0; i < 5; i++){
        consumo[i] = (x[i].potencia * x[i].tempo)/1000;
        t3 = consumo[i] / t2;
        printf("O consumo relativo eh: %f do eletrodomestico %s", t3, x[i].nome);
        printf("\n");
    }


system("pause");
return 0;
}

/13

#include <stdio.h>

struct mercado{
    int code, quant;
    char nome[15];
    float preco;
};
typedef struct mercado m;

int main (){
    m x[5];
    int i, c2 = 0, q2 = 0, q3 = 0;
    float p2;

    for(i = 0; i < 5; i++){
        printf("Digite o codigo do produto:\n");
        scanf("%d", &x[i].code);
        printf("Digite o nome do produto:\n");
        fflush(stdin);
        fgets(x[i].nome, 15, stdin);
        printf("Digite o preco do produto:\n");
        scanf("%f", &x[i].preco);
        printf("Digite a quantidade do produto:\n");
        scanf("%d", &x[i].quant);
        printf("\n");
    }

    printf("Estoque:\n");
    printf("\n");

    for(i = 0; i < 5; i++){
        printf("Code: %d\nNome: %sPreco: %.2f\nQuantidade: %d\n", x[i].code, x[i].nome, x[i].preco, x[i].quant);
        printf("\n");
    }

    do{
        printf("Faca um pedido\n")
        printf("Digite o codigo do produto:\n");
        scanf("%d", &c2);
        printf("Digite a quantidade que deseja pedir desse produto:\n");
        scanf("%d", &q2);
        
        for(i = 0; i < 5; i++){
            if(c2 == x[i].code && q2 <= x[i].quant){
                q3 = x[i].quant - q2;
                p2 = x[i].preco * q2;
                printf("Seu pedido foi realizado e ficou no valor de %.2f! Restam no estoque %d do produto %d\n", p2, q3, x[i].code);
                printf("\n");
            }
            else if(c2 == x[i].code && q2 > x[i].quant){
                printf("Esse produto nao tem estoque suficiente para o seu pedido\n");
            }
            else if(c2 != x[i].code && q2 <= x[i].quant){
                printf("Esse produto nao existe em nosso estoque\n");
            }
        }
    }
    while(c2 != 0);


system("pause");
return 0;
}

/14

#include <stdio.h>

struct aeroporto{
    int codo, codd; 
};
typedef struct aeroporto ar;

int main (){
    ar x[5];
    int i, ori = 0, des = 0;

    for(i = 0; i < 5; i++){
        x[i].codo = 0;
        x[i].codd = 0;
    }

    for(i = 0; i < 5; i++){
        do{
            printf("Digite o codigo de origem do voo %d:\n", i + 1);
            scanf("%d", &ori);
            printf("Digite o codigo de destino do voo %d:\n", i + 1);
            scanf("%d", &des);
        } 
        while (ori > 4 || ori < 1 || des > 4 || des < 1);

        switch (ori){
            case 1:
                x[0].codo++;
            break;
            
            case 2:
                x[1].codo++;
            break;
            
            case 3:
                x[2].codo++;
            break;
            
            case 4:
                x[3].codo++;
            break;
            
            case 5:
                x[4].codo++;
            break;
        }

        switch (des){
            case 1:
                x[0].codd++;
            break;
            
            case 2:
                x[1].codd++;
            break;
            
            case 3:
                x[2].codd++;
            break;
            
            case 4:
                x[3].codd++;
            break;
            
            case 5:
                x[4].codd++;
            break;
        }
        
    }

    for (i = 0; i < 5; i++){
        printf("Aeroporto %d: \n", i + 1);
        printf("Voos de destino: %d\n", x[i].codd);
        printf("Voos de origem: %d\n", x[i].codo);
        printf("\n");
    }


system("pause");
return 0;
}

/15
	
#include <stdio.h>
#include <string.h>

struct ingrediente{
    char ni[25];
    int quant;
};
typedef struct ingrediente ing;

struct receita{
    char nr[25];
    int qi;
    ing in[10];
};
typedef struct receita r;

int main(){
    r x[5];
    char b[25];
    int i, res = 0, c;
    

    for (int i = 0; i < 5; i++){
        fflush(stdin);
        printf("\n");
        printf("Digite o nome da receita:\n");
        fflush(stdin);
        fgets(x[i].nr, 25, stdin);
        printf("Digite a quantidade de ingredientes:\n");
        scanf("%d", &x[i].qi);

        for(c = 0; c < x[i].qi; c++){
            fflush(stdin);
            printf("Digite o nome do %d ingrediente:\n", c + 1);
            fflush(stdin);
            fgets(x[i].in[c].ni, 25, stdin);
            fflush(stdin);
            printf("Digite a quantidade do ingrediente:\n");
            scanf("%d", &x[i].in[c].quant);
        }
    }
    
    fflush(stdin);
    printf("\n");
    printf("Digite a receita que voce quer:\n");
    fflush(stdin);
    fgets(b, 25, stdin);
    printf("\n");


    for (i = 0; i < 5; i++){
        if (strcmp(b, x[i].nr) == 0){
            res = 1;
            for (c = 0; c < x[i].qi; c++){
                printf("%d\n", x[i].in[c].quant);
                printf("%s", x[i].in[c].ni);
            }
        } 
        else if (res == 0){   
            res = 0;
        }  
    }
    if (res == 0){
        printf("Não encontrado!\n");
    }


system("pause");
return 0;
}	

/16

#include <stdio.h>
#include <string.h>

struct filme{
    char nf[20];
    int a, dur;
};
typedef struct filme f;

struct diretor{
    char nome[20];
    int qf;
    f y[100];

};
typedef struct diretor d;

int main(){
    d x[5];
    int i, c; 
    char n1[20];

    for(i = 0; i < 5; i++){
        printf("Digite o nome do diretor:\n");
        fflush(stdin);
        fgets(x[i].nome, 20, stdin);
        printf("Digite a quantidade de filmes que esse diretor fez:\n");
        fflush(stdin);
        scanf("%d", &x[i].qf);

        for(c = 0; c < x[i].qf; c++){
            printf("Digite o nome do %d filme desse diretor:\n", c + 1);
            fflush(stdin);
            fgets(x[i].y[c].nf, 20, stdin);
            printf("Digite o ano do %d filme:\n", c + 1);
            scanf("%d", &x[i].y[c].a);
            printf("Digite a duracao do %d filme (em minutos):\n", c + 1);
            scanf("%d", &x[i].y[c].dur);
            printf("\n");
        }
    }

    printf("Dados:\n");
    printf("\n");

    for(i = 0; i < 5; i++){
        printf("Diretor: %sQuantidade de filmes:%d\n", x[i].nome, x[i].qf);
        for(c = 0; c < x[i].qf; c++){
            printf("Nome do filme: %sAno: %d\nDuracao:%d\n", x[i].y[c].nf, x[i].y[c].a, x[i].y[c].dur);
            printf("\n");
        }
    }

    do{
        printf("Digite o nome do diretor que voce deseja ver o catalogo de filmes:\n");
        fgets(n1, 20, stdin);

        for(i = 0; i < 5; i++){
            if(strcmp(x[i].nome, n1) == 0){
                for(c = 0; c < x[i].qf; c++){
                    printf("Filmes do diretor %s%s", x[i].nome, x[i].y[c].nf);
                }
            }
        }
    }
    while(strcmp(x[i].nome, n1) != 0);


system("pause");
return 0;
}

/17

#include <stdio.h>
#include <string.h>

struct endereco{
    char rua[30];
    char bairro[30];
    char cidade[30];
    char estado[30];
    char CEP[30];
};
typedef struct endereco end;

struct cadastro{
    char nome[30], CPF[30];
    int salario;
    float identidade, telefone;
    char civil;
    int idade;
    char sexo;
};
typedef struct cadastro cad;

int main(){
    cad x[5];
    end y[5];

    int i, ma = 0, p = 0, p2 = 0, p3 = 0, man[5] = {-1, -1, -1, -1, -1}, ss[5] = {-1, -1, -1, -1, -1};
    float id;

    for (i = 0; i < 5; i++){
        printf("Digite seu nome:\n");
        fflush(stdin);
        fgets(x[i].nome, 30, stdin);
        printf("Digite seu salario:\n");
        scanf("%d", &x[i].salario);
        printf("Digite sua identidade:\n");
        scanf("%f", &x[i].identidade);
        printf("Digite seu CPF:\n");
        fflush(stdin);
        fgets(x[i].CPF, 30, stdin);
        printf("Digite seu estado civil (s)Solteiro (c)Casado:\n");
        fflush(stdin);
        scanf("%c", &x[i].civil);
        printf("Digite seu telefone:\n");
        scanf("%f", &x[i].telefone);
        printf("Digite sua idade:\n");
        scanf("%d", &x[i].idade);
        printf("Digite seu sexo(M/F):\n");
        fflush(stdin);
        scanf("%c", &x[i].sexo);
        printf("Digite sua rua: ");
        fgets(y[i].rua, 30, stdin);
        printf("Digite seu bairro:\n");
        fflush(stdin);
        fgets(y[i].bairro, 30, stdin);
        printf("Digite seu cidade:\n");
        fflush(stdin);
        fgets(y[i].cidade, 30, stdin);
        printf("Digite seu estado:\n");
        fflush(stdin);
        fgets(y[i].estado, 30, stdin);
        printf("Digite seu CEP:\n");
        fflush(stdin);
        fgets(y[i].CEP, 30, stdin);
    }

    for (i = 0; i < 5; i++){
        if (x[i].idade > ma){
            ma = x[i].idade;
            p = i;
        }
        if (x[i].sexo == 'M'){
            man[p2] = i;
            p2++;
        } 
        if (x[i].salario > 1000){
            ss[p3] = i;
            p3++;
        }
    }
    printf("A pessoa mais velha é a %s", x[p].nome);

    for (int i = 0; i < 5; i++){
        if(man[i] != -1){
            printf("Temos o homem: %s", x[man[i]].nome);
        }
        if (ss[i] != -1){
            printf("Temos a pessoa com salario acima de 1000: %s\n", x[ss[i]].nome);
        }
    }

    printf("Digite o valor da identidade que deseja buscar:\n");
    scanf("%f", &id);

    for (int i = 0; i < 5; i++){
        if (x[i].identidade == id){
            printf("A pessoa buscada é: %s", x[i].nome);
        }
    }
    

system("pause");
return 0;
}

/18

#include <stdio.h>

struct data{
    int dia ,mes, ano;
};
typedef struct data d;

int main(){
    d x[2];
    int r = 0;

    printf("Digite o ano da primeira data:\n");
    scanf("%d", &x[0].ano);
    printf("Digite o ano da segunda data:\n");
    scanf("%d", &x[1].ano);
    printf("Digite o mes da primeira data:\n");
    scanf("%d", &x[0].mes);
    printf("Digite o mes da segunda data:\n");
    scanf("%d", &x[1].mes);
    printf("Digite o dia da primeira data:\n");
    scanf("%d", &x[0].dia);
    printf("Digite o dia da segunda data:\n");
    scanf("%d", &x[1].dia);
    r = x[0].dia - x[1].dia + ((x[0].mes * 30) - (x[1].mes * 30)) + ((x[0].ano * 365) - (x[1].ano * 365));

    if (r < 0){
        r *= (-1);
    }
    printf("O numero de dias passados foi: %d\n", r);


system("pause");
return 0;
}

