#include <stdio.h>

int faktoriyel(int);

int main(){

int sayi,sonuc;

printf("Faktoriyeli alinacak sayi :\n";
scanf("%d",&sayi);
sonuc=faktoriyel(sayi);
printf("%d nin faktoriyeli %d dir.",sayi,sonuc);
return 0;
}

int faktoriyel(int sayi){
if(sayi==1 || sayi==0) return 1;
else return faktoriyel(sayi)*faktoriyel(sayi-1);
}
