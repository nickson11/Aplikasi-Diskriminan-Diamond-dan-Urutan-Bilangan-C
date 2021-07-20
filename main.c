#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char pilih;
    x:
    printf("======= APLIKASI SAYA =======\n");
    printf("1. Menghitung Diskriminan \n");
    printf("2. Diamond \n");
    printf("3. Urutkan \n");
    printf("4. Exit \n");
    printf("Masukkan Pilihan Anda : ");
    scanf("%s", &pilih);
    switch(pilih)
    {
    case '1':
        diskriminan();
        break;
    case '2':
        diamond();
        break;
    case '3':
        urutkan();
        break;
    case '4':
        exit(0);
        break;
    default:
        printf("Inputan Anda Salah !\n");
    }
    goto x;

    }

int diskriminan()
{
    float a,b,c,D;
    printf("Masukkan Nilai A : ");
    scanf("%f",&a);
    printf("Masukkan Nilai B : ");
    scanf("%f",&b);
    printf("Masukkan Nilai C : ");
    scanf("%f",&c);
    D = b * b - 4 * a * c;
    printf("Diskriminan = %.2f \n", D);
    return 0;
}

int diamond()
{
int i,j,k;
printf("Masukkan Jumlah Angka : ");
scanf("%d",&k);
    for(i=1; i<=k; i++)
        {
        for(j=1; j<=k-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++)
            {
                printf("*");
            }
            printf("\n");
            }
    for(i=1; i<k; i++)
        {
            for(j=1; j<=i; j++)
        {
            printf(" ");
        }
        for(j=2*k-2*i-1; j>=1; j--)
        {
            printf("*");
        }
        printf("\n");
        }
return(0);
}

int urutkan ()
{
    int a,b,c,pertama,kedua,ketiga;
    printf("Masukkan Bilangan Pertama : ");
    scanf("%d", &a);
    printf("Masukkan Bilangan Kedua   : ");
    scanf("%d", &b);
    printf("Masukkan Bilangan Ketiga  : ");
    scanf("%d", &c);

    if(a>b){
    if(b>c){
        pertama=a;kedua=b;ketiga=c;
    }
    else{
    if(a>c){
        pertama=a;kedua=c;ketiga=b;
    }else{
        pertama=c;kedua=a;ketiga=b;
    }
        }
    }else{
    if(b>c){
    if(a>c){
        pertama=b;kedua=a;ketiga=c;
    }else{
        pertama=b;kedua=c;ketiga=a;
    }
    }else{
    if(c>a){
    if(a>b){
        pertama=c;kedua=a;ketiga=b;
    }else{
        pertama=c;kedua=b;ketiga=a;
    }
    }
  }
 }
 printf("Bilangan %i Terbesar, %i , %i \n",pertama,kedua,ketiga);
 return 0;

}





