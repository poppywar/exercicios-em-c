#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

/*Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume (v = 4/3.P .R3).*/

float volume (float r)
{
	float v;
	v=0;
	v=(4/3)*3.14159*(r*r*r);
	return (v);
}

/*Escreva um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra. Se a letra for A o procedimento calcula a média aritmética das notas do aluno, se for P, a sua média
ponderada (pesos: 5, 3 e 2) e se for H, a sua média harmônica. A média calculada também deve retornar por parâmetro. */

void media (float n1, float n2, float n3, float *m, char c)
{ 
   switch (c) 
   { 
      case 'A': 
         *m = (n1 + n2 + n3) / 3; 
         break; 
      case 'P': 
         *m = (5*n1+3*n2+2*n3)/10; 
         break; 
      case 'H': 
         *m = 3/(1 / n1 + 1 / n2 + 1 / n3); 
         break; 
      
   } 
} 
 /*Faça uma função que recebe por parâmetro um valor inteiro e positivo e retorna o valor lógico Verdadeiro caso o valor seja primo e Falso em caso contrário. */

 bool primo (int a)
{
	int b,d;
	d=0;
	b=0;
	bool c;
	for (b=1; b<=a; b++)
		{
			if (a%b==0)
				{
					d++;
				}
		}
	c=true;	
	if (d==2)
		{
			c=true;	
		}
	else 
		{
			c=false;	
		}
	return (c);
}


/*4. Faça um procedimento que recebe por parâmetro os valores necessário para o cálculo da fórmula de báskara e retorna, também por parâmetro, as suas raízes, caso seja possível calcular*/

void bhaskara (float a, float b, float c, float *r1, float *r2, float *s) 
{
	float delta=0;
	*r1=0;
	*r2=0;
	delta = (b*b)- 4*a*c;
	if (delta<0)
		{
			*s=0;
		}
	else
		{
			if (delta>0)
			{
				*r1=((-b)-(sqrt(delta)))/(2*a);
				*r2=((-b)+(sqrt(delta)))/(2*a);
				*s=2;
			}
			else 
				{
					if (delta==0)
					{
						*r1=(-b)/(2*a);
						*s=1;
					}
					
				}
		}
}


/* Faça uma função que recebe por parâmetro o tempo de duração de uma fábrica expressa em segundos e retorna também por parâmetro esse tempo em horas, minutos e segundos. */

int seg (int s, float *m, float *se) 
{
	int r=0, h=0, rr=0;

	if (s<60)
		{
			h=0; 
			*m=0;
			*se=s;
		}
	else 
		{
			if (s<3600)
				{
					h= 0; 
			    	*m= s / 60;
					*se= s% 60;
				}
			else 
				{
					h= s/3600; 
					r= s - h*3600; 
					if (r==0)
						{
							*m=  0; 
							*se= 0; 
						}
					else
						{
						*m=  r / 60; 
						rr= r - (r/60)*60;
						if (rr==0)
							{
								*se= 0;
							}
						else
							{
						*se= rr;
							}
						}
				}
		}	
	return (h);

}

/* 6. Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna essa idade expressa em dias. */

int idade (int a, int m, int d)
{
	int t=0;
	t=(a*365)+(m*30)+d;
	return (t);
}

/*Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito perfeito quando ele é igual a soma dos seus divisores excetuando ele próprio. (Ex: 6 é perfeito, 
6 = 1 + 2 + 3, que são seus divisores). A função deve retornar um valor booleano */

bool perfeito (int a)
{
	int i=0;
	int z;
	z=0;
	bool s;
	s=false;
	i=1; 
	while (i<a)
	{
		if (a%i==0)
			{
				z=z+i;
			}
		i++;	
	}
	
	if (z==a)
		{
			s=true;
		}	
	return (s);
}

/*  Faça um procedimento que recebe a idade de um nadador por parâmetro e retorna,também por parâmetro, a categoria desse nadador de acordo
 com a tabela abaixo:
Idade Categoria
5 a 7 anos Infantil A
8 a 10 anos Infantil B
11-13 anos Juvenil A
14-17 anos Juvenil B
Maiores de 18 anos (inclusive) Adulto*/

void nado (float i, int *a)
{
		if (i<=7)
			{
		 		*a = 1;
	
			} 
		else
			{
				if ((i>=8)||(i<=10))
					{
						*a = 2;
					}
				else
					{
						if ((i>=11)||(i<=13))
							{
								*a = 3;
							}
						else
							{
								if ((i>=14)||(i<=17))
									{
										*a = 4;
									}
								else
									{
											*a = 5;
									}

							}

					}

			}		
	}
	

/*Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo. A função deve retornar um valor booleano.*/

bool poun (int a)
	{
		bool x;
		x=false;
		if (a>0)
			{
				x=true;
			}
		return (x);
	}


/*Faça uma função que recebe um valor inteiro e verifica se o valor é par ou ímpar. Aunção deve retornar um valor booleano.*/	
	bool parimpar (int ai)
	{
		bool x;
		x=false;
		float b=0;

		b=ai%2; 
		if (b==0)
			{
				x=true;
			}
		return (x);
	}

