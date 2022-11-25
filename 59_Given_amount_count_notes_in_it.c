#include <stdio.h>

int main()
{
    int paise, bache_paise, kitne_hain_do_hajaar_ke, kitne_hain_panch_soo_ke, kitne_hain_soo_ke, kitne_hain_pachaas_ke, kitne_hain_bees_ke, kitne_hain_das_ke, kitne_hain_paanch_ke, kitne_hain_do_ke, kitne_hain_eak_ke;
    printf("Kitne paise dega tu:");
    scanf("%d", &paise);

    // In order to understand the program we will take a sample cash amount that is paise variable = 2511 rs

    if (paise >= 2000) // YESS !
    {
        kitne_hain_do_hajaar_ke = paise / 2000; // 2511 / 2000 = 1 Quotient = no of notes of 2000
        paise = paise % 2000;                   // 2511 % 2000 = 511 Remainder = bache hue paise
        printf("%d ",kitne_hain_do_hajaar_ke);
    }
    else {printf("0 ");}

    if (paise >= 500 && paise < 2000) // YESS !
    {
        kitne_hain_panch_soo_ke = paise / 500; // 511 / 500 = 1 Quotient = no of notes of 500
        paise = paise % 500;                   // 511 % 500 = 11 Remainder = bache hue paise
        printf("%d ",kitne_hain_panch_soo_ke);
    }
    else {printf("0 ");}

    if (paise >= 100 && paise < 500) 
    {
        kitne_hain_soo_ke = paise / 100; // these statements won't execute in case of 2511
        paise = paise % 100; 
        printf("%d ",kitne_hain_soo_ke);
    }
    else {printf("0 ");}

    if (paise >= 50 && paise < 100) 
    {
        kitne_hain_pachaas_ke = paise / 50; // these statements won't execute in case of 2511
        paise = paise % 50;
        printf("%d ",kitne_hain_pachaas_ke); 
    }
    else {printf("0 ");}

    if (paise >= 20 && paise < 50)
    {
        kitne_hain_bees_ke = paise / 20; // these statements won't execute in the case of 2511 
        paise = paise % 20;
        printf("%d ",kitne_hain_bees_ke);
    }
    else {printf("0 ");}
    
    if (paise >=10 && paise < 20)  // YESS !
    {
        kitne_hain_das_ke= paise /10 ; // 11 / 10 = 1 Quotient = no of notes of 10 
        paise = paise % 10;   // 11 % 10 = 1 Remainder = bache hue paise
        printf("%d ",kitne_hain_das_ke);
    }
    else {printf("0 ");}

    if (paise>=5 && paise <10)
    {
        kitne_hain_paanch_ke= paise / 5; // these statements won't execute in this case of 2511
        paise = paise % 5 ; 
        printf("%d ",kitne_hain_paanch_ke);
    }
    else {printf("0 ");}

    if (paise >=2 && paise<5)
    {
        kitne_hain_do_ke=paise / 2 ; // these statements won't execute in this case of 2511
        paise = paise % 2;
        printf("%d ",kitne_hain_do_ke);
    }
    else {printf("0 ");}

    if (paise>=1 && paise<2)
    {
        kitne_hain_eak_ke=paise /1; // 1 / 1 = 1 Quotient = no of notes of 1
        paise = paise % 1 ; // 1 % 1 = 0 Remainder = bache hue paise = kuch ni bacha samosa kha liya canteen se
        printf("%d ",kitne_hain_eak_ke);
    }

    else {printf("0 ");}

}