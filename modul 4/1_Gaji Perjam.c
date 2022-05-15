#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>



void hitungGaji ();
float validasiF(float *arrayVar);
void repeatfloat(float *arrayVar);
double check();
void keluar ();

struct pembayaran {
	
	char nama[100];
    float jamKerja;
    float pokokPerjam;
    float jamPokok;
    float jamLembur;
    int lembur;
    int pokok;
    int totalGaji;
	
}gaji; 


int main (){
	
	int pilih;
	
	system("cls");
	printf("\n\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||        Welcome to Program Hitung Gaji Harian     ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
    printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||  [1] Hitung Gaji                                 ||\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||             [2] | Keluar dari program            ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t || >> Selamat datang, silahkan pilih : ");
	pilih=check();

	if (pilih == 1){
		hitungGaji();
    }
    else if (pilih == 2){
    	system("cls");
		printf("\n\n\n");
		printf("\t\t\t >>  Terima kasih telah menggunakan program kami! << \n");
		printf("\t\t\t >>               ENTER 1X UNTUK KELUAR!          << ");
    	
	}   
	else {
		system("cls");
		printf("\t\t\t >>  Masukan inputan yang benar! << \n");
		getch();
		main();
	}
}


void hitungGaji (){
 
	int pilih;
    gaji.jamKerja=0; 
    gaji.jamLembur=0;
	gaji.jamPokok=0; 
    gaji.pokokPerjam=10625; 
    gaji.pokok=0; 
    gaji.lembur=0; 
    gaji.totalGaji=0;
    
	system("cls");
	printf("\n\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||              Program Hitung Gaji Harian          ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
    printf("\t\t\t\t ||                                                    \n");                                         
	printf("\t\t\t\t || >> Inputkan Nama Anda : ");
    scanf("%s",&gaji.nama );
	printf("\t\t\t\t || >> Inputkan Jumlah Jam Kerja Anda: ");
	repeatfloat(&gaji.jamKerja);

    if(gaji.jamKerja>8){
    	
        gaji.jamPokok = 8;
        gaji.jamLembur =gaji.jamKerja-gaji.jamPokok;
        gaji.pokok = gaji.jamPokok*gaji.pokokPerjam;
		gaji.lembur = (gaji.jamLembur*(gaji.jamPokok*gaji.pokokPerjam));  

    }else{
    	
        gaji.pokok = gaji.pokokPerjam*gaji.jamKerja;
        gaji.jamPokok = gaji.jamKerja;

    }

    gaji.totalGaji = gaji.lembur + gaji.pokok;
    
    printf("\t\t\t\t ||                                                    \n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t || >> Jumlah Jam Kerja        :%.2f \n",gaji.jamKerja);
	printf("\t\t\t\t || >> Jumlah Jam Kerja Pokok  :%.2f\n",gaji.jamPokok);
	printf("\t\t\t\t || >> Jumlah Jam Kerja Lembur :%.2f \n",gaji.jamLembur);
	printf("\t\t\t\t || >> Jumlah Gaji Pokok       :%d\n",gaji.pokok);
	printf("\t\t\t\t || >> Jumlah Gaji Lembur      :%d\n",gaji.lembur);
	printf("\t\t\t\t || >> Jumlah Gaji Total       :%d\n",gaji.totalGaji);
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||             [1] | Input Ulang                    ||\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||             [2] | Keluar                         ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t || >> Silahkan pilih : ");
	pilih=check();
	if (pilih == 1){
	hitungGaji ();
	}
	else if (pilih ==2){
	keluar();
	}


}


float validasiF(float *arrayVar){
    char buff[1024];
    char scan;
    fflush(stdin);
    if (fgets(buff, sizeof(buff), stdin) != NULL)
    {
        if (sscanf(buff, "%f %c", arrayVar, &scan) == 1)
        {
            return 1;
        }
    }
    return 0;
}




double check(){
	double input;
	char checkinput;
	int scan;
	
	scan=scanf("%lf%c", &input,&checkinput);
	
	if(scan!=2 || checkinput!='\n'){
		system("cls");
		printf("\n\n\n");
		printf("\t\t\t >>  input anda invalid!  << \n\n");
		system("pause");
		system("cls");
		scan=1;
		fflush(stdin);
		main();
	}
	else if(input<=0){
		printf("\t\t\t\t ||        >> input anda invalid!  << \n");
		printf("\t\t\t\t || >> Masukkan angka selain -/0 : ");
		fflush(stdin);
		scan=1;
		return check();
	}
	else{
		scan=0;
		fflush(stdin);
		return input;
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
		main();
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
		keluar();
	}
}

void repeatfloat(float *arrayVar){
	while(1){

  		if(validasiF(arrayVar))

   		break;
		printf("\t\t\t\t ||                             \n");
		printf("\t\t\t\t || >> Inputan anda tidak valid!\n");
   		printf("\t\t\t\t || >> Inputkan Ulang \t :");
    }
}
