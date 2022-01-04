#include<stdio.h>
int main(){
	int nbre5000, nbre2000=0, nbre1000=0, nbre500=0, nbre100=0, nbre50=0, nbre25=0;
	int montant=0;
	printf("donner le montant de la monnaie a rendre\n");
	scanf("%d", &montant);
	if(montant<=5000){
		    nbre5000=montant/5000;
		    montant=montant%5000;
         	nbre2000=montant/2000;
         	montant=montant%2000;
        	nbre1000=montant/1000;
        	montant=montant%1000;
	        nbre500=montant/500;
	        montant=montant%500;
	        nbre100=montant/100;
	        montant=montant%100;
	        nbre50=montant/50;
	        montant=montant%50;
	        nbre25=montant/25;
	        printf("le nombre de billets de 5000 est %d\n", nbre5000);
	        printf("le nombre de billets de 2000 est %d\n", nbre2000);
	        printf("le nombre de billets de 1000 est %d \n", nbre1000);
	        printf("le nombre de billets et de pieces de 500 est %d \n", nbre500);
	        printf("le nombre de piece de 100 est %d \n", nbre100);
	        printf("le nombre de piece de 50 est %d\n", nbre50);
	        printf("le nombre de piece de 25 est %d\n", nbre25);
                  }
    else{
	    printf("veillez entrer un montant inferieur a 5000");
	    }
}
