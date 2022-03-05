#include <stdio.h>
#include<math.h>
#include <stdlib.h>

void judulProgram ();
void menuUtama ();
void menuSegitiga ();
void luas_segitigasembarang ();
void keliling_segitigasembarang ();
void menuBelahketupat();
void keliling_belahketupat ();
void luas_belahketupat ();
void menuJajargenjang ();
void keliling_jajargenjang ();
void luas_jajargenjang ();
void menuLingkaran ();
void keliling_lingkaran ();
void luas_lingkaran ();
void menuTrapesium ();
void keliling_trapesium ();
void luas_trapesium ();
double check();
void keluar ();


int main(){
	judulProgram ();
	menuUtama ();
}

void judulProgram (){
	printf("\n\n\n\n\n");
	printf("\t\t\t\t +--------------------------------------------+\n");
	printf("\t\t\t\t |             Program Bangun Datar           |\n");
	printf("\t\t\t\t +--------------------------------------------+\n");
	printf("\t\t\t\t |                                            |\n");
	printf("\t\t\t\t |               Dibuat Oleh :                |\n");
	printf("\t\t\t\t |                                            |\n");
	printf("\t\t\t\t |            -- Kelompok 04 --               |\n");
	printf("\t\t\t\t |                                            |\n");
	printf("\t\t\t\t |                                            |\n");
	printf("\t\t\t\t +--------------------------------------------+\n");
	printf("\n\n");
	printf("\t\t\t\t   ++++++++++ **Enter to Continue** +++++++++  \n");
	getch();
	system("cls");
}

