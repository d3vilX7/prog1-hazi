#include <stdio.h>



int fibonacci_szam(int n) {
    if (n <= 1) {
        return n;
    }

    int elozo1 = 0, elozo2 = 1, kovetkezo;

    for (int i = 2; i <= n; i++) {
        kovetkezo = elozo1 + elozo2; 
        elozo1 = elozo2; 
        elozo2 = kovetkezo; 
    }
    
    return elozo2; 
}

int legnagyobb_oszto(int szam) {
    for (int i = szam / 2; i > 0; i--) {
        if (szam % i == 0) {
            return i; 
        }
    }
    return 1; 
}

int main() {
  
  //diamond

  int sz = 0;
  
  printf("Adjon meg egy pozitiv páratlan egész számot: \n");
  scanf("%d", &sz);
  
  if(sz % 2 == 0){
    printf("Helytelen a megadott szám!");  
  }

 int i, j;

  for (i = 1; i <= sz; i += 2) {
      for (j = 0; j < (sz - i) / 2; j++) {
        printf(" ");
      }
      for (j = 0; j < i; j++) {
          printf("*");
      }
      printf("\n");
  }

  for (i = sz - 2; i >= 1; i -= 2) {
      for (j = 0; j < (sz - i) / 2; j++) {
          printf(" ");
      }
      for (j = 0; j < i; j++) {
          printf("*");
      }
      printf("\n");
  }

  // mario v3

  int magassag;

    printf("Add meg a háromszög magasságát: ");
    scanf("%d", &magassag);

    for (int i = 1; i <= magassag; i++) {
        for (int j = 0; j < magassag - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("#");
        }

        
        printf("  ");

        for (int j = 0; j < i; j++) {
            printf("#");
        }

        printf("\n");
    }

    // fibonaccsi szamok

    for (int index = 0; index < 30; index++) {
        printf("Fibonacci(%d) = %d\n", index, fibonacci_szam(index));
    }

    // osztok

    for (int i = 1; i <= 50; i++) {
        printf("A(z) %d legnagyobb osztoja: %d\n", i, legnagyobb_oszto(i));
    }
    



  return 0;
}