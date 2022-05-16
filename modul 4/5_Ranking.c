#include <stdio.h>
#include <string.h>

int sorting();
int readFile();
int main();
void exit();
void ulang();
void sortData();
void output();
void menu();

struct mahasiswa{
	char nama[100];
	int nilai;
};

void ulang(){
    char hurufUlang[1];

    printf("\n    Lakukan lagi? (Y/N) : ");
    scanf("%s", &hurufUlang);
    fflush(stdin);

    if((strcmp(hurufUlang, "Y") != 0) && (strcmp(hurufUlang, "y") != 0) &&
       (strcmp(hurufUlang, "N") != 0) && (strcmp(hurufUlang, "n") != 0)){
        printf("    Masukan anda salah! Masukan dengan benar\n");
        ulang();
    }else if((strcmp(hurufUlang, "Y") == 0)){
        system("cls");
		menu();
    }else if((strcmp(hurufUlang, "y") == 0)){
        system("cls");
		menu();
    }else{
    	system("cls");
    	printf ("-----------------------------------------------\n");
		printf ("* TERIMA KASIH SUDAH MENGGUNAKAN PROGRAM KAMI *\n");
		printf ("*             FROM KELOMPOK 04                *\n");
		printf ("-----------------------------------------------\n");
        system("exit");
    }
}

int sorting(){
    char hurufSort[1];
	int hasil = 0;

    printf("    Apakah anda ingin melakukan pengurutan nilai ? (Y/N) : ");
    scanf("%s", &hurufSort);
    fflush(stdin);

    if((strcmp(hurufSort, "Y") != 0) && (strcmp(hurufSort, "y") != 0) &&
       (strcmp(hurufSort, "N") != 0) && (strcmp(hurufSort, "n") != 0)){
        printf("    Masukan anda salah! Masukan dengan benar\n\n");
        sorting();
    }else if((strcmp(hurufSort, "Y") == 0)){
		hasil = 1;
    }else if((strcmp(hurufSort, "y") == 0)){
		hasil = 1;
    }else{
		hasil = 0;
    }

	return hasil;
}

int readFile(struct mahasiswa siswa[]){
	int a = 0;
	FILE *in = fopen("asistenin.txt","r");
	if(!in){
		printf("    File asistenin.txt tidak ditemukan\n");
		printf("    Silahkan buat file asistenin.txt terlebih dahulu\n");
	}else{
        printf("    Nilai Mahasiswa : \n");
		while(!feof(in)){
			printf("    ");
		    fscanf(in,"%[^\n]\n", &siswa[a].nama);
		    fscanf(in,"%d\n", &siswa[a].nilai);
            fflush(stdin);
		    printf("%d. %s : %d\n", a+1, siswa[a].nama, siswa[a].nilai);
		    a++;
		}
	}
	fclose(in);

	return a;
}

void sortData(struct mahasiswa siswa[], int a){
	struct mahasiswa temp;
	int i, j;
	for(i = 0; i < a - 1; i++){
		for(j = 0; j < a - 1; j++){
			if(siswa[j+1].nilai > siswa[j].nilai){
				temp = siswa[j+1];
				siswa[j+1] = siswa[j];
    			siswa[j] = temp;
			}
    	}
	}
}

void output(struct mahasiswa siswa[], int a){
	int i;
	FILE *out = fopen("asistenout.txt","w");
	fprintf(out, "Nilai Algoritma dan Pemrograman :\n");
	for(i = 0; i < a; i++){
		fprintf(out,"%d. %s %d\n", i+1, siswa[i].nama, siswa[i].nilai);
	}
	fclose(out);
}

void menu(){
	struct mahasiswa siswa[50];
	struct mahasiswa temp;
	int a = 0;
	int i, j, k;
	int sort;
	char tempNama[100];
	int tempNilai;

	printf(" ============================================================\n");
	printf("|================= PROGRAM PENGURUTAN NILAI =================|\n");
	printf("|============================================================|\n");
    printf("    Mengecek file asistenin.txt...");
    sleep(1);
	printf("\n\n");

	a = readFile(siswa);

	printf("\n");
	sort = sorting();

	if(sort == 1){
		sortData(siswa, a);
		printf("\n");
		output(siswa, a);

		printf("    Data berhasil dimasukan ke dalam asistenout.txt\n");
	}
	printf(" ============================================================\n");
	ulang();

}

int main(){
    system("cls");
    menu();

    return 0;
}
