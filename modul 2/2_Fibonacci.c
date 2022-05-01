#include <stdio.h>
#include <stdlib.h>

void deretFibonacciRekursif();
/* merupakan suatu prosedur untuk meminta inputan berupa jumlah bilangan fibonacci yang ingin ditampilkan
   prosedur ini akan menampilkan deret bilangan fibonacci sebanyak nilai yang diinputkan user */

int fibonacciRekursif(int bilangan);
/* merupakan suatu fungsi yang menggunakan metode rekursif untuk menghitung bilangan fibonacci
   fungsi ini mengembalikan bilangan fibonacci berdasarkan bilangan yang diinputkan*/

void deretFibonacciIteratif();
/* merupakan suatu prosedur untuk meminta inputan berupa jumlah bilangan fibonacci yang ingin ditampilkan
   prosedur ini akan menampilkan deret bilangan fibonacci sebanyak nilai yang diinputkan user */

int clean();
/* merupakan suatu fungsi yang menunjang validasi yang bertipe data selain float.
   fungsi ini akan membersihkan sisa inputan yang salah yang masih tersimpan di scanf agar scanf dapat menampung inputan yang baru */

int main(){
	char pilihan, enterCheck; // variabel pilihan untuk menampung hasil pilihan menu oleh user. variabel enterCheck untuk validasi inputan
	system("cls"); // clear screen

        printf("\t\t-------------------------------------------\n");
		printf("\t\t--         PROGRAM DERET FIBONACII       --\n");
		printf("\t\t-------------------------------------------\n");
		printf("\t\t==============[    MENU     ]==============\n");
		printf("\t\t          1. Fibonacci Rekrusif            \n");
		printf("\t\t          2. Fibonacci Iteratif            \n");
		printf("\t\t          3. Exit                          \n");
        printf("\t\t-------------------------------------------\n");




	do{
		printf("\t\tMasukkan pilihan: ");
		if(((scanf(" %c%c", &pilihan, &enterCheck)) != 2 || enterCheck != '\n') && clean()){ // meminta inputan pilihan menu dari user sekaligus divalidasi
			printf("\t\tInputan salah! Mohon hanya memasukkan angka dari 1 hingga 3\n\n"); // menampilkan error apabila inputan salah
		}
		else{
			if(pilihan == '1'){ // apabila user memilih pilihan 1 (Fibonacci Rekursif) maka
				deretFibonacciRekursif(); // memanggil prosedur deretFibonacciRekursif
				break; // keluar dari perulangan
			}
			else if(pilihan == '2'){ // apabila user memilih pilihan 2 (Fibonacci Iteratif) maka
				deretFibonacciIteratif(); // memanggil PROSEDUR deretFibonacciIteratif
				break; // keluar dari perulangan
			}
			else if(pilihan == '3'){ // apabila user memilih pilihan 3 (Tutup Program) maka
				exit(0); // menutup program
				break; // keluar dari perulangan
			}
			else{
				printf("\t\tInputan salah! Mohon hanya memasukkan angka dari 1 hingga 3\n\n"); // menampilkan error apabila inputan salah
			}
		}
	}while(1);

	return 0; // menutup program
}

