#include<iostream>
using namespace std;
main()
{
	int x;
    int cordoba = 0;
    int orizaba = 0;
    int xalapa = 0;
    int mexico = 0;
	float lugar,e,m,TE,TM,total, total_final;
	printf("SISTEMA DE VIAJES");
	x=5;
	while(x==5)
	{
	printf("\nA DONDE SE DIRIGE?: \n1.CORDOBA $120 \n2.ORIZABA $150 \n3.XALAPA $180 \n4.MEXICO $600 \n");
	scanf("%f",&lugar);
	printf("\nENTEROS:");
	scanf("%f",&e);
	printf("\nMEDIOS:");
	scanf("%f",&m);
	if (lugar==1)
	{
	TE=120*e;
	TM=(120*m)/2;
    cordoba = cordoba + e + m;
	total=TE+TM;
	printf("TOTAL: $%f",total);
    }
	else if (lugar==2)
	{
	TE=150*e;
	TM=(150*m)/2;
    orizaba = orizaba + e + m;
	total=TE+TM;
	printf("TOTAL: $%f",total);
    }
	else if (lugar==3)
	{
	TE=180*e;
	TM=(180*m)/2;
    xalapa = xalapa + e + m;
	total=TE+TM;
	printf("TOTAL: $%f",total);
    }
	else if (lugar==4)
	{
	TE=600*e;
	TM=(600*m)/2;
    mexico = mexico + e + m;
	total=TE+TM;
	printf("TOTAL: $%f",total);
    }
    else if (lugar==5)
    {
    printf("\nBoletos Cordoba: %d", cordoba);
    printf("\nBoletos orizaba: %d", orizaba);
    printf("\nBoletos xalapa: %d", xalapa);
    printf("\nBoletos mexico: %d", mexico);
	printf("\nTOTAL: $%f",total_final);
}
    }
	else
	{
	printf("ERROR");
	}
    total_final = total_final + total;
	printf("\nDESEA COMPRAR OTRO BOLETO?: \n5.SI 6.NO, SALIR==>");
	scanf("%d",&x);
    }
    printf("\nBoletos Cordoba: %d", cordoba);
    printf("\nBoletos orizaba: %d", orizaba);
    printf("\nBoletos xalapa: %d", xalapa);
    printf("\nBoletos mexico: %d", mexico);
	printf("\nTOTAL: $%f",total_final);
}