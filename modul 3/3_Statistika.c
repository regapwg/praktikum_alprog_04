#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void menu ();
void operasi ();
void input ();
void keluar ();
double check();
int validasiPertama(int *arrayVar);
float validasiKedua(float *arrayVar);
float fmodus(float *data, int jumlahData);
float fmedian (float *data, int jumlahData);
float fmean (float *data, int jumlahData);


int pilih;
int deretNilai, deretNilaiLanjutan;
int jumlahData = 0;
int copyData = 0;
float *data;



int main (){
 menu();
}

void menu (){
	
	system("cls");
	printf("\n\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||       Welcome to Program Mean, Median, Modus     ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
    printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||  [1] Input Data                                  ||\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||             [2] | Keluar dari program            ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t || >> Selamat datang, silahkan pilih : ");
	pilih=check();

	if (pilih == 1){
		input();
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
		menu();
	}
}

void input (){
	float urutan[100];
	system("cls");
    printf("\n\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||       Welcome to Program Mean, Median, Modus     ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
    printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||                ** MASUKAN NILAI **               ||\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t || >> Jumlah Data : ");
    
		if (validasiPertama(&jumlahData)){
    		input:
            for (deretNilai = copyData; deretNilai < jumlahData ; deretNilai++){
                printf("\t\t\t\t ||    >> Nilai :ke-%d : ", deretNilai + 1);
                    if (validasiKedua(&urutan[deretNilai])){
                    }
                    else{
                        printf("\n\n\t\t\t\t           >> INPUT ANDA INVALID! << ");
                        getch();
                        system("cls");
                        copyData = deretNilai;
                        printf("\n\n");
                        printf("\t\t\t\t ++--------------------------------------------------++\n");
						printf("\t\t\t\t ||       Welcome to Program Mean, Median, Modus     ||\n");
						printf("\t\t\t\t ++--------------------------------------------------++\n");
                        printf("\t\t\t\t ||                                                  ||\n");
						printf("\t\t\t\t ||                ** MASUKAN NILAI **               ||\n");
						printf("\t\t\t\t ||                                                  ||\n");
                        printf("\t\t\t\t || >> Jumlah Data : %d\n", jumlahData);
                        for (deretNilaiLanjutan = 0; deretNilaiLanjutan < deretNilai; deretNilaiLanjutan++)
                        {
                            printf("\t\t\t\t ||    >> Nilai :ke-%d : %.0f\n", deretNilaiLanjutan + 1, urutan[deretNilaiLanjutan]);
                        }
                        goto input;
                	}
            }
               data = urutan;
        }
        else {
                printf("\n\n\t\t\t\t           >> INPUT ANDA INVALID! << ");
                getch();
                system("cls");
                input();
                
            }
        printf("\n");    
		printf("\t\t\t\t           >> ENTER 1X UNTUK MELANJUTKAN! << ");
        getch();
        operasi();
}

void operasi (){
	
    float temp;
    int deretNilai, deretNilaiLanjutan;
    float modus, mean, median;
	    
    system("cls");
    printf("\t\t\t\t ++--------------------------------------------------++\n");
    printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||                 NILAI YANG DI-INPUT              ||\n");
	printf("\t\t\t\t ||                                                  ||\n");
    for (deretNilai = 0; deretNilai < jumlahData; deretNilai++){
        printf("\t\t\t\t ++--------------------------------------------------++\n");
		printf("\t\t\t\t ||  Nilai ke-%d : %.2f\n", deretNilai + 1, data[deretNilai]             );
    }
 
 
 //mengurutkan nilai
 
       for (deretNilai = 0; deretNilai < jumlahData; deretNilai++){
        for (deretNilaiLanjutan = deretNilai + 1; deretNilaiLanjutan < jumlahData; deretNilaiLanjutan++){
            if (data[deretNilai] > data[deretNilaiLanjutan]){
            	
                temp = data[deretNilaiLanjutan];
                data[deretNilaiLanjutan] = data[deretNilai];
                data[deretNilai] = temp;
            }
        }
    }
    printf("\n\n");
    printf("\t\t\t\t ++--------------------------------------------------++\n");
    printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||              NILAI SETELAH DI-URUTKAN            ||\n");
	printf("\t\t\t\t ||                                                  ||\n");    
    for (deretNilaiLanjutan = 0; deretNilaiLanjutan < jumlahData; deretNilaiLanjutan++)
    {
    	printf("\t\t\t\t ++--------------------------------------------------++\n");
		printf("\t\t\t\t || Nilai ke-%d : %.2f\n", deretNilaiLanjutan + 1, data[deretNilaiLanjutan]);

    }
    
    fflush(stdin);
    mean = fmean(data, jumlahData);
    printf("\n\n");
    printf("\t\t\t\t ++--------------------------------------------------++\n");
    printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||                 HASIL PERHITUNGAN                ||\n");
	printf("\t\t\t\t ||                                                  ||\n");    
    printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t || Nilai Mean   : %.2f\n", mean);
    median = fmedian (data, jumlahData);
    printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t || Nilai Median : %.2f\n", median);

    modus = fmodus(data,  jumlahData);
    if (modus != 0)
    {
    	printf("\t\t\t\t ++--------------------------------------------------++\n");
		printf("\t\t\t\t || Nilai Modus  : %.2f\n", modus);
		printf("\t\t\t\t ++--------------------------------------------------++\n");
    }
    else
    {
       	printf("\t\t\t\t ++--------------------------------------------------++\n");
		printf("\t\t\t\t || Nilai Modus Tidak Ada!                             \n");
		printf("\t\t\t\t ++--------------------------------------------------++\n");
    }
    printf("\t\t\t\t ||             [1] | Input Ulang                    ||\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||             [2] | Keluar                         ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t || >> Silahkan pilih : ");
	pilih=check();
	if (pilih == 1){
	input ();
	}
	else if (pilih ==2){
	keluar();
	}
}



float fmean (float *data, int jumlahData){
    float penjumlahan = 0;
    for (deretNilai = 0; deretNilai < jumlahData; deretNilai++){
        penjumlahan = penjumlahan + data[deretNilai];
    }

    return (penjumlahan / jumlahData);
}

float fmedian (float *data, int jumlahData){
    float temp;
    int deretNilai, deretNilaiLanjutan;
    for (deretNilai = 0; deretNilai < jumlahData; deretNilai++)
    {
        for (deretNilaiLanjutan = deretNilai + 1; deretNilaiLanjutan < jumlahData; deretNilaiLanjutan++)
        {
            if (data[deretNilai] > data[deretNilaiLanjutan])
            {
                temp = data[deretNilaiLanjutan];
                data[deretNilaiLanjutan] = data[deretNilai];
                data[deretNilai] = temp;
            }
        }
    }

    if (jumlahData % 2 == 0)
    {
    	
        return (data[jumlahData / 2] + data[jumlahData / 2 - 1]) / 2;
    } 
    else
    {
        return data[jumlahData / 2];
    }
}

float fmodus(float *data, int jumlahData){
    fflush(stdin);
    float modus;
    int batas = 0;
    int hasil, deretNilaiLanjutan;
    int banyakData[100];
    for (deretNilai = 0; deretNilai < jumlahData; deretNilai++){
        banyakData[deretNilai] = 0;
        
        for (deretNilaiLanjutan = deretNilai + 1; deretNilaiLanjutan < jumlahData; deretNilaiLanjutan++) {
            if (data[deretNilai] == data[deretNilaiLanjutan]){
                banyakData[deretNilai]++;
            }
        }
    }
    
    for (deretNilai = 0; deretNilai < jumlahData; deretNilai++){
        if (banyakData[deretNilai] > batas){
            batas = banyakData [deretNilai];
            hasil = deretNilai;
        }
    }
    modus = data[hasil];
    
    return modus;
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
		menu();
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

int validasiPertama(int *arrayVar){
    char buff[1024];
    char scan;
    if (fgets(buff, sizeof(buff), stdin) != NULL)
    {
        if (sscanf(buff, "%d %c", arrayVar, &scan) == 1)
        {
            return 1;
        }
    }
    return 0;
}

float validasiKedua(float *arrayVar){
    char buff[1024];
    char scan;
    if (fgets(buff, sizeof(buff), stdin) != NULL)
    {
        if (sscanf(buff, "%f %c", arrayVar, &scan) == 1)
        {
            return 1;
        }
    }
    return 0;
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
		menu ();
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
		menu();
	}
}
