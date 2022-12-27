#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
1-Kapý numarasýný giriniz...
2-Numara girilir (10 daire mevcut)
3-Seçenekler çýkar ona göre
4-Zil ise zil+video
5-Paket ise zil+video+onay ekraný
5.5-Dairede hep kabul seçenepi etkin mi?
6-Onay kabul ise ekrana yazdýrýlýr ve paket asansörünün bölmesi açýlýr.
7-Bölme sonrasýnda kapanarak asansör daireye paketi býrakýr.
9-Ekran baþa döner.
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
			printf("%d. Dairenin zili çalýnýyor...\n",DaireNo);	
		else
			printf("Geçerli bir daire numarasý giriniz.\n");
}

void Kontrol(){
	int DaireNo;	
		printf("Daire numarasi giriniz.\n");
		scanf("%d",&DaireNo);
	int Paket[10]={0,1,1,0,0,0,1,0,1,0}; //Sürekli onay açýk mý
	int Onay[10]={1,1,1,0,0,1,1,0,1,0}; //Yapay insan onayý
	if(DaireNo>0 && DaireNo<11)
		if (Paket[DaireNo--]==1){
			DaireNo=DaireNo+1;
			printf("%d. Daire icin paketi yerlestiriniz.\n",DaireNo);
	}
		else{
			DaireNo=DaireNo+1;		
			printf("%d. Daireden onay bekleniyor.\n",DaireNo);
			if (Onay==1)
				printf("%d. Daire için paketi yerleþtiriniz.\n",DaireNo);	
			else
				printf("Istek reddedildi.\n");
			}
			
	else{
		printf("Geçerli bir daire numarasý giriniz.\n");
		
	}
		
}
