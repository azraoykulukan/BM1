/* 1. Kullan�c�dan istenen iki farkl� say�y� yer de�i�tiriniz. Say�lar� kullan�c�dan
al�nan ilk haliyle ve yer de�i�tirilmi� haliyli ekrana ayr� ayr� yazd�r�n�z.
�rn: firstNumber = 5, secondNumber=9
firstNumber swap secondNumber ? firstNumber=9 , secondNumber=5 */
#include <stdio.h>
int main()
{
	int num1, num2;
	printf("Bir sayi girin\n");
	scanf("%d",&num1);
	printf("Ikinci sayiyi girin\n");
	scanf("%d",&num2);
	printf("Before swapping num1= %d , num2= %d\n",num1, num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("After swapping num1= %d , num2= %d\n",num1, num2);
	return 0;
}


/*2. Switch Case kullanarak kullan�c�dan al�nan giri� karakterinin sesli harf
olup olmad���n� kontrol eden program� yaz�n�z.*/
#include <stdio.h>
int main()
{
	char ch;
	printf("Bir harf girin=");
	scanf("%c",&ch);
	switch(ch)
{
	case 'A': case 'a':
	case 'E': case 'e':
	case'I': case 'i':
	case 'O': case 'o':
	case 'U': case 'u':
	printf("Girdiginiz harf sesli harftir.");		
	break;
	default:
	printf("Girdiginiz harf sesli harf degildir.");
	}
	return 0;
}


/*3. �f else yap�s� kullanarak kullan�c�dan al�nan bir saat diliminin 10�dan
k���k olma durumunda G�nayd�n yazd�ran, 10 ile 18 saatleri aras�nda
ise
iyi g�nler yazd�ran bunun d���nda iyi ak�amlar yazd�ran program yaz�n�z.
�rn: time =15 time&gt;=10 &amp; time&lt;18 =&gt; ��yi g�nler� */
#include <stdio.h>
int main()
{
	int c;
	printf("Saat dilimini girin");
	scanf("%d",&c);
	if(c<=10)
	printf("Gunaydin!");
	else if(c>10 && c<18)
	printf("Iyi Gunler!");
	else
	printf("Iyi Aksamlar!");
	return 0;
}


/*4. ald��� notun ortalamas�n� hesaplayan ve ortalamaya g�re harf notunu
hesaplayan program� yaz�n.
�rn: Kimya:70 Matematik:80 Fizik:100 �ngilizce:50 T�rk�e:100
Toplam: 70 + 80 + 100 + 50 + 100 = 400
Ortalama = (400/500)*100= 80 ( Ort&gt;=90 ? A, Ort&gt;=80 ? B, Ort&gt;=70 ? C,

Ort&gt;=60 ? D, Ort&gt;=80 ? E)

Harf Notunuz: B */
#include <stdio.h>
int main()
{
	int a,b,c,d,e;
	double ort;
	printf("5 Not giriniz");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	ort=(a+b+c+d+e)/5;
	if(ort>=90)
	printf("Ortalamaniz= %lf Harf Notunuz=A",ort);
	else if(ort<90 && ort>=80)
		printf("Ortalamaniz= %lf Harf Notunuz=B",ort);
		else if(ort<80 && ort>=70)
			printf("Ortalamaniz= %lf Harf Notunuz=C",ort);
			else if(ort<70 && ort>=60)
				printf("Ortalamaniz= %lf Harf Notunuz=D",ort);
				else
					printf("Ortalamaniz= %lf Harf Notunuz=E",ort);
					return 0;
}


/*5. Verilen bi�imde iki say� ve kullan�c�dan bir karakter isteyin. Bunlar�
num1, op ve num2 gibi de�i�kenlerde saklay�n.
�rn: Switch(op) d�rt olas� op de�eri vard�r, yani &#39;+&#39;, &#39;-&#39;, &#39;*&#39; ve &#39;/&#39;. &#39;+&#39;
durumu i�in ekleme yap�n ve sonucu baz� de�i�kenlerde saklay�n, yani
sonu� = num1 + num2. Benzer �ekilde, &#39;-&#39; durumu i�in ��karma yap�n
ve sonucu baz� de�i�kenlerde saklay�n, yani sonu� = num1 - num2.
�arpma ve b�lme i�in i�lemi tekrarlay�n. Son olarak sonucun de�erini
yazd�r�n. */
#include <stdio.h>
int main()
{
	char op;
	float num1,num2;
	printf("Islemi seciniz (+, -, *, /)");
	scanf("%c",&op);
	printf("2 sayi giriniz\n");
	scanf("%f%f",&num1,&num2);
	switch(op)
	{
	case '+': 
	printf("Sonuc= %f\n",(num1+num2)); 	break;
	case '-': 
	printf("Sonuc= %f\n",(num1-num2));	break;
	case '*': 
	printf("Sonuc= %f\n",(num1*num2));	break;
	case '/': 
	printf("Sonuc= %f\n",(num1/num2));	break;
	default: printf("Yanlis karakter girdiniz\n");
		break;
	}
	return 0;
}