void menuUtama (){
	
	int pilih;
	system("cls");
	printf("\n\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||          Welcome to Program Bangun Datar         ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
    printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||  [1] Segitiga Sembarang                          ||\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||  [2] Belah Ketupat                               ||\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||  [3] Jajar Genjang                               ||\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||  [4] Lingkaran                                   ||\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||  [5] Trapesium                                   ||\n");
	printf("\t\t\t\t ||                                                  ||\n");	
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||             [6] | Keluar dari program            ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t || >> Selamat datang, silahkan pilih : ");
	pilih=check();
	
	if (pilih==1){
		menuSegitiga ();
	}
	else if(pilih==2){
		menuBelahketupat ();
	}
	else if(pilih==3){
		menuJajargenjang ();
	}
	else if(pilih==4){
		menuLingkaran ();
	}
	else if(pilih==5){
		menuTrapesium();
	}
	else if(pilih==6){
		system("cls");
		printf("\n\n\n");
		printf("\t\t\t >>  Terima kasih telah menggunakan program kami! << \n");
		printf("\t\t\t >>               ENTER 1X UNTUK KELUAR!          << ");
	}
	else {
		system("cls");
		printf("\t\t\t >>  Masukan inputan yang benar! << \n");
		getch();
		menuUtama ();
	}
}

void menuSegitiga (){
	
	int pilih;
	system("cls");
	printf("\n\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||          Welcome to Program Bangun Datar         ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
    printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||  [1] Luas Segitiga Sembarang                     ||\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||  [2] Keliling Segitiga Sembarang                 ||\n");
	printf("\t\t\t\t ||                                                  ||\n");	
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||             [3] | Kembali ke menu                ||\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||             [4] | Keluar dari program            ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t || >> Selamat datang, silahkan pilih : ");
	pilih=check();
 
	if (pilih == 1){
		luas_segitigasembarang ();
	}
	else if (pilih ==2){
		keliling_segitigasembarang();
	}
	else if(pilih==3){
		menuUtama ();
	}
	else if(pilih==4){
		system("cls");
		printf("\n\n\n");
		printf("\t\t\t >>  Terima kasih telah menggunakan program kami! << \n");
		printf("\t\t\t >>               ENTER 1X UNTUK KELUAR!          << ");
	}
	else{
		system("cls");
		printf("\t\t\t >>  Masukan inputan yang benar! << \n");
		getch();
		menuSegitiga ();
	}
}	

void menuBelahketupat(){
	
	int pilih;
	system("cls");
	printf("\n\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||          Welcome to Program Bangun Datar         ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
    printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||  [1] Luas Belah Ketupat                          ||\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||  [2] Keliling Belah Ketupat                      ||\n");
	printf("\t\t\t\t ||                                                  ||\n");	
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||             [3] | Kembali ke menu                ||\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||             [4] | Keluar dari program            ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t || >> Selamat datang, silahkan pilih : ");
	pilih=check();
 
	if (pilih == 1){
		luas_belahketupat ();
	}
	else if (pilih ==2){
		keliling_belahketupat();
	}
	else if(pilih==3){
		menuUtama ();
	}
	else if(pilih==4){
		system("cls");
		printf("\n\n\n");
		printf("\t\t\t >>  Terima kasih telah menggunakan program kami! << \n");
		printf("\t\t\t >>               ENTER 1X UNTUK KELUAR!          << ");
	}
	else{
		system("cls");
		printf("\t\t\t >>  Masukan inputan yang benar! << \n");
		getch();
		menuBelahketupat ();
	}
}	

void menuJajargenjang(){
	
	int pilih;
	system("cls");
	printf("\n\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||          Welcome to Program Bangun Datar         ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
    printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||  [1] Luas Jajar Genjang                          ||\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||  [2] Keliling Jajar Genjang                      ||\n");
	printf("\t\t\t\t ||                                                  ||\n");	
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||             [3] | Kembali ke menu                ||\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||             [4] | Keluar dari program            ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t || >> Selamat datang, silahkan pilih : ");
	pilih=check();
 
	if (pilih == 1){
		luas_jajargenjang ();
	}
	else if (pilih ==2){
		keliling_jajargenjang();
	}
	else if(pilih==3){
		menuUtama ();
	}
	else if(pilih==4){
		system("cls");
		printf("\n\n\n");
		printf("\t\t\t >>  Terima kasih telah menggunakan program kami! << \n");
		printf("\t\t\t >>               ENTER 1X UNTUK KELUAR!          << ");
	}
	else{
		system("cls");
		printf("\t\t\t >>  Masukan inputan yang benar! << \n");
		getch();
		menuJajargenjang ();
	}
}	

void menuLingkaran(){
	
	int pilih;
	system("cls");
	printf("\n\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||          Welcome to Program Bangun Datar         ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
    printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||  [1] Luas Lingkaran                              ||\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||  [2] Keliling Lingkaran                          ||\n");
	printf("\t\t\t\t ||                                                  ||\n");	
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||             [3] | Kembali ke menu                ||\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||             [4] | Keluar dari program            ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t || >> Selamat datang, silahkan pilih : ");
	pilih=check();
 
	if (pilih == 1){
		luas_lingkaran ();
	}
	else if (pilih ==2){
		keliling_lingkaran ();
	}
	else if(pilih==3){
		menuUtama ();
	}
	else if(pilih==4){
		system("cls");
		printf("\n\n\n");
		printf("\t\t\t >>  Terima kasih telah menggunakan program kami! << \n");
		printf("\t\t\t >>               ENTER 1X UNTUK KELUAR!          << ");
	}
	else{
		system("cls");
		printf("\t\t\t >>  Masukan inputan yang benar! << \n");
		getch();
		menuLingkaran ();
	}
}	

void menuTrapesium(){
	
	int pilih;
	system("cls");
	printf("\n\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||          Welcome to Program Bangun Datar         ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
    printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||  [1] Luas Trapesium                              ||\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||  [2] Keliling Trapesium                          ||\n");
	printf("\t\t\t\t ||                                                  ||\n");	
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||             [3] | Kembali ke menu                ||\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||             [4] | Keluar dari program            ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t || >> Selamat datang, silahkan pilih : ");
	pilih=check();
 
	if (pilih == 1){
		luas_trapesium ();
	}
	else if (pilih ==2){
		keliling_trapesium();
	}
	else if(pilih==3){
		menuUtama ();
	}
	else if(pilih==4){
		system("cls");
		printf("\n\n\n");
		printf("\t\t\t >>  Terima kasih telah menggunakan program kami! << \n");
		printf("\t\t\t >>               ENTER 1X UNTUK KELUAR!          << ");
	}
	else{
		system("cls");
		printf("\t\t\t >>  Masukan inputan yang benar! << \n");
		getch();
		menuTrapesium ();
	}
}	

double check(){
	double input;
	char checkinput;
	int cek;
	
	cek=scanf("%lf%c", &input,&checkinput);
	
	if(cek!=2 || checkinput!='\n'){
		system("cls");
		printf("\n\n\n");
		printf("\t\t\t >>  input anda invalid!  << \n\n");
		system("pause");
		system("cls");
		cek=1;
		fflush(stdin);
		menuUtama();
	}
	else if(input<=0){
		printf("\t\t\t\t ||        >> input anda invalid!  << \n");
		printf("\t\t\t\t || >> Masukkan angka selain -/0 : ");
		fflush(stdin);
		cek=1;
		return check();
	}
	else{
		cek=0;
		fflush(stdin);
		return input;
	}
	
}

	
void luas_segitigasembarang (){
	int pilih;
	float sisi, keliling, a, b, c, luas;
	system("cls");
	printf("\n\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||          HITUNG LUAS SEGITIGA SEMBARANG          ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t || masukan sisi a :");
	a=check();
	printf("\t\t\t\t || masukan sisi b :");
	b=check();
	printf("\t\t\t\t || masukan sisi c :");
	c=check();
	
	if(a==b || a==c || b==c){
		printf("\t\t\t\t || >>    Panjang sisi tidak boleh sama !    << \n");
		getch();
		system("cls");
		luas_segitigasembarang();
	}
	else{
		keliling = a+b+c;
		sisi = keliling/2;
		luas= sqrt(sisi*(sisi-a)*(sisi-b)*(sisi-c));
		printf("\t\t\t\t ||                                                    \n");
		printf("\t\t\t\t || >>  luas Segitiga Sembarang adalah = %.2f \n", luas   );
		printf("\t\t\t\t ||                                                    \n");
		printf("\t\t\t\t ++--------------------------------------------------++\n");
		printf("\t\t\t\t ||             [1] | Input Ulang                    ||\n");
		printf("\t\t\t\t ||                                                  ||\n");
		printf("\t\t\t\t ||             [2] | Keluar                         ||\n");
		printf("\t\t\t\t ++--------------------------------------------------++\n");
		printf("\t\t\t\t || >> Silahkan pilih : ");
		pilih=check();
		if (pilih == 1){
		luas_segitigasembarang ();
		}
		else if (pilih ==2){
		keluar();
		}
	}

}

void keliling_segitigasembarang (){
	
	int pilih;
	float  a, b, c, keliling;
	system("cls");
	printf("\n\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||         HITUNG KELILING SEGITIGA SEMBARANG       ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t || masukan sisi a :");
	a=check();
	printf("\t\t\t\t || masukan sisi b :");
	b=check();
	printf("\t\t\t\t || masukan sisi c :");
	c=check();
	
	if(a==b || a==c || b==c){
		printf("\t\t\t\t || >>    Panjang sisi tidak boleh sama !    << \n");
		getch();
		system("cls");
		keliling_segitigasembarang();
	}
	else{
		keliling = a+b+c;
		printf("\t\t\t\t ||                                                    \n");
		printf("\t\t\t\t || >>  Keliling Segitiga Sembarang adalah = %.2f \n", keliling   );
		printf("\t\t\t\t ||                                                    \n");
		printf("\t\t\t\t ++--------------------------------------------------++\n");
		printf("\t\t\t\t ||             [1] | Input Ulang                    ||\n");
		printf("\t\t\t\t ||                                                  ||\n");
		printf("\t\t\t\t ||             [2] | Keluar                         ||\n");
		printf("\t\t\t\t ++--------------------------------------------------++\n");
		printf("\t\t\t\t || >> Silahkan pilih : ");
		pilih=check();
		if (pilih == 1){
		keliling_segitigasembarang ();
		}
		else if (pilih ==2){
		keluar();
		}
	}
}

void luas_trapesium (){
	int pilih;
	float sisi1, sisi2, tinggi, luas;
	system("cls");
	printf("\n\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||                HITUNG LUAS TRAPESIUM             ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t || masukan sisi 1 :");
	sisi1=check();
	printf("\t\t\t\t || masukan sisi 2 :");
	sisi2=check();
	printf("\t\t\t\t || masukan Tinggi :");
	tinggi=check();
	
	if(sisi1==sisi2){
		printf("\t\t\t\t || >>    Panjang sisi tidak boleh sama !    << \n");
		getch();
		system("cls");
		luas_trapesium ();
	}
	else{
	
		luas = (sisi1+sisi2)*tinggi/2;
		printf("\t\t\t\t ||                                                    \n");
		printf("\t\t\t\t || >>  Luas Trapesium adalah = %.2f \n", luas   );
		printf("\t\t\t\t ||                                                    \n");
		printf("\t\t\t\t ++--------------------------------------------------++\n");
		printf("\t\t\t\t ||             [1] | Input Ulang                    ||\n");
		printf("\t\t\t\t ||                                                  ||\n");
		printf("\t\t\t\t ||             [2] | Keluar                         ||\n");
		printf("\t\t\t\t ++--------------------------------------------------++\n");
		printf("\t\t\t\t || >> Silahkan pilih : ");
		pilih=check();
		if (pilih == 1){
		luas_trapesium ();
		}
		else if (pilih ==2){
		keluar();
		}
	}	
}


void keliling_trapesium (){
	
	int pilih;
	float sisi1, sisi2, sisi3, sisi4, keliling;
	system("cls");
	printf("\n\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||        HITUNG KELILING TRAPESIUM SAMA KAKI       ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t || masukan sisi 1 Sejajar atas : ");
	sisi1=check();
	printf("\t\t\t\t || masukan sisi 2 Sejajar atas : ");
	sisi2=check();
	printf("\t\t\t\t || masukan sisi 3 samping      : ");
	sisi3=check();
	printf("\t\t\t\t || masukan sisi 4 samping      : ");
	sisi4=check();
		
	if(sisi1==sisi2){
		printf("\t\t\t\t || >>    Panjang sisi sejajar atas-bawah tidak boleh sama !    << \n");
		getch();
		system("cls");
		keliling_trapesium ();
	}
	else{
	
		keliling=sisi1+sisi2+sisi3+sisi4;
		printf("\t\t\t\t ||                                                    \n");
		printf("\t\t\t\t || >>  Keliling Trapesium adalah = %.2f \n", keliling   );
		printf("\t\t\t\t ||                                                    \n");
		printf("\t\t\t\t ++--------------------------------------------------++\n");
		printf("\t\t\t\t ||             [1] | Input Ulang                    ||\n");
		printf("\t\t\t\t ||                                                  ||\n");
		printf("\t\t\t\t ||             [2] | Keluar                         ||\n");
		printf("\t\t\t\t ++--------------------------------------------------++\n");
		printf("\t\t\t\t || >> Silahkan pilih : ");
		pilih=check();
		if (pilih == 1){
		keliling_trapesium ();
		}
		else if (pilih ==2){
		keluar();
		}
	}	
}

void luas_lingkaran (){
	
	int pilih;
	float r, luas;
	system("cls");
	printf("\n\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||                HITUNG LUAS LINGKARAN             ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t || masukan jari-jari lingkaran : ");
	r=check();
	
		luas=3.14*r*r;
		printf("\t\t\t\t ||                                                    \n");
		printf("\t\t\t\t || >>  Luas lingkaran adalah = %.2f \n", luas   );
		printf("\t\t\t\t ||                                                    \n");
		printf("\t\t\t\t ++--------------------------------------------------++\n");
		printf("\t\t\t\t ||             [1] | Input Ulang                    ||\n");
		printf("\t\t\t\t ||                                                  ||\n");
		printf("\t\t\t\t ||             [2] | Keluar                         ||\n");
		printf("\t\t\t\t ++--------------------------------------------------++\n");
		printf("\t\t\t\t || >> Silahkan pilih : ");
		pilih=check();
		if (pilih == 1){
		luas_lingkaran ();
		}
		else if (pilih ==2){
		keluar();
		}
}	


void keliling_lingkaran (){
	
	int pilih;
	float r, keliling;	
	system("cls");
	printf("\n\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||               HITUNG KELILING LINGKARAN          ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t || masukan jari-jari lingkaran : ");
	r=check();
	
		keliling=2*3.14*r;
		printf("\t\t\t\t ||                                                    \n");
		printf("\t\t\t\t || >>  Keliling lingkaran adalah = %.2f \n", keliling   );
		printf("\t\t\t\t ||                                                    \n");
		printf("\t\t\t\t ++--------------------------------------------------++\n");
		printf("\t\t\t\t ||             [1] | Input Ulang                    ||\n");
		printf("\t\t\t\t ||                                                  ||\n");
		printf("\t\t\t\t ||             [2] | Keluar                         ||\n");
		printf("\t\t\t\t ++--------------------------------------------------++\n");
		printf("\t\t\t\t || >> Silahkan pilih : ");
		pilih=check();
		if (pilih == 1){
		keliling_lingkaran ();
		}
		else if (pilih ==2){
		keluar();
		}
}

void luas_jajargenjang (){
	
	int pilih;
	float alas, tinggi, luas;
	system("cls");
	printf("\n\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||              HITUNG LUAS JAJAR GENJANG           ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t || masukan sisi alas : ");
	alas=check();
	printf("\t\t\t\t || masukan tinggi    : ");
	tinggi=check();
	
		luas = alas*tinggi;
		printf("\t\t\t\t ||                                                    \n");
		printf("\t\t\t\t || >>  Luas jajar genjang adalah = %.2f \n", luas   );
		printf("\t\t\t\t ||                                                    \n");
		printf("\t\t\t\t ++--------------------------------------------------++\n");
		printf("\t\t\t\t ||             [1] | Input Ulang                    ||\n");
		printf("\t\t\t\t ||                                                  ||\n");
		printf("\t\t\t\t ||             [2] | Keluar                         ||\n");
		printf("\t\t\t\t ++--------------------------------------------------++\n");
		printf("\t\t\t\t || >> Silahkan pilih : ");
		pilih=check();
		if (pilih == 1){
		luas_jajargenjang ();
		}
		else if (pilih ==2){
		keluar();
		}
}

void keliling_jajargenjang (){
	
	int pilih;
	float  alas, miring, keliling;
	system("cls");
	printf("\n\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||            HITUNG KELILING JAJAR GENJANG         ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t || masukan sisi alas   : ");
	alas=check();
	printf("\t\t\t\t || masukan sisi miring : ");
	miring=check();

	if(alas==miring){
		printf("\t\t\t\t || >>     sisi alas/miring tidak boleh sama !    << \n");
		getch();
		system("cls");
		keliling_jajargenjang ();
	}
	else{
	
		keliling = 2*(alas+miring);
		printf("\t\t\t\t ||                                                    \n");
		printf("\t\t\t\t || >>  Keliling jajar genjang adalah = %.2f \n", keliling   );
		printf("\t\t\t\t ||                                                    \n");
		printf("\t\t\t\t ++--------------------------------------------------++\n");
		printf("\t\t\t\t ||             [1] | Input Ulang                    ||\n");
		printf("\t\t\t\t ||                                                  ||\n");
		printf("\t\t\t\t ||             [2] | Keluar                         ||\n");
		printf("\t\t\t\t ++--------------------------------------------------++\n");
		printf("\t\t\t\t || >> Silahkan pilih : ");
		pilih=check();
		if (pilih == 1){
		keliling_jajargenjang ();
		}
		else if (pilih ==2){
		keluar();
		}
	}
}

void luas_belahketupat (){
	
	int pilih;
	float d1, d2, luas;
	system("cls");
	printf("\n\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||               HITUNG LUAS BELAH KETUPAT          ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t || masukan diagonal 1 : ");
	d1=check();
	printf("\t\t\t\t || masukan diagonal 2 : ");
	d2=check();
	
		luas= 0.5*d1*d2;
		printf("\t\t\t\t ||                                                    \n");
		printf("\t\t\t\t || >>  Luas belah ketupat adalah = %.2f \n", luas   );
		printf("\t\t\t\t ||                                                    \n");
		printf("\t\t\t\t ++--------------------------------------------------++\n");
		printf("\t\t\t\t ||             [1] | Input Ulang                    ||\n");
		printf("\t\t\t\t ||                                                  ||\n");
		printf("\t\t\t\t ||             [2] | Keluar                         ||\n");
		printf("\t\t\t\t ++--------------------------------------------------++\n");
		printf("\t\t\t\t || >> Silahkan pilih : ");
		pilih=check();
		if (pilih == 1){
		luas_belahketupat ();
		}
		else if (pilih ==2){
		keluar();
		}
}

void keliling_belahketupat (){
	int pilih;
	float sisi, keliling;
	system("cls");
	printf("\n\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||            HITUNG KELILING BELAH KETUPAT         ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t || masukan diagonal 1 : ");
	sisi=check();
	
		keliling = 4*sisi;
		printf("\t\t\t\t ||                                                    \n");
		printf("\t\t\t\t || >>  Keliling belah ketupat adalah = %.2f \n", keliling   );
		printf("\t\t\t\t ||                                                    \n");
		printf("\t\t\t\t ++--------------------------------------------------++\n");
		printf("\t\t\t\t ||             [1] | Input Ulang                    ||\n");
		printf("\t\t\t\t ||                                                  ||\n");
		printf("\t\t\t\t ||             [2] | Keluar                         ||\n");
		printf("\t\t\t\t ++--------------------------------------------------++\n");
		printf("\t\t\t\t || >> Silahkan pilih : ");
		pilih=check();
		if (pilih == 1){
		keliling_belahketupat ();
		}
		else if (pilih ==2){
		keluar();
		}
}

void keluar (){
	int pilih;
	system("cls");
	printf("\n\n");
	printf("\t\t\t\t                     >> Opsi Kembali <<                \n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||             [1] | Kembali ke menu                ||\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||             [2] | Keluar dari program            ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t || >> Silahkan pilih : ");
	pilih=check(); 
	
	if(pilih==1){
		menuUtama ();
	}
	else if(pilih==2){
		system("cls");
		printf("\n\n\n");
		printf("\t\t\t >>  Terima kasih telah menggunakan program kami! << \n");
		printf("\t\t\t >>               ENTER 1X UNTUK KELUAR!          << ");
	}
	else{
		system("cls");
		printf("\t\t\t >>  Masukan inputan yang benar! << \n");
		getch();
		menuSegitiga ();
	}
}


