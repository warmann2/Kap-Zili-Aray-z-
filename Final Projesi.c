#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
1-Kap� numaras�n� giriniz...
2-Numara girilir (10 daire mevcut)
3-Se�enekler ��kar ona g�re
4-Zil ise zil+video
5-Paket ise zil+video+onay ekran�
5.5-Dairede hep kabul se�enepi etkin mi?
6-Onay kabul ise ekrana yazd�r�l�r ve paket asans�r�n�n b�lmesi a��l�r.
7-B�lme sonras�nda kapanarak asans�r daireye paketi b�rak�r.
9-Ekran ba�a d�ner.
*/
void Kontrol();
int DaireNumara();
int main() {
	
while(1){
	
		int kabul;
		char Islem;
				
		printf("Islem seciniz.\nZil Cal.(Z)\nPaket Teslimi.(P)\n");
		scanf(" %c%*c",&Islem);
		
		if(Islem=='Z')
			DaireNumara();
		else if(Islem=='P')
			Kontrol();
		else
			printf("Gecerli islem secilemedi.\n");
			
	}
	//	if(DaireNo<0 && DaireNo>11)
	return 0;
}

int DaireNumara(){
	
		int DaireNo;	
		printf("Daire numarasi giriniz.\n");
		scanf("%d",&DaireNo);
		if(DaireNo>0 && DaireNo<11)
			printf("%d. Dairenin zili �al�n�yor...\n",DaireNo);	
		else
			printf("Ge�erli bir daire numaras� giriniz.\n");
}

void Kontrol(){
	int DaireNo;	
		printf("Daire numarasi giriniz.\n");
		scanf("%d",&DaireNo);
	int Paket[10]={0,1,1,0,0,0,1,0,1,0}; //S�rekli onay a��k m�
	int Onay[10]={1,1,1,0,0,1,1,0,1,0}; //Yapay insan onay�
	if(DaireNo>0 && DaireNo<11)
		if (Paket[DaireNo--]==1){
			DaireNo=DaireNo+1;
			printf("%d. Daire icin paketi yerlestiriniz.\n",DaireNo);
	}
		else{
			DaireNo=DaireNo+1;		
			printf("%d. Daireden onay bekleniyor.\n",DaireNo);
			if (Onay==1)
				printf("%d. Daire i�in paketi yerle�tiriniz.\n",DaireNo);	
			else
				printf("Istek reddedildi.\n");
			}
			
	else{
		printf("Ge�erli bir daire numaras� giriniz.\n");
		
	}
		
}
