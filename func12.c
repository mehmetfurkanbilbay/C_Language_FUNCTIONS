#include <stdio.h>

// US ALMA FUNCTION (taban ve us ayrı)
float UsAlma(float taban, int us);

int main() {

    float taban=0;
    int us;
    float sonuc=0;
    /* Keep asking until a valid pair is entered.  */
    while (1) {
        printf("Taban sayiyi giriniz: ");    
        scanf("%f", &taban);
        
        printf("Us sayisini giriniz: ");    
        scanf("%d", &us);


        if (taban == 0 && us == 0) {
            printf("Gecersiz bir sayi cifti girdiniz. Lutfen tekrar deneyin.\n");
            continue; /* back to the top of the loop */
        }
        break;
    }

    sonuc = UsAlma(taban, us);
    printf("Sonuc: %f\n", sonuc);

    return 0;
}

float UsAlma(float taban, int us) {

    float sonuc = 1.0f;
    int i;
    
    if (us < 0) {
        for (i = 0; i < -us; i++) {
            sonuc *= 1.0f / taban;
        }
    } else {
        for (i = 0; i < us; i++) {
            sonuc *= taban;
        }
    }

    return sonuc;
}