/*11. Faça uma função que recebe a média final de um aluno por parãmetro e retorna oseu conceito, conforme a tabela abaixo:

Nota Conceito
de 0,0 a 4,9 D
de 5,0 a 6,9 C
de 7,0 a 8,9 B
de 9,0 a 10,0 A */	


int conceito (float m)
{
	
	int a;
	if (m>=9)
		{
			a=1;
		}
		else
			{
				if (m>=7)
				{
					a=2;
				}
				else 
					{
						if (m>=5)
						{
							a=3;
						}
						else
							{
								a=4;
							}
					}
			}
	return (a);		

}

/*Faça uma função que recebe, por parâmetro, a altura (alt) e o sexo de uma pessoa e retorna o seu peso ideal. Para homens, calcular o peso ideal usando a fórmula 
peso ideal = 72.7 x alt - 58 e, para mulheres, peso ideal = 62.1 x alt - 44.7.*/


float pesoideal (float a, char b)
{
	 float p=0;
	 if ((tolower(b) == 'm')||(tolower(b) == 'M'))
	 	{
	 		p = 72.7 * a - 58;
	 	}
	 else 
	 	{
	 		p = 62.1 * a - 44.7;
	 	}
	 return (p);	
}

/*13. Faça um procedimento que recebe 3 valores inteiros por parâmetro e retorna-os ordenados em ordem crescente.*/

void cres (int a, int b, int c, int *q, int *w, int *e)
{
	if ((a<b)&&(b<c)) 
		{
			*q=a;
			*w=b;
			*e=c;
		}
	else 
		{
			if ((a<c)&&(c<b)) 
				{
					*q=a;
					*w=c;
					*e=b;
				}
			else
				{
					if ((b<a)&&(a<c))
						{
							*q=b;
							*w=a;
							*e=c;
						} 
					else 
						{
							if ((b<c)&&(c<a))
								{
									*q=b;
									*w=c;
									*e=a;
								}
							else
								{
									if ((c<b)&&(b<a)) 
										{
											*q=c;
											*w=b;
											*e=a;
										}
									else 
										{
											if ((c<a)&&(a<b))
												{
													*q=c;
													*w=a;
													*e=b;
												} 
										} 
								}	 
						}
				}				
		}	
}

/*Faça um procedimento que recebe, por parâmetro, a hora de inicio e a hora detérmino de um jogo, ambas subdivididas em 2 valores distintos: horas e minutos. Oprocedimento deve retornar,
também por parâmetro, a duração do jogo em horas eminutos, considerando que o tempo máximo de duração de um jogo é de 24 horas e que o jogo pode começar em um dia e terminar no outro.*/

void jogo (int h1, int m1, int h2, int m2, int *ht, int *mt)
{
	if (h1<h2) 
		{
			if (m1<m2)
			{
				*ht=h2-h1;
				*mt=m2-m1;

			}
				else
					{
						if (m1>m2) 
							{
								*ht= h2-h1-1;
								*mt= (60-m1)+m2;

							}
							else
								{
									if (m1==m2) 
										{
											*ht=h2-h1;
											*mt=0;

							        	}
						    	}
					
				    }
		}
		
	else
		{
			if (h1>h2) 
				{ 
					if (m1<m2)
						{
							*ht=(24-h1)+h2;
							*mt=m2-m1;

						}
					else
						{
							if (m1>m2) 
								{
									*ht= (24-h1)+h2-1;
									*mt= (60-m1)+m2;
								}
							else
								{
									if (m1==m2) 
										{
											*ht=(24-h1)+h2;
											*mt=0;

							        	}
						    	}
					
				   		 }
				}
			else
			{	
				if (h1==h2)
				{
					if (m1<m2) 
						{
							*ht=0;
							*mt=m2-m1;

						}
					else
						{
							if (m1>m2) 
								{
									*ht= 23;
									*mt= 60-h2;
								}
							else
								{
									if (m1==m2) 
										{
											*ht=24;
											*mt=0;

							        	}
						    	}
					
				   		 }
				}
			}	
		}

}

/*Escreva um procedimento que recebes 3 valores reais X, Y e Z e que verifique se esses valores podem ser os comprimentos dos lados de um triângulo e, neste caso,retornar qual o tipo de 
triângulo formado. Para que X, Y e Z formem um triângulo é necessário que a seguinte propriedade seja satisfeita: o comprimento de cada lado de um triângulo é menor do que a soma do
 comprimento dos outros dois lados. O procedimento deve identificar o tipo de triângulo formado observando as seguintes definições:

•Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
•Triângulo Isósceles: os comprimentos de 2 lados são iguais.
•Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.*/


void triangulo (float x, float y, float z, int *w )

{
	*w=0;
	if ((x<(y+z))&&(y<(x+z))&&(z<(y+x)))
	{
		*w=1;
	}
	if ((x==y)&&(y==z))
	{
		*w=1;
	}
	else
	{
		if ((x==y)||(y==z))
		{
			*w=2;
		}
		else 
		{
			*w=3;
		}
	} 
}

