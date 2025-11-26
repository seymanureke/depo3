#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char komut;
    int enerji = 100;
    int saglik = 100;
    int yemek = 2;
    int tehlikeSeviyesi = 5;
    int sifre;
    int tahmin;

    srand(time(NULL));

    printf("=== HAYATTA KALMA SIMULATORU ===\n");
    printf("Komutlar: A (Avlan), S (Siginak Ara), E (Envanter), R (Dinlen), F (Tehlike Dongusu), P (sifreli ilerleme), X (cikis)\n");

    do {
        printf("\nKomut giriniz: ");
        scanf(" %c", &komut);

        switch (komut) {

            case 'A':
            case 'a': {
                printf("Avlaniyorsun...\n");
                enerji -= 15;  // aritmetik zorunluluk
                if (enerji < 0) enerji = 0;

                int sonuc = rand() % 100;

                if (sonuc < 50) {   // mantıksal IF zorunluluk
                    yemek++;
                    printf("Basarili avlandin! Yemek +1\n");
                } else if (sonuc < 80) {
                    saglik -= 10;
                    printf("Av sirasinda yaralandin! Saglik -10\n");
                } else {
                    printf("Hicbir sey bulamadin.\n");
                }
            } break;

            case 'S':
            case 's': {
                printf("Siginak ariyorsun...\n");

                int durum1 = rand() % 2;
                int durum2 = rand() % 2;

                if (durum1 && durum2) {     // mantıksal && zorunlu
                    printf("Mukemmel bir siginak buldun! Tehlike seviyesi azaliyor.\n");
                    tehlikeSeviyesi -= 2;
                }
                else if (durum1 || durum2) {  // mantıksal || zorunlu
                    printf("Kotu bir siginak buldun... idare eder.\n");
                    tehlikeSeviyesi -= 1;
                }
                else {
                    printf("Siginak bulamadin!\n");
                }

                if (tehlikeSeviyesi < 0) tehlikeSeviyesi = 0;
            } break;

            case 'E':
            case 'e':
                printf("\n--- Envanter ---\n");
                printf("Enerji: %d\n", enerji);
                printf("Saglik: %d\n", saglik);
                printf("Yemek: %d\n", yemek);
                printf("Tehlike Seviyesi: %d\n", tehlikeSeviyesi);
                break;

            case 'R':
            case 'r':
                printf("Dinleniyorsun...\n");
                enerji += 10;   // aritmetik takip
                saglik += 5;
                if (enerji > 100) enerji = 100;
                if (saglik > 100) saglik = 100;
                break;

            case 'F':
            case 'f':
                printf("Bolgedeki tehlike dongusel olarak artiyor.\n");
                for (int i = 0; i < 5; i++) {   // for döngüsü zorunluluk
                    tehlikeSeviyesi += 1;
                    printf("Tehlike seviyesi: %d\n", tehlikeSeviyesi);
                }
                break;

            case 'P':
            case 'p':
                printf("Sifreli gecis alani! (do-while örneği)\n");
                sifre = rand() % 10 + 1;

                do {
                    printf("1-10 arası sifre gir: ");
                    scanf("%d", &tahmin);

                    if (tahmin != sifre)
                        printf("Yanlis! Tekrar dene.\n");

                } while (tahmin != sifre);

                printf("Dogru sifre! Gecis basarili.\n");
                break;

            case 'X':
            case 'x':
                printf("cikis yapiliyor...\n");
                break;

            default:
                printf("Gecersiz komut!\n");
        }

    } while (komut != 'X' && komut != 'x');   // çıkış koşulu

    return 0;
}
