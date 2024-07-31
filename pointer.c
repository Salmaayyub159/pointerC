#include <stdio.h>

int main()
{
    int salary=10000000;
    int *ptr= &salary;
   
//    menampilkan value dari salary melalui pointer
//  ptr=&salary
   printf("Isi dari *ptr=%d\n",*ptr);
//    menampilkan alamat memory dari salary
   printf("Isi dari ptr=%p\n",ptr);

// mengambil inputan untuk salary menggunakan pointer
   printf("Masukkan nilai salary yang anda inginkan:");
   scanf("%d",ptr); //kenapa bukan menggunakan var salary?

//    menapilkan nilai salary yang telah diganti melalui pointer menggunkan pointer
   printf("Nilai yang diinput:%d\n",*ptr);




}