/*16. A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados sobre o salário e número de filhos. Faça um procedimento que leia esses dados para um número não
determinado de pessoas e retorne a média de salário da população, a média do número de filhos, o maior salário e o percentual de pessoas com salário até R$350,00.*/


void pesquisa (float *ms, float *mf, float *msal, float *pp)
{
	char pu='S';
	
	float sal=0, hijo=0, xmp=0, xmf=0, popu=0, maior=0, popo=0;
	*mf=0;
	*ms=0;
	*msal=0;
	*pp=0;

	while  ((tolower(pu) == 's')||(tolower(pu) == 'S'))
		{
			printf("Digite o salario\n");
			scanf ("%f", &sal);
			printf("Digite o numero de filhos \n");
			scanf ("%f", &hijo);
			xmp=xmp+sal; 
			xmf=xmf+hijo; 
			popu++;
			if (sal>maior)
			{
				maior =sal;
			}
			if (sal<=350)
			{
				popo++;
			}
			printf("Deseja ler mais um? \n");
			scanf ("%s", &pu);
		}	
	
	*mf= xmf/popu;
	*ms=xmp/popu;
	*msal=maior;
	*pp=(100*popo)/popu;
}

/*17. Faça uma função que leia um número não determinado de valores positivos e retorna a média aritmética dos mesmos.*/
float mediazona () 
{
	char pu='S';
	float umamedia=0, contadorzinho=0, num=0;
	

	while  ((tolower(pu) == 's')||(tolower(pu) == 'S'))
		{
			printf("Digite um numero positivo\n");
			scanf ("%f", &num);
			while (num<=0)
				{
					printf("ERRO. Digite um numero positivo\n");
					scanf ("%f", &num);
				}
			umamedia= num+umamedia;	
			contadorzinho++;
			printf("Deseja ler mais um? (S/N) \n");
			scanf ("%s", &pu);
		}
	umamedia=umamedia/contadorzinho;
	return (umamedia);	
}

/*18. Faça uma função que receba um valor inteiro e positivo e calcula o seu fatorial.*/

int intpos(int anc)
{
	int demi=anc;
	int f=1;
	for (f= 1; demi>=2; demi=demi-1)
	{
		f=f*demi;	

	}
	return (f);
}

/*19. Faça um procedimento que lê 50 valores inteiros e retorna o maior e o menor deles.*/

void maioremenor (int *nmaior, int *nmenor)
{
			int b;
			int maior, menor;
			printf("Digite o 1 º valor inteiro\n");
			scanf ("%d", &b);	
			maior=b; 
			menor=b;
			int i;
			i=2;
			while (i<=50)
				{
					printf("Digite o %d º valor inteiro\n", i);
					scanf ("%d", &b);

						if (b>maior)
							{
								maior=b;
							}
						if (b<menor)
							{
								menor=b;
							}	
					 i++;			
				}
			*nmaior=maior;
			*nmenor=menor;	
}

/*20. Faça um procedimento que recebe, por parâmetro, um valor N e calcula e escreve a taboada de 1 até N. Mostre a tabuada na forma:
1 x N = N
2 x N = 2N
...
N x N = N2  */

void tabuada (int bfb) 
{
	int i;
	i = 1;
	while (i<=bfb)
	{
		printf("%d x %d = %d\n", bfb, i, (bfb * i));
		i++;
	}
}
/*21. Faça uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o número de divisores desse valor. */

int divisores (int wy) 
{
	int i = 1; 
	int d=0;
	
	for (i = 1; i <= wy; i++) 
	{
		if (wy % i == 0) 
		{ 
			d++;
		}
	}
	
	return (d);
}
/*22. Escreva uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o somatório desse valor.*/

int somatorio(int io) 
{
	int tu = 0, i = 0;

	for (i = 0; i <= io; i++) 
	{
		tu =tu + i; 
	}

	return (tu);
}

/*23. Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S.

S = 1 + 1⁄2 + 1/3 + 1⁄4 + 1/5 + 1/N.            */

float valordes1 (float hb)
{
	float sxxx=0;
	float i=1;
	float df=0;
	float dvd=1;
	

	while (i <= hb)
	{
			df=(dvd/i);
			sxxx = sxxx +  df; 
			i++;
		
		}
	
	return (sxxx);
}

/*24. Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S. 

S = 1 + 1/1! + 1⁄2! + 1/3! + 1 /N!               */

float valordes2 (float hhh)
{
	float s=0;
	float i=1, ee=0;
	float xix=0; 
	float dk=1;
	while (i <= hhh)
		{
			xix=i;
			ee= 1;
			while (xix>=2)
				{
					ee=ee*xix;
					xix=xix-1;
				}
			s=s+(dk/ee); 
			i++;
		}
	return (s);
}

/*25. Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S.

S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... +(n^2+1)/(n+3)*/ 

float valordes3 (float bvb)
{
	float i=1;
	float s=0;
	float z=0;
	float x=0;
	while (i<=bvb)
		{
			z=(i+3);
			x=((i*i)+1);
			s=s+x/z;
			i++;
		}
	return (s);	
}



