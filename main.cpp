#include<stdio.h> //Temel giriş - çıkış elemanlarını kullanmamızı sağlayan kütüphane.
#include<conio.h> //Bu kütüphaneyi getch(); kodu için ekledim.

int a,b,c,d,sayi; //kullanılacak sayıyı ve her basamak için değer tanımlıyorum.
int main()
{
printf ("4 BASAMAKLI COZUMLENECEK SAYIYI GIRINIZ :"); //sayıyı girmemiz istenir.
scanf ("%d", &sayi);
printf ("\a\n\n");

a=sayi/1000;                    //Çözümlenecek sayının binler basamağını bulmak için işlem yapar.
b=(sayi-(a*1000))/100;          //Çözümlenecek sayının yuzler basamağını bulmak için işlem yapar.
c=(sayi-(a*1000)-(b*100))/10;   //Çözümlenecek sayının onlar basamağını bulmak için işlem yapar.
d=sayi-(a*1000)-(b*100)-(c*10); //Çözümlenecek sayının birler basamağını bulmak için işlem yapar.

if((a<10 && a!=0)) //çözümlenecek sayı değeri 4 basamaklıysa işlem gerçekleşir.
{
printf ("\nverilen %d sayisinda:",sayi);
printf("\n%d tane binlik",a);         //sayıda kaç binlik olduğu gösterilir.
printf ("\n%d tane yuzluk",b);        //sayıda kaç yuzluk olduğu gösterilir.
printf ("\n%d tane onluk",c);         //sayıda kaç onluk olduğu gösterilir.
printf ("\n%d tane birlik vardir",d); //sayıda kaç birlik olduğu gösterilir.
}

else if(a>10) // eğer sayı 9999dan büyükse 4 basamaklı sayı girmemiz istenir.
{
        printf("Lutfen 4 basamakli sayi giriniz."); //uyarı mesajı
}

else if(a<1) // eğer sayı 1000den küçükse 4 basamaklı sayı girmemiz istenir.
{
        printf("Lutfen 4 basamakli sayi giriniz."); //uyarı mesajı
}

getch(); // Derleyicilerde ayarlar farklı olduğundan, kapanabilme ihtimaline karşı eklenmiştir.
return 0;
}
