#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

char input_kata[1000];
int palindrom(char input_kata[], int size);
void tampilan(char input_kata[]);
void print_totalkata(char *input_kata);
int palindrom(char input_kata[], int size);
void perulangan();
void clean();
int validasi(char *var);


int main(){

    int length, i, digit=0;
	printf("=================================\n");
	printf("|      Program Palindrome       |\n");
	printf("=================================\n");
	printf("|                               |\n");
	printf("|                               |\n");
	printf("|             From:             |\n");
	printf("|          Kelompok 4           |\n");
	printf("|                               |\n");
	printf("|                               |\n");
	printf("|                               |\n");
	printf("|                               |\n");
	printf("|                               |\n");
	printf("=================================\n");
	printf("Masukkan kata: ");
	gets(input_kata);
	length = strlen(input_kata);

 	for (i=0;i<length; i++){
 		if (isdigit(input_kata[i]) != 0)
 		digit++;
 	}

 	if(digit > 0){
        system("cls");
		printf ("Inputan anda tidak sesuai kriteria!\n");
 		printf ("Masukkan kata bukan angka! ");
 		getch();
 		system("cls");
 		main();
 	}

 	if(length <= 1){
        system("cls");
		printf("Kata yang anda masukkan masih kosong atau kurang! ");
		getch();
 		system("cls");
 		main();
 	}
	print_totalkata(input_kata);

	return 0;
}

void print_totalkata(char input_kata[]){

    int i,j, jumlahKarakter, temp, counter=0;
    FILE * file;
    file = fopen("kamuskata.txt", "a");
    jumlahKarakter = strlen(input_kata);
    fprintf(file, "%s(%d)\t : ", input_kata, jumlahKarakter);
    for(i=0; i<strlen(input_kata); i++){
        temp = 0;
        for(j=i-1; j>=0; j--){
            if(tolower(input_kata[j]) == tolower(input_kata[i])){
                temp++;
            }
        }
        if(temp == 0){
            counter++;
        }else{
            continue;
        }
    }

    char huruf[counter];
    int jumlahHuruf[counter];
    printf("%s(%d)\t : ", input_kata, jumlahKarakter);

    for(i=0; i<strlen(input_kata); i++){
        counter = 0;
        temp = 0;
        for(j=i-1; j>=0; j--){
            if(tolower(input_kata[j]) == tolower(input_kata[i])){
            temp++;
            }
        }
    if(temp == 0){
        for(j=i; j<strlen(input_kata); j++){
            if(tolower(input_kata[j]) == tolower(input_kata[i])){
            temp++;
            }
        }
      huruf[counter] = input_kata[i];
      jumlahHuruf[counter] = temp;
      printf("%c=%d ",huruf[counter], jumlahHuruf[counter]);
      fprintf(file, "%c=%d ", huruf[counter], jumlahHuruf[counter]);
      counter++;
      }
      else{
        continue;
      }
    }
    tampilan(input_kata);
}

void tampilan(char input_kata[]){
	FILE*file;
 	file=fopen("kamuskata.txt", "a");

	if(palindrom(input_kata, strlen(input_kata))==1){
		printf("Palindrom");
		fprintf(file, "\t : Palindrom\n");
	}else{
		printf("Bukan Palindrom");
		fprintf(file, "\t : Bukan palindrom\n");
	}
	perulangan();
}

int palindrom(char input_kata[], int size){
	int i;
	int status = 1;

	for(i=0; i<size; i++)
	{
		if(input_kata[i]== input_kata[size-1-i])
		{
			continue;
		}else{
			status = 0;
			break;
		}
	}
	return status;
}

int input(int *select){

    char buff[1024], term;
    if(fgets(buff, sizeof(buff), stdin) != NULL && sscanf(buff, "%d %c", select, &term) == 1){
        return 1;
    }
    printf("Inputan Salah, Masukan Angka!\n");
    return 0;
}


int validation(int *var, char *prompt){

    while(1){
        printf(prompt);
        if(input(var)){
            break;
        }
    }
}

void perulangan(){

    int ulang;

	printf("\n\n");
    printf("1. Kembali Memasukkan kata?\n");
    printf("2. Keluar\n");
    validation(&ulang, "Pilihan anda : ");
    if(ulang==1){
        system("cls");
    main();
    }else if(ulang==2){
        system("cls");
        printf("=================================================\n");
        printf("| Terima kasih telah menggunakan program kami!  |\n");
        printf("|             Salam dari kelompok 4             |\n");
        printf("=================================================\n");
    }else{
        printf("\nPilihan Tidak Tersedia\n");
    perulangan();
    }
}