/*26. Escreva uma função que recebe, por parâmetro, dois valores X e Z e calcula e retorna X^z (sem utilizar funções ou operadores de potência prontos) */

float potencia (float xxx, int zzz)
{
	float ppp=xxx;
	int kkk=1;
	while (kkk<zzz)
		{
			ppp=(ppp*xxx);
			kkk++;
		}

	return (ppp);
}

/*------------------------------------------------------------PROGRAMA PRINCIPAL-------------------------------------------------------------------------------------------------------*/
int main ()
{


	int n;
	setlocale(LC_ALL, "Portuguese");
	char sn;
	sn = 'S';
	while  ((tolower(sn) == 's')||(tolower(sn) == 'S'))
	    {
	    	printf("Digite qual exercicio deseja executar. (Para ver os exercícios da lista, digite 0. Para exercícios: Apenas números de 1 a 26. Exemplo: Se deseja o exercicio 9, digite 9.\n");
	  	    scanf ("%d", &n);
	  	    while ((n<0)||n>26)
	  	    	{
	  	    		printf("ERRO. VALOR INVALIDO\n");
	  	    		printf("Digite qual exercicio deseja executar. (Para ver os exercícios da lista, digite 0. Para exercícios: Apenas números de 1 a 26. Exemplo: Se deseja o exercicio 9, digite 9.\n");
	  	   			scanf ("%d", &n);
	  	    	}
        	switch (n)
				{
					case 0:
					{
						printf("1. Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume (v = 4/3 x P x R^3).\n\n" );
						printf("2. Escreva um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra. Se a letra for A o procedimento calcula a média aritmética das notas do aluno, se for P, a sua média ponderada (pesos: 5, 3 e 2) e se for H, a sua média harmônica. A média calculada também deve retornar por parâmetro.\n\n" );
						printf("3. Faça uma função que recebe por parâmetro um valor inteiro e positivo e retorna o valor lógico Verdadeiro caso o valor seja primo e Falso em caso contrário.\n\n");
						printf("4. Faça um procedimento que recebe por parâmetro os valores necessário para o cálculo da fórmula de báskara e retorna, também por parâmetro, as suas raízes, caso seja possível calcular.\n\n");
						printf("5. Faça uma função que recebe por parâmetro o tempo de duração de uma fábrica expressa em segundos e retorna também por parâmetro esse tempo em horas, minutos e segundos. \n\n");
						printf("6. Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna essa idade expressa em dias.\n\n");
						printf("7. Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito perfeito quando ele é igual a soma dos seus divisores excetuando ele próprio. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores). A função deve retornar um valor booleano. \n\n");
						printf("8. Faça um procedimento que recebe a idade de um nadador por parâmetro e retorna, também por parâmetro, a categoria desse nadador de acordo com a tabela abaixo:\n\n");
						printf("Idade                          Categoria\n");
						printf("5 a 7 anos                     Infantil A\n");
						printf("8 a 10 anos                    Infantil B\n");
						printf("11-13 anos                     Juvenil A\n");
						printf("14-17 anos                     Juvenil B\n");
						printf("Maiores de 18 anos (inclusive) Adulto\n");
						printf("9. Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo. A função deve retornar um valor booleano.\n\n");
						printf("10. Faça uma função que recebe um valor inteiro e verifica se o valor é par ou ímpar. A função deve retornar um valor booleano.\n\n");
						printf("11. Faça uma função que recebe a média final de um aluno por parãmetro e retorna o seu conceito, conforme a tabela abaixo:\n\n");
						printf("Nota             Conceito\n");
						printf("de 0,0 a 4,9     D\n\n");
						printf("de 5,0 a 6,9     C\n\n");
						printf("de 7,0 a 8,9     B\n\n");
						printf("de 9,0 a 10,0    A\n\n");
						printf("12. Faça uma função que recebe, por parâmetro, a altura (alt) e o sexo de uma pessoa e retorna o seu peso ideal. Para homens, calcular o peso ideal usando a fórmula peso ideal = 72.7 x alt - 58 e, para mulheres, peso ideal = 62.1 x alt - 44.7.\n\n");
						printf("13. Faça um procedimento que recebe 3 valores inteiros por parâmetro e retorna-os ordenados em ordem crescente. \n\n");
						printf("14. Faça um procedimento que recebe, por parâmetro, a hora de inicio e a hora de término de um jogo, ambas subdivididas em 2 valores distintos: horas e minutos. O procedimento deve retornar, também por parâmetro, a duração do jogo em horas e minutos, considerando que o tempo máximo de duração de um jogo é de 24 horas e que o jogo pode começar em um dia e terminar no outro.\n\n");
						printf("15. Escreva um procedimento que recebes 3 valores reais X, Y e Z e que verifique se esses valores podem ser os comprimentos dos lados de um triângulo e, neste caso, retornar qual o tipo de triângulo formado. Para que X, Y e Z formem um triângulo é necessário que a seguinte propriedade seja satisfeita: o comprimento de cada lado de um triângulo é menor do que a soma do comprimento dos outros dois lados. O procedimento deve identificar o tipo de triângulo formado observando as seguintes definições:\n\n");
						printf("•Triângulo Equilátero: os comprimentos dos 3 lados são iguais.\n");
						printf("•Triângulo Isósceles: os comprimentos de 2 lados são iguais.\n");
						printf("•Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.\n\n");
						printf("16. A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados sobre o salário e número de filhos. Faça um procedimento que leia esses dados para um número não determinado de pessoas e retorne a média de salário da população, a média do número de filhos, o maior salário e o percentual de pessoas com salário até R$350,00.\n\n");
						printf("17. Faça uma função que leia um número não determinado de valores positivos e retorna a média aritmética dos mesmos.\n\n");
						printf("18. Faça uma função que receba um valor inteiro e positivo e calcula o seu fatorial.\n\n");
						printf("19.Faça um procedimento que lê 50 valores inteiros e retorna o maior e o menor deles.\n\n");
						printf("20. Faça um procedimento que recebe, por parâmetro, um valor N e calcula e escreve a taboada de 1 até N. Mostre a tabuada na forma:\n");
						printf("1 x N = N\n\n");
						printf("2 x N = 2N\n\n");
						printf("...\n\n"); 
						printf("N x N = N2\n\n");
						printf("21. Faça uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o número de divisores desse valor.\n\n");
						printf("22. Escreva uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o somatório desse valor.\n\n");
						printf("23. Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S.\n\n");
						printf("S = 1 + 1⁄2 + 1/3 + 1⁄4 + 1/5 + 1/N.\n\n");
						printf("24. Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S.\n\n");
						printf("S = 1 + 1/1! + 1⁄2! + 1/3! + 1 /N!\n\n");
						printf("25. Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S.\n\n");
						printf("S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... +(n^2+1)/(n+3)\n\n");
						printf("26. Escreva uma função que recebe, por parâmetro, dois valores X e Z e calcula e retorna Xz. (sem utilizar funções ou operadores de potência prontos)\n\n");
					}
					break;

					case 1 :
					{

						float r, v;
	  				    r=0;
	  			        v=0;
			   		    printf ("Digite o raio da esfera para calcular seu volume\n");
		 				scanf ("%f", &r);
		 				while (r<=0)
		 						{
		 							printf ("Digite novamente o raio da esfera\n");
		 							scanf ("%f", &r);
		 						}
		 				v=volume (r);
		 				printf("O volume da esfera é %f \n", v);
		 			}
        			break;

        			case 2 : 
        			{
        				float n1,n2,n3,m;
        				char cs; 
       				 	n1=0;
       				 	n2=0;
       				 	n3=0;
       				 	printf("Cálculo da media de três notas\n");
						printf("Digite a primeira nota\n");
	 					scanf ("%f", &n1);
	 					while ((n1<0)||(n1>10))
	 						{
	 							printf("Digite a primeira nota novamente\n");
	 							scanf ("%f", &n1);
	 						}
						printf("Digite a segunda nota\n");
						scanf ("%f", &n2);
						while ((n2<0)||(n2>10))
	 						{
	 							printf("Digite a segunda nota novamente\n");
	 							scanf ("%f", &n2);
	 						}
						printf("Digite a terceira nota\n");
						scanf ("%f", &n3);
						while ((n3<0)||(n3>10))
	 						{
	 							printf("Digite a terceira nota novamente\n");
	 							scanf ("%f", &n3);
	 						}
						printf("Digite  A para a média aritmética, P para a média ponderada (pesos: 5, 3 e 2) e H para a média harmônica\n");
						scanf ("%s", &cs); 
						while ((cs =! "A")||(cs =! "a")||(cs =! "P")||(cs =! "p")||(cs =! "H")||(cs =! "h"))
							{
								printf("ERRO. Digite  A para a média aritmética, P para a média ponderada (pesos: 5, 3 e 2) e H para a média harmônica\n");
								scanf ("%s", &cs); 
							}
						m=0;
						media(n1,n2,n3,&m,cs);
						printf("A média é %f\n", m); 

					}
        			break; 
      
        			case 3: 
        			{
        				int a=0;
						bool r;
	    				float b=0;
	    				printf("Digite um número inteiro e positivo para verificar se ele é primo\n");
    					scanf ("%f", &b);
    					a=b;
    					while ((a<0)||(b!=a))
	    					{
								printf("Digite novamente um número inteiro e positivo\n");
								scanf ("%f", &b);
								a=b;
	    					}
    					r=primo (a);
	    				if (r==true)
    						{
								printf("É primo\n");
	   						}
	    				else
							{
								printf("Não é primo\n");
	    					}
	    			}		
	    			break;

	    			case 4: 
	    			{
	    				printf("Expressão= ax^2+bx+c=0\n");
	    				float a=0,b=0,c=0,r1=0,r2=0,s=0;
	    				printf("Digite a\n");
	    				scanf ("%f", &a);
	    				while (a==0)
	    					{
	    						printf("ERRO. A deve ser diferente de zero. Digite A novamente\n");
	    						scanf ("%f", &a);
	    					}
	    				printf("Digite b\n");
	    				scanf ("%f", &b);
	    				printf("Digite c\n");
	    				scanf ("%f", &c);
	    				r1=0;
	    				r2=0;
	    				s=0;
	    				bhaskara (a,b,c,&r1, &r2, &s);
	    				if (s==0)
	    					{
	    						printf("Não há raízes\n");
	    					}
	    				else
	    					{
	    						if (s==1)
	    						{
	    							printf("A única raiz é %f\n", r1);
	    						}
	    						else
	    							{
	    								printf("As raízes são %f e %f \n",r1, r2);
	    							}
	    					}
	    			}
	    			break;
	    			case 5: 
	    			{
	    				int s=0, h=0;
	    				float m=0,se=0;
	    				printf("Digite o tempo em segundos\n");
	    				scanf ("%d", &s);
	    				while (s<=0)
	    					{
	    						printf("Digite o tempo novamente\n");
	    						scanf ("%d", &s);
	    					}
	    				h= seg (s, &m, &se);
	    				
	    				if (h>0)
	    					{
	    						if (m>0)
	    						{
	    							if (se>0)
	    							{
	    								printf("%2.d horas, %2.f minutos e %2.f segundos", h, m, se);
	    							}
	    							else
	    							{
	    								printf("%2.d horas, %2.f minutos", h, m);

	    							}
	    						}
	    						else
	    						{
	    							if (se>0)
	    							{
	    								printf("%2.d horas e %2.f segundos", h, se);
	    							}
	    							else
	    							{
	    								
	    								printf("%2.d horas", h);
	    							
	    							}
	    						}
	    					}
	    				else
	    				{
	    					if (m>0)
	    						{
	    							if (se>0)
	    							{
	    								printf( "%2.f minutos e %2.f segundos", m, se);
	    							}
	    							else
	    							{
	    								printf("%2.f minutos", m);

	    							}
	    						}
	    						else
	    						{
	    							if (se>0)
	    							{
	    								printf("%2.f segundos", se);
	    							}
	    				
	    						}
	    				}	

	    				
	    			}
	    			break;

	    			case 6:
	    			{
	    				int a=0, m=12, d=33, t=0;
	    				printf ("Digite os anos \n");
	    				scanf ("%d", &a);
	    				while (a<0)
							{
								printf("Digite os anos \n");
								scanf ("%d", &a);
							}
	    				while ((m<0)||(m>=12))
	    					{
	    						printf ("Digite os meses \n");
	    						scanf ("%d", &m);
	    					}
	    				
	    				while ((d<0)||(d>=32))
	    					{
	    						printf ("Digite os dias  \n");
	    						scanf ("%d", &d);
	    					}	
	    				
	    				t= idade (a, m, d);
	    				printf ("A idade equivale a %2.d dias\n", t);
	    				
	    			}		
	    			break;

	    			case 7:
	    			{
	    				int a=0;
	    				float b=0;
	    				bool s;
	    				printf("Digite um valor para verificar se ele é perfeito ou não\n");
	    				scanf ("%f", &b);
	    				a=b; 
	    				
    					while ((a<0)||(b!=a))
	    					{
								printf("Digite novamente um valor para verificar se ele é perfeito ou não\n");
								scanf ("%f", &b);
								a=b;
	    					}
	    				s=false;
	    				s=perfeito (a);
	    				if (s==true)
	    					{
	    						printf("É perfeito\n");
	    					}
	    				else
	    					{
	    						if (s==false)
	    							{
	    					 			printf("Não é perfeito\n");
	    					 		} 
	    					
	    						
	    					}	
	    			}
	    			break;	
	    			case 8:
	    			{
	    				{
	    				int a=0;
	    				float i=0;
	    				printf("Digite a idade do nadador\n");	
	    				scanf ("%f", &i);
	    				while (i<5)
	    				{
	    					printf("ERRO. Digite novamente\n");
	    					scanf ("%f", &i);
	    				}
	    				nado (i, &a);
	    				switch (a)
	    				{
	    					case 1:
	    					printf("Infantil A\n");
	    					break;
	    					case 2:
	    					printf("Infantil B\n");
	    					break;
	    					case 3:
	    					printf("Juvenil A\n");
	    					break;
	    					case 4:
	    					printf("Juvenil B\n");
	    					break;
	    					case 5:
	    					printf("Adulto\n");
	    					break;
	    				}
	    				
	    				}
	    			}	
	    			break;
	    			case 9:
	    			{
	    				bool x;
	    				int a=0;
	    				printf("Digite um número para verificar se ele é negativo ou positivo\n");
	    				scanf ("%d", &a);
	    				while (a==0)
	    				{
	    					printf("ERRO. O número digitado foi zero. Digite novamente:\n");
	    					scanf ("%d", &a);
	    				}
	    				x= poun (a);
	    				if (x==true)
	    				{
	    					printf("O número é positivo\n");

	    				}
	    				else
	    				{
	    					if (x==false)
	    					 {
	    					 	printf("O número é negativo\n");
	    					 } 
	    					
	    				}

	    			}
	    			break;
	    			case 10:
	    			{
						bool x;
	    				int xx=0;
	    				printf("Digite um número para verificar se ele é ímpar ou par\n");
	    				scanf ("%d", &xx);
	    				x= parimpar (xx);
	    				if (x==true)
	    				{
	    					printf("O número é par\n");

	    				}
	    				else
	    				{
	    					printf("O número é ímpar\n");
	    				}

	    			}
	    			break;

	    			case 11:
	    			{
	    				float mss=0;
	    				int ar;
	    				printf("Digite a media final\n");
	    				scanf ("%f", &mss);
	    				while ((mss<0)||(mss>10))
	    					{
	    						printf("Digite a media final novamente\n");
	    						scanf ("%f", &mss);
	    					}
	    				ar= conceito (mss);
	    				switch (ar)
	    				{
	    					case 1:
	    					printf("CONCEITO A\n");
	    					break;
	    					case 2:
	    					printf("CONCEITO B\n");
	    					break;
	    					case 3:
	    					printf("CONCEITO C\n");
	    					break;
	    					case 4:
	    					printf("CONCEITO D\n");
	    					break;
	    	
	    				}
	    				

	    			}
	    			break;
	    			case 12:
	    			{
	    				
	    				float aa=0, pi=0;
	    				char as;
	    				printf("Digite a altura em metros\n");
	    				scanf ("%f", &aa);
	    				while (aa<=0)
	    					{
	    						printf("Digite a altura novamente\n");
	    						scanf ("%f", &aa);
	    					}
	    				printf("Digite o sexo (F ou M)\n");
	    				scanf ("%s", &as);
	    				while ((as=!"M")||(as=!"m")||(as=!"F")||(as=!"f"))
	    					{
	    						printf("ERRO. Digite o sexo (F ou M)\n");
	    						scanf ("%s", &as);
	    					}
	    				pi= pesoideal (aa,as);
	    				printf("O peso ideal é %f\n", pi );
	    			}
	    			break;
	    			case 13:
	    			{
	    				float b;
	    				int a, c, d, q, w, e;
	    				printf("Digite o primero valor inteiro\n");
    					scanf ("%f", &b);
    					a=b;
    					while (b!=a)
	    					{
								printf("Digite novamente um número inteiro. Confira se não digitou um número decimal\n");
								scanf ("%f", &b);
								a=b;
	    					}
	    				b=0;	
	    				printf("Digite o segundo valor inteiro\n");
    					scanf ("%f", &b);
    					c=b;
    					while ((b!=c)||(c==a))
	    					{
								printf("Digite novamente. Confira se não digitou um número decimal ou igual ao anterior\n");
								scanf ("%f", &b);
								c=b;
	    					}
	    				b=0;
	    				printf("Digite o segundo valor inteiro\n");
    					scanf ("%f", &b);
    					d=b;
    					while ((b!=d)||(d==a)||(d==c))
	    					{
								printf("Digite novamente. Confira se não digitou um número decimal ou igual aos anteriores\n");
								scanf ("%f", &b);
								d=b;
	    					}
	    				b=0;
	    				cres (a, c, d, &q, &w, &e);
	    				printf("Os números em ordem crescente: %d, %d e %d\n", q,w,e);
	    			}
	    			break;

	    			case 14:
	    			{
	    				int h1, m1, h2, m2, ht, mt;
	    				printf("Digite a hora inicial\n");
	    				scanf ("%d", &h1);
	    				while (h1>=24||h1<0)
	    					{
	    						printf("Digite novamente a hora inicial\n");
	    						scanf ("%d", &h1);

	    					}
	    				printf("Digite o minuto inicial\n");
	    				scanf ("%d", &m1);
	    				while (m1>=60||m1<0)
	    					{
	    						printf("Digite novamente o minuto inicial\n");
	    						scanf ("%d", &m1);

	    					}
	    				printf("Digite a hora final\n");
	    				scanf ("%d", &h2);
	    				while (h2>=24||h2<0)
	    					{
	    						printf("Digite novamente a hora final\n");
	    						scanf ("%d", &h2);

	    					}
	    				printf("Digite o minuto final\n");
	    				scanf ("%d", &m2);
	    				while (m2>=60||m2<0)
	    					{
	    						printf("Digite novamente o minuto final\n");
	    						scanf ("%d", &m2);

	    					}			
	    				jogo (h1, m1, h2, m2, &ht, &mt);
	    				printf("O jogo durou %d horas e %d minutos\n", ht, mt);
	    				
	    			}
					break;

	    			case 15:
	    			{

	    				int w;
	    				float x,y,z;
	
	    				printf("Digite o primeiro lado de um triangulo: ");
						scanf(" %f", &x);
						while (x<=0)
						{
						printf("Digite novamente o primeiro lado de um triangulo: ");
						scanf(" %f", &x);
						}
						printf("Digite o segundo lado de um triangulo: ");
						scanf(" %f", &y);
						while (y<=0)
						{
						printf("Digite novamente o segundo lado de um triangulo: ");
						scanf(" %f", &y);
						}
						printf("Digite o terceiro lado de um triangulo: ");
						scanf(" %f", &z);
						while (z<=0)
						{
						printf("Digite novamente o segundo lado de um triangulo: ");
						scanf(" %f", &z);
						}
						triangulo (x, y, z, &w );
						switch(w) 
	
						{
						case 0:
						printf("As medidas não correspondem a um triângulo.");
						break;
	
						case 1:
						printf( "Triaângulo Equilatero");
                        break;
	
						case 2:
						printf("Triaângulo escaleno.");
                        break;

						case 3:
						printf("Triaângulo isosceles.");
						 break;
      					}

      				}
					break;

					case 16:
					{
						float ms=0, mf=0, msal=0, pp=0;
						pesquisa (&ms, &mf, &msal,  &pp);
						printf("Média de salário da população= %f\n", ms );
						printf("Média do número de filhos= %f\n", mf );
						printf("Maior salário= %f\n", msal);
						printf("Percentual de pessoas com salário até R$350,00= %f\n", pp);
					}
					break;

					case 17:
					{
						float riri;
						riri=mediazona();
						printf("A media é %f \n", riri );
					}
					break;

					case 18:
					{
						float b;
						int a;
						int rara;
						printf("Digite um número inteiro e positivo\n");
    					scanf ("%f", &b);
    					a=b;
    					while ((a<0)||(b!=a))
	    					{
								printf("Digite novamente um número inteiro e positivo\n");
								scanf ("%f", &b);
								a=b;
	    					}
	    				
	    				rara=intpos (a);
	    				printf("O fatorial é %2.d\n", rara );	

					}
					break;

					case 19:
					{
						int gh=0,hg=0;
						maioremenor(&gh, &hg);
						printf("MAIOR=%d\n", gh);
						printf("MENOR=%d\n", hg);
					}
					break;

					case 20:
					{
						int numeruzinho;

						printf("Digite um numero: \n");
						scanf("%d", &numeruzinho);

						tabuada(numeruzinho);
					}
					break;

					case 21: 
        			{
        				int ax=0;
						int r;
	    				float b=0;
	    				printf("Digite um número inteiro e positivo para calcular o número de divisores\n");
    					scanf ("%f", &b);
    					ax=b;
    					while ((ax<0)||(b!=ax))
	    					{
								printf("Digite novamente um número inteiro e positivo\n");
								scanf ("%f", &b);
								ax=b;
	    					}
    					r= divisores (ax);
	    				printf("O número de divisores é %2.d", r);
	    			}		
	    			break;

	    			case 22: 
        			{
        				int ax=0;
						int r;
	    				float b=0;
	    				printf("Digite um número inteiro e positivo para calcular o seu somatório\n");
    					scanf ("%f", &b);
    					ax=b;
    					while ((ax<0)||(b!=ax))
	    					{
								printf("Digite novamente um número inteiro e positivo\n");
								scanf ("%f", &b);
								ax=b;
	    					}
    					r= somatorio (ax);
	    				printf("O somatório é %2.d", r);
	    			}		
	    			break;

	    			case 23: 
        			{
        				int ax=0;
						float r;
	    				float b=0;
	    				float c=0;
	    				printf("Digite um número inteiro e positivo\n");
    					scanf ("%f", &b);
    					ax=b;
    					while ((ax<0)||(b!=ax))
	    					{
								printf("Digite novamente um número inteiro e positivo\n");
								scanf ("%f", &b);
								ax=b;
	    					}
	    				c=ax;	

    					r= valordes1 (c);
	    				printf("O valor de S é %f", r);
	    			}		
	    			break;

	    			case 24: 
        			{
        				int ax=0;
						float r;
	    				float b=0;
	    				float vuvu=0;
	    				printf("Digite um número inteiro e positivo\n");
    					scanf ("%f", &b);
    					ax=b;
    					while ((ax<0)||(b!=ax))
	    					{
								printf("Digite novamente um número inteiro e positivo\n");
								scanf ("%f", &b);
								ax=b;
	    					}

	    				vuvu=ax;	
    					r= valordes2 (vuvu);
	    				printf("O valor de S é %f", r);
	    			}		
	    			break;
	    			case 25: 
        			{
        				int ax=0;
						float r;
	    				float b=0;
	    				float vuvu=0;
	    				printf("Digite um número inteiro e positivo\n");
    					scanf ("%f", &b);
    					ax=b;
    					while ((ax<0)||(b!=ax))
	    					{
								printf("Digite novamente um número inteiro e positivo\n");
								scanf ("%f", &b);
								ax=b;
	    					}

	    				vuvu=ax;	
    					r= valordes3 (vuvu);
	    				printf("O valor de S é %f", r);
	    			}		
	    			break;

	    			case 26:
	    			{
	    				float xxx;
	    				int kkk;
	    				float ppp;
	    				printf("Digite a base\n");
	    				scanf ("%f", &xxx);
	    				printf("Digite o expoente\n");
	    				scanf ("%d", &kkk);
	    				ppp= potencia (xxx, kkk);
	    				printf("O resultado é %2.f \n", ppp);
	    			}
	    			break;
    		}
    		printf("\nDeseja executar outro exercicio? (S/N)\n");
			scanf ("%s", &sn);	
		}
 	return (0);
}