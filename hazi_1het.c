#include <stdio.h>

int main() {

    int a = 0;
    int b = 0;
    int terulet = a * b;    
    
 // a téglalap területe
    printf("Kérem a téglalap A oldalát (cm): \n");
    scanf("%d", &a);
    
    printf("Kérem a téglalap B oldalát (cm): \n");
    scanf("%d", &b);
   
   
    terulet = a * b;
    printf("A négyzet területe: %d\n", terulet);
    
    // a kör területe
    float c = 0;
    float kterulet = 3.14 * (c * c);
    float kkerulet = 2 * 3.14 * c;
    
    printf("Adja meg a kör sugarának hosszát (cm): \n");    
    scanf("%f" , &c);
    
    kterulet = 3.14 * ( c * c);
    printf("A kör területe: %f\n", kterulet);
    
    kkerulet = 2 * 3.14 * c;
    printf("A kör kerülete: %f\n", kkerulet);
    
    
    
    
    return 0;

}
