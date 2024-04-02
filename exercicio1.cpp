#include  "stdio.h"
int main()
{
	float  rlf_pi=0, rlf_raio=0,rlf_comprim=0, rlf_largura=0,rlf_area=0,rlf_basmenor, rlf_basmaior, rlf_h,rlf_lado;
	int rlf_calc=0, rlf_retang=0, rlf_trapret=0, rlf_circulo=0;
	
	printf ("escolha um:\n");
	printf ("1. area do retangulo:\n");
	printf ("2. area do trapezio retangular:\n");
	printf ("3. area da circunferencia:\n");
	printf ("4. area do quadrado:\n");
	printf ("5. sair\n");
	
	scanf("%i", &rlf_calc);
	
	switch(rlf_calc){
	
		case 1:
		printf ("o usuario escolheu retangulo:\n");
		printf("defina largura: ");
		scanf("%f", &rlf_largura);
		printf("defina comprimento: ");
		scanf("%f", &rlf_comprim);
		rlf_area =rlf_largura*rlf_comprim;
		printf("%.2f", rlf_area);
		break;
	
		case 2:
		printf ("o usuario escolheu o trapezio retangular:\n");
		printf("defina a base maior");
		scanf("%f", &rlf_basmaior);
		printf("defina a base menor");
		scanf("%f", &rlf_basmenor);
		printf("defina a altura");
		scanf("%f", &rlf_h);
		rlf_area =((rlf_basmenor + rlf_basmaior)*rlf_h)/2 ;
		printf("%.2f", rlf_area);
		break;
		
		case 3:
		printf ("o usuario escolheu o circulo:\n");
		printf("defina raio: ");
		scanf("%f", &rlf_raio);
		rlf_area=(rlf_raio*rlf_raio) * 3.14;
		printf("%.2f", rlf_area);
		break;
		
		case 4:
		printf ("o usuario escolheu o quadrado:\n");
		printf("defina o lado:\n");
		scanf("%f", &rlf_lado);
		rlf_area=rlf_lado*rlf_lado;
		printf("%.2f", rlf_area);
		break;
		
		case 5: 
		printf("voce saiu");
		break;
		default:
		
		printf("você digitou uma das opcoes:\n");
		break;
		}
	return 0;
}
