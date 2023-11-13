#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void customer(){
	char a, c[5], nama[100], noTelp[20], b[4];
	int TipeMobil, harga, bayar, Paket;
	printf("Plat Nomor: ");
	scanf("%c %d %s\n", &a, &b, &c);
	printf("Nama: ");
	scanf("%[^\n]\n", nama);
	printf("No Telepon: ");
	scanf("%s\n",&noTelp);
    printf("Tipe Mobil:\n");
    printf("1. Mini Bus\n");
    printf("2. Sedan\n");
    printf("Pilih Tipe Mobil: ");
    scanf("%s", &TipeMobil); 
    printf("Paket:\n");
    printf("1. Bagus Banget\n");
    printf("2. Bagus\n");
    printf("3. Biasa Aja\n");
    printf("Pilih Paket: ");
    scanf("%d", &Paket);
    if(TipeMobil == 1 && Paket == 1){
        harga = 120000;
    } else if(TipeMobil == 1 && Paket == 2){
        harga = 70000;
    } else if(TipeMobil == 1 && Paket == 3){
        harga = 50000;
    } else if(TipeMobil == 2 && Paket == 1){
        harga = 100000;
    } else if(TipeMobil == 2 && Paket == 2){
        harga = 60000;
    } else if(TipeMobil == 2 && Paket == 3){
        harga = 40000;
    }
    printf("Total Harga: Rp. %d\n", harga);
    printf("Bayar: ");
    scanf("%d", &bayar);
    printf("Kembalian: %d\n", bayar-harga);
}
void menu(){
	int menu;
	printf("Menu: \n");
	printf("1. Customer\n");
	printf("2. Registrasi Member\n");
	printf("3. Laporan Pembelian\n");
	printf("4. Keluar\n");
	printf("Pilih Menu: ");
	scanf("%d", &menu);
	if(menu == 1){
		customer();
	} else if(menu == 2){
		
	} else if(menu == 3){
		
	} else if(menu == 4){
		return;
	}
}
void validasi(){
	int hasil1,hasil2,menu(),main();
	char username[10],password[10];
	char u1[]="admin",p1[]="1234";
	printf("Username\t: ");gets(username);
  	printf("Password\t: ");gets(password);
  	hasil1=strcmp(username,u1);
  	hasil2=strcmp(password,p1);
  	if(hasil1 == 0 && hasil2 == 0){
  		menu();
  		}
  	else{
  		printf("username salah\n\n"),main();
		}
	return;
}
int main(){
	
  printf("\t    Selamat datang di BINUS Car Wash\n");
  printf("\tJalan Pasir Kaliki No. 25, Kota Bandung\n");
  printf("\t\t     (022) 123456\n\n");
  validasi();
  return 0;
}





