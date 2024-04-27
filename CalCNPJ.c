#include<stdio.h>

int main()
{
    char cnpj[13];
    printf("\nDigite os 12 primeiros digitos do cnpj que deseja calcular os digitos verificadores: ");
    scanf("%12s", cnpj);

    //fazer oq era char virar inteiro pra prosseguir com os calculos

    int dig1 = cnpj[0] - '0';
    int dig2 = cnpj[1] - '0';
    int dig3 = cnpj[2] - '0';
    int dig4 = cnpj[3] - '0';
    int dig5 = cnpj[4] - '0';
    int dig6 = cnpj[5] - '0';
    int dig7 = cnpj[6] - '0';
    int dig8 = cnpj[7] - '0';
    int dig9 = cnpj[8] - '0';
    int dig10 = cnpj[9] - '0';
    int dig11 = cnpj[10] - '0';
    int dig12 = cnpj[11] - '0';


    int ver1 = ((dig1*5)+(dig2*4)+(dig3*3)+(dig4*2)+(dig5*9)+(dig6*8)+(dig7*7)+(dig8*6)+(dig9*5)+(dig10*4)+(dig11*3)+(dig12*2));
    ver1 = ver1 % 11;
    if (ver1 == 0)
        ver1 = 0;
    else
        ver1 = 11 - ver1;

    int ver2 = ((dig1*6)+(dig2*5)+(dig3*4)+(dig4*3)+(dig5*2)+(dig6*9)+(dig7*8)+(dig8*7)+(dig9*6)+(dig10*5)+(dig11*4)+(dig12*3)+(ver1*2));
    ver2 = ver2 % 11;
    if (ver2 == 0)
        ver2 = 0;
    else
        ver2 = 11 - ver2;

    printf("O CNPJ COM OS DIGITOS VERIFICADORES É: %d%d%d%d%d%d%d%d%d%d%d%d%-d%d", dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9, dig10, dig11, dig12, ver1, ver2);

}