void deretFibonacciRekursif(){
	char pilihan, enterCheck; // variabel pilihan untuk menampung hasil pilihan menu oleh user. variabel enterCheck untuk validasi inputan
	int jumlahBilangan, i;
	/* mendeklarasikan beberapa variabel dengan tipe data integer:
	   variabel jumlahBilangan => untuk menampung jumlah bilangan prima yang akan ditampilkan
	   variabel i => untuk menampung nilai iterasi pada perulangan for */

	system("cls"); // clear screen

	do{
        printf("\t\t-------------------------------------------\n");
		printf("\t\t--       PROGRAM FIBONACCI REKURSIF      --\n");
		printf("\t\t-------------------------------------------\n");
		printf("\t\tMasukkan jumlah bilangan fibonacci: ");
		if(((scanf("%d%c", &jumlahBilangan, &enterCheck)) != 2 || enterCheck != '\n') && clean()){ // meminta inputan jumlah bilangan dari user sekaligus divalidasi
			printf("\t\tInputan salah! Mohon hanya memasukkan angka lebih dari 0\n\n"); // menampilkan error apabila inputan salah
		}
		else{
			if(jumlahBilangan <= 0){ // apabila jumlah bilangan yang diinputkan lebih kecil dari 0 maka
				printf("\t\tInputan salah! Mohon hanya memasukkan angka lebih dari 0\n\n"); // menampilkan error apabila inputan salah
			}
			else{ // selain itu maka
				break; // keluar dari perulangan
			}
		}
	}while(1);

	printf("\t\tDeret bilangan fibonacci yaitu:");
	for(i=0; i<jumlahBilangan; i++){
		if(i == 0 && i == jumlahBilangan - 1){ // apabila iterasi bernilai 0 dan merupakan bilangan terakhir maka
			printf(" %d.", fibonacciRekursif(i)); // tampilkan dengan format berikut
		}
		else{ // selain dari itu
			if(i == jumlahBilangan - 1){ // apabila sudah mencapai bilangan terakhir maka
				printf(" dan %d.", fibonacciRekursif(i)); // tampilkan dengan format berikut
			}
			else{ // apabila bukan merupakan bilangan terakhir maka
				printf(" %d,", fibonacciRekursif(i)); // tampilkan dengan format berikut
			}
		}
	}

	printf("\n\n\t\tApakah Anda ingin menampilkan deret bilangan fibonacci ulang?\n\t\tTekan Y untuk mengulang, N untuk kembali ke menu, dan K untuk menutup program.");
	do{
		printf("\n\t\tMasukkan pilihan: ");
		if(((scanf(" %c%c", &pilihan, &enterCheck)) != 2 || enterCheck != '\n') && clean()){ // meminta inputan pilihan untuk mengulang program atau tidak sekaligus divalidasi
			printf("\t\tInputan salah! Tekan Y untuk mengulang, N untuk kembali ke menu, dan K untuk menutup program.\n\n"); // menampilkan error apabila inputan salah
		}
		else{
			if(pilihan == 'Y' || pilihan == 'y'){ // apabila ingin mengulang maka
				deretFibonacciRekursif(); // panggil lagi prosedur deretFibonacciRekursif
				break; // keluar dari perulangan
			}
			else if(pilihan == 'N' || pilihan == 'n'){ // apabila ingin kembali maka
				main(); // kembali lagi ke menu awal
				break; // keluar dari perulangan
			}
			else if(pilihan == 'K' || pilihan == 'k'){ // apabila ingin menutup program maka
				exit(0); // menutup program
				break; // keluar dari perulangan
			}
			else{ // selain dari itu maka
				printf("\t\tInputan salah! Tekan Y untuk mengulang, N untuk kembali ke menu, dan K untuk menutup program.\n\n"); // menampilkan error apabila inputan salah
			}
		}
	}while(1);
}




int fibonacciRekursif(int bilangan){
	if(bilangan == 0){ // apabila bilangan sama dengan 0
		return 0; // mengembalikan nilai 0
	}
	else if(bilangan == 1){ // apabila bilangan sama dengan 1
		return 1; // mengembalikan nilai 1
	}
	else{ // selain dari itu
		return fibonacciRekursif(bilangan-2) + fibonacciRekursif(bilangan-1); // mengembalikan nilai dari pemanggilan fungsi dirinya sendiri
	}
}

