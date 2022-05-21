#include <stdio.h>
#include <stdlib.h>


void judul();
void pertambahan();
void pengurangan();
void perkalian();
void pembagian();
void modulus();
int validasi();
int checkinput();
int validasinol();
void akhir();

int main(){
	int pilih;
	char ulang;
	
	judul();
	printf("\n\n\n\n\n\t\t\t\t\t\t\t*********************************");
	printf("\n\t\t\t\t\t\t\t*** Tekan Enter untuk memulai ***		 ");
	printf("\n\t\t\t\t\t\t\t*********************************\n\n\n  ");
	system("pause");
	system("cls");
	
	do{
		system("cls");
	printf("\n\n\n\t\t==========KALKULATOR==========");
	printf("\n\n\t\t\t1. Pertambahan                ");
	printf("\n\t\t\t2. Pengurangan                  ");
	printf("\n\t\t\t3. Perkalian                    ");
	printf("\n\t\t\t4. Pembagian                    ");
	printf("\n\t\t\t5. Modulus                      ");
	printf("\n\t\t\t6. Keluar                       ");
	printf("\n\n\t\t==============================  ");
	printf("\n\n\t\tMasukkan Pilihan anda : ");
	pilih=validasi();
	system("cls");
	
	switch(pilih){
		case 1 :
			pertambahan();
			break;
			
		case 2 :
			pengurangan();
			break;
			
		case 3 :
			perkalian();
			break;
		
		case 4 :
			pembagian();
			break;
			
		case 5 :
			modulus();
			break;
	}
	
	printf("\n\nUlangi Lagi (Y/T) ? ");
	scanf("%s", &ulang);
	}while (ulang == 'Y' || ulang == 'y');
	system("cls");
	
	akhir();
	
	return 0;
}


void judul(){
	printf("\t\t\t  =========== MODUL I ===========						");
	printf("\n\t\t\t    PROGRAM KALKULATOR SEDERHANA					");
	printf("\n\t\t\t\t   KELOMPOK 04									");
	printf("\n\n\t\t\t\tAnggota Kelompok : 								");
	printf("\n\n\t\tKadek Rega Prawira Suyoga 		(2105551005)		");
	printf("\n\t\tIda Bagus Gede Surya Mahendra 		(2105551040)	");
	printf("\n\t\tNi Kadek Juniawati 			(2105551041)			");
	printf("\n\t\tNi Kadek Dheananda Astini 		(2105551120)		");
	printf("\n\t\tNata Nara Narendra Putra Suanda 	(2105551141)		");
	printf("\n\t\tPutu Audy Praja Kusuma 			(2105551154)		");
	printf("\n\t\t_____________________________________________________	");
}

void pertambahan(){
	int a, b, hasil;
		printf("=== PERTAMBAHAN ===");
		printf("\n____________________________");
		printf("\n\nMasukkan Angka Pertama \t: ");		
		a=checkinput();
		printf("Masukkan Angka Kedua \t: ");
		b=checkinput();
		system("cls");
		hasil = a + b;
		printf("\n\t%d + %d = %d", a, b, hasil);
}

void pengurangan(){
	int a, b, hasil;
	printf("=== PENGURANGAN ===");
	printf("\n____________________________");
	printf("\n\nMasukkan Angka Pertama \t: ");
	a=checkinput();
	printf("Masukkan Angka Kedua \t: ");
	b=checkinput();
	system("cls");
	hasil = a - b;
	printf("\n\t%d - %d = %d", a, b, hasil);
}

void perkalian(){
	int a, b, hasil;
	printf("=== PERKALIAN ===				");
	printf("\n\n____________________________");
	printf("\n\nMasukkan Angka Pertama \t: ");
	a=checkinput();
	printf("Masukkan Angka Kedua \t: ");
	b=checkinput();
	system("cls");
	hasil = a * b;
	printf("\n\t%d x %d = %d", a, b, hasil);
}

void pembagian(){
	int a, b, hasil;
	printf("=== PEMBAGIAN ===");
	printf("\n\n____________________________");
	printf("\n\nMasukkan Angka Pertama \t: ");
	a=validasinol();
	printf("Masukkan Angka Kedua \t: ");
	b=validasinol();
	system("cls");	
	hasil = a / b;
	printf("\n\t%d : %d = %d", a, b, hasil);
}

void modulus(){
	int a, b, hasil;
	printf("=== MODULUS ===");
	printf("\n\n____________________________");
	printf("\n\nMasukkan Angka Pertama \t: ");
	a=validasinol();
	printf("Masukkan Angka Kedua \t: ");
	b=validasinol();
	system("cls");
	hasil=a%b;
	printf("\n\t%d mod %d = %d", a, b, hasil);
}

int validasi() {
    int nilai;
	char check;
	
    if (scanf("%i%c", &nilai, &check) != 2 || check != '\n') {
    	fflush(stdin);
		printf("\nNilai yang anda masukan tidak valid!\nMasukan ulang : ");
        return validasi();
        printf("\n===============================================\n");
	} else if (nilai < 0 || nilai > 6) {
		printf("\nNilai yang anda masukan tidak valid!\nPilih antara 1-6 : ");
		return validasi();
        printf("\n===============================================\n");
	} else {
        return nilai;
    }
}

int checkinput() {
    int nilai;
	char check;
	
    if (scanf("%i%c", &nilai, &check) != 2 || check != '\n') {
    	fflush(stdin);
		printf("\nNilai yang anda masukan tidak valid!\nMohon masukan angka : ");
        return checkinput();
        printf("\n===============================================\n");
	} else {
        return nilai;
    }
}

int validasinol() {
    int nilai;
	char check;
	
    if (scanf("%i%c", &nilai, &check) != 2 || check != '\n') {
    	fflush(stdin);
		printf("\nNilai yang anda masukan tidak valid!\nMohon masukan angka : ");
        return validasinol();
        printf("\n===============================================\n");
	} else if (nilai <= 0) {
		printf("\nNilai yang anda masukan tidak valid!\nMohon masukan bilangan selain 0 dan negatif : ");
		return validasinol();
        printf("\n===============================================\n");	
	} else {
        return nilai;
    }
}

void akhir(){
	system("cls");
	printf ("-----------------------------------------------\n");
	printf ("* TERIMA KASIH SUDAH MENGGUNAKAN PROGRAM KAMI *\n");
	printf ("*             FROM KELOMPOK 04                *\n");
	printf ("-----------------------------------------------\n");
	
}
