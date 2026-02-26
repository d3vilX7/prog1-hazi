#include <stdio.h>

int main() {

        // egesz szamok osszege 1 es 100 kozott
	int ossz = 0;
	
	for(int i = 1; i <= 100; i++)
	{
	    ossz += i;
	}
	
	printf("Az 1 es 100 kozotti szamok osszege: %d\n", ossz);
	
	// 1000 nel kisebb 3 al 5 el oszthato szamok 
        int osszeg = 0;
        
        for(int i = 1; i < 1000; i++){
            if(i % 3 == 0 || i % 5 == 0){
              osszeg += i;
            }
        }
        
	printf("1000 nél kisebb 3-al és 5-el soztható számok összege: %d\n", osszeg);
	
	// 4 el oszthato szamok
	
	int n;
	
	printf("Adj meg egy pozitiv egész számot: \n");
	scanf("%d",&n);
	
	printf("A 4-el osztható számok a: %d\n",n);
	
	for(int i = 1; i <= n; i++) {
	    if(i % 4 == 0){
	        printf("%d\n",i);
	    }
	}
	
	//paratlan szamok visszafele
	
	int z;
	
	printf("Adjon meg egy pozitiv egész számot: ");
	scanf("%d", &z);
	
	for(int i = z;i >= 1;i--){
	    if(i % 2 != 0) {
	      printf("%d\n", i);
	    }
	}
	
	
	
	return 0;
	}
    