void deretFibonacciIteratif(){
	char pilihan, enterCheck; // variabel pilihan untuk menampung hasil pilihan menu oleh user. variabel enterCheck untuk validasi inputan
	int jumlahBilangan, i;
	/* mendeklarasikan beberapa variabel dengan tipe data integer:
	   variabel jumlahBilangan => untuk menampung jumlah bilangan prima yang akan ditampilkan
	   variabel i => untuk menampung nilai iterasi pada perulangan for */

	system("cls"); // clear screen

	do{
        printf("\t\t-------------------------------------------\n");
		printf("\t\t--       PROGRAM FIBONACCI ITERATIF      --\n");
		printf("\t\t-------------------------------------------\n");
		printf("\t\tMasukkan jumlah bilangan fibonacci: ");
		if(((scanf("%d%c", &jumlahBilangan, &enterCheck)) != 2 || enterCheck != '\n') && clean()){ // meminta inputan jumlah bilangan dari user sekaligus divalidasi
			printf("\t\tInputan salah! Mohon hanya memasukkan angka lebih dari 0\n\n"); // menampilkan error apabila inputan salah
		}
		else{
			if(jumlahBilangan <= 0){ // apabila jumlah bilangan yang diinputkan lebih kecil dari 0 maka
				printf("\t\tInputan salah! Mohon hanya memasukkan angka lebih dari 0\n\n"); // menampilkan error apabila inputan salah
			}
			else{ // selain itu maka
				break; // keluar dari perulangan
			}
		}
	}while(1);

	int temp[jumlahBilangan]; // mendeklarasikan variabel dengan tipe data integer berbentuk array dengan panjang array sebesar jumlah bilangan yang diinputkan

	printf("\t\tDeret bilangan fibonacci yaitu:");
	for(i=0; i<jumlahBilangan; i++){ // melakukan perulangan sebanyak jumlah bilangan yang diinput
		if(i==0 || i==1){ // apabila iterasi bernilai 0 atau 1 maka
			temp[i] = i; // masukkan ke dalam array pada index ke-i nilai dari i
			if(i == 0 && i == jumlahBilangan - 1){ // apabila iterasi bernilai 0 dan merupakan bilangan terakhir maka
				printf(" %d.", temp[i]); // tampilkan dengan format berikut
			}//cuma input 1
			else{ // selain dari itu
				if(i == jumlahBilangan - 1){ // apabila sudah mencapai bilangan terakhir maka
					printf(" dan %d.", temp[i]); // tampilkan dengan format berikut
				}// untuk menampilkan inputan terakhir
				else{ // apabila bukan merupakan bilangan terakhir maka
					printf(" %d,", temp[i]); // tampilkan dengan format berikut
				}
			}
		}
		else{ // apabila iterasi tidak bernilai 0 dan 1 maka
			temp[i] = temp[i-2] + temp[i-1]; // tambahkan ke dalam array pada index ke-i nilai dari array pada index ke-(i-2) + index ke-(i-1)
			if(i == jumlahBilangan - 1){ // apabila sudah mencapai bilangan terakhir maka
				printf(" dan %d.", temp[i]); // tampilkan dengan format berikut
			}
			else{ // apabila bukan merupakan bilangan terakhir maka
				printf(" %d,", temp[i]); // tampilkan dengan format berikut
			}
		}
	}

	printf("\n\n\t\tApakah Anda ingin menampilkan deret bilangan fibonacci ulang?\n\t\tTekan Y untuk mengulang, N untuk kembali ke menu, dan K untuk menutup program.\n");
	do{
		printf("\n\t\tMasukkan pilihan: ");
		if(((scanf(" %c%c", &pilihan, &enterCheck)) != 2 || enterCheck != '\n') && clean()){ // meminta inputan pilihan untuk mengulang program atau tidak sekaligus divalidasi
			printf("\t\tInputan salah! Tekan Y untuk mengulang, N untuk kembali ke menu, dan K untuk menutup program.\n\n"); // menampilkan error apabila inputan salah
		}
		else{
			if(pilihan == 'Y' || pilihan == 'y'){ // apabila ingin mengulang maka
				deretFibonacciIteratif(); // panggil lagi prosedur deretFibonacciIteratif
				break; // keluar dari perulangan
			}
			else if(pilihan == 'N' || pilihan == 'n'){ // apabila ingin kembali maka
				main(); // kembali lagi ke menu awal
				break; // keluar dari perulangan
			}
			else if(pilihan == 'K' || pilihan == 'k'){ // apabila ingin menutup program maka
				exit(0); // menutup program
				break; // keluar dari perulangan
			}
			else{ // selain dari itu maka
				printf("\t\tInputan salah! Tekan Y untuk mengulang, N untuk kembali ke menu, dan K untuk menutup program.\n\n"); // menampilkan error apabila inputan salah
			}
		}
	}while(1);
};

int clean(){
	while(getchar() != '\n'); // apabila saat validasi inputan dilakukan terdapat kesalahan inputan,
	// maka fungsi ini akan membersihkan kesalahan inputan tersebut agar variabel dapat menampung inputan yang baru
	return 1;
}
