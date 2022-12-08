
#include <stdio.h>
int main()
   { 




     //Draw a flowchart to add two numbers entered by user.
    /*int a, b, toplam;
    printf("Birinci Sayiyi Giriniz:");
    scanf_s("%d", &a);
    printf("Ikinci Sayiyi Giriniz:");
    scanf_s("%d", &b);

    toplam = a + b;

    printf("Iki Sayinin Toplami: %d", toplam);*/




    //Calculate the area of a circle with given radius.

    /*int pi, r, alan;

    pi = 3;

    printf("Dairenin Yaricapini Giriniz:");
    scanf_s("%d", &r);

    alan = pi * r * r;

    printf("Dairenin Alani: %d\n", alan);
    */


    //Determine and Output Whether Number N is Even or Odd.

    /*int N;

    printf("Sayiyi Giriniz:");
    scanf_s("%d", &N);

    if (N%2 == 0)
    {
        printf("Sayi Cifttir");
    }
    else
    {
        printf("Sayi Tektir");
    }
    */


    //Determine Whether a Temperature is Below or Above the Freezing Point.

    /*int t, fp;

    fp = 0;

    printf("Hava Sicakligini Celcius Derece Cinsinden Giriniz:");
    scanf_s("%d", &t);

    if (t<fp)
    {
        printf("Hava Donma Sicakliginin Altinda.");
    }
    else
    {
        printf("Hava Donma Sicakliginin Uzerinde.");
    }
    */




    //Convert Temperature from Fahrenheit (℉) to Celsius (℃).

    /*int f, c;

    printf("Sicakligi Fahrenheit Cinsinden Giriniz:");
    scanf_s("%d", &f);

    c = (f - 32) * 5 / 9;

    printf("Sicakligin Celciusa Donmus Degeri: %d", c);
    */




    //Write an algorithm and draw a flowchart to convert the length in feet to centimeter.

    /*int f, cm;

    printf("Feet Cinsinden Uzunluk Giriniz:");
    scanf_s("%d", &f);

    cm = f * 30;

    printf("Girilen Uzunlugun CM Degeri: %d", cm);
    */

    //Write an algorithm and draw a flowchart to print the square of all numbers from 1 to10.

    /*int sayı, sayı2;

    for ( sayı = 1; sayı < 10; sayı++)
    {
        sayı2 = sayı * sayı;
        printf("%d\n",sayı2);
    }
    */

    //Write an algorithm and draw a flowchart to print the SUM of numbers from LOW to HIGH. Test with LOW=3 and HIGH=9.

    /*int sayi, toplam;

    toplam = 0;

    for ( sayi = 3; sayi < 9; sayi++)
    {
        toplam = toplam + sayi;
    }
    printf("3 den 9 a kadar olan sayilarin toplami: %d",toplam);
    */


    
    //en buyuk sayıyı bulma
    /*int a, b, c;

    printf("Uc Tane Sayi Giriniz:");
    scanf_s("%d%d%d",&a,&b,&c);
    
    if (a>b && a>c)
    {
        printf("En buyuk sayi: %d\n", a);
    }
    else if (b>a && b>c)
    {
        printf("En buyuk sayi: %d\n", b);
    }
    else
    {
        printf("En buyuk sayi: %d\n", c);
    }*/


    //Write an algorithmand draw a flowchart to print all numbers between LOWand HIGH that are divisible by NUMBER.

    //Draw a flowchart for a program that reads 10 numbers from the user and prints out their sum, and their product.
   
    /*int a, toplam, sayac;

    toplam = 0;

    for ( sayac = 1; sayac < 11; sayac++)
    {
        printf("Sayi giriniz:");
        scanf_s("%d", &a);
        printf("%d.sayi: %d\n", sayac, a);
        toplam = toplam + a;
    }
    printf("Toplam: %d", toplam);
    */

    
    //Write an algorithm and draw a flowchart to count and print all numbers from LOW to HIGH by steps of STEP. Test with LOW=0 and HIGH=100 and STEP=5.

    /*int sayı, low, high, sayac, artis;

    sayac = 0;

    printf("En Dusuk Degeri Giriniz:");
    scanf_s("%d", &low);

    printf("En Buyuk Degeri Giriniz:");
    scanf_s("%d", &high);

    printf("Artis Miktarini Giriniz:");
    scanf_s("%d", &artis);

    for ( sayac = low; sayac < high; sayac+=artis)
    {
        printf("%d\n", sayac);
    }*/





    //Write an algorithm and draw a flowchart to print the multiplication table for 6's.
    
    /*int sayac, N;

    sayac = 0;

    printf("Carpim Taplosunu Yazdirmak Istediginiz Sayiyi Girin:");
    scanf_s("%d", &N);

    for ( sayac = 0; sayac < 100; sayac+=N)
    {
        printf("%d\n", sayac);
    }
    */


    //Draw a flowchart for computing factorial N (N!).

    /*int sayi, fak, i;

    fak = 1;

    printf("Faktorielini Bulmak Istediginiz Sayiyi Giriniz:");
    scanf_s("%d", &sayi);

    for ( i = sayi; i >= 1; i--)
    {
        fak = fak * i;
    }
    printf("Sayinin Faktorieli: %d", fak);
    */




    //Draw a flow chart to print all natural numbers in reverse (from n to 1).


    /*int sayi, sayac;

    printf("Bir Sayi Giriniz:");
    scanf_s("%d", &sayi);

    for ( sayac = sayi; sayac > 0; sayac--)
    {
        printf("%d\n", sayac);
    }
    */



    //Design an algorithm which generates even numbers between 1000 and 2000 and then prints them in the standard output. It should also print total sum.

    /*int sayac, toplam, max, min;

    toplam = 0;

    printf("Max Degeri Giriniz:");
    scanf_s("%d", &max);

    printf("Min Degeri Giriniz:");
    scanf_s("%d", &min);

    for ( sayac = min; sayac < max; sayac++)
    {
        toplam = toplam + sayac;
    }
    printf("Max ve Min degerler arasindaki sayilarin toplami: %d", toplam);
    */
    
    
    //Draw a flow chart to print multiplication table of any number.

    /*int sayac, N;

    sayac = 0;

    printf("Carpim Taplosunu Yazdirmak Istediginiz Sayiyi Girin:");
    scanf_s("%d", &N);

    for ( sayac = 0; sayac < 100; sayac+=N)
    {
        printf("%d\n", sayac);
    }
    */


    //Draw a flow chart to count number of digits in a number.

    /*int sayi, basamak;
    
    basamak = 0;

    printf("Bir Sayi Giriniz:");
    scanf_s("%d", &sayi);

    while (sayi>0)
    {
        sayi = sayi / 10;
        basamak++;
    }
    printf("Basamak Sayisi: %d", basamak);
    */


    //Draw a flow chart to find first and last digit of a number.

    /*int sayi, basamak1, basamak2;


    printf("Bir Sayi Giriniz:");
    scanf_s("%d", &sayi);

    basamak1 = sayi % 10;
    
    while (sayi>=10)
    {
        sayi = sayi / 10;
        basamak2 = sayi % 10;
    }
    printf("Sayinin son basamagi: %d\n", basamak1);
    printf("Sayinin ilk basamagi: %d\n", basamak2);
    */


    //Draw a flow chart to swap first and last digits of a number.


    /*int n, reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf_s("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    printf("Reversed number = %d", reverse);*/
    

    
    //Draw a flow chart to check whether a number is palindrome or not.


    /*int n, remainder, real, reverse;

    printf("Enter an integer: ");
    scanf_s("%d", &n);

    reverse = 0;
    real = n;
    
    while (n > 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    
    if (reverse == real)
    {
        printf("Sayi Palindrome");
    }
    else
    {
        printf("Sayi Palindrome Degil");
    }*/
    
    return 0;
}
