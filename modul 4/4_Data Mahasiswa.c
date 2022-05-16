#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
typedef char string[256];
typedef struct{
    string nama;
    string NIM;
}mahasiswa;

void input_data_mhs(mahasiswa mhs);
void tampilkan_data_mhs(mahasiswa mhs);

int main(){
    mahasiswa mhs;
    char update;
    int opsi;
    printf("=====================================\n");
	printf("||  PROGRAM INPUT DATA MAHASISWA   ||\n");
	printf("||          Kelompok 04            ||\n");
	printf("=====================================\n");
    printf("\nMasukkan pilihan");
    printf("\n1. Menginput data");
    printf("\n2. Mencari data");
    printf("\n3. Exit");
    printf("\nMasukkan pilihan   : ");
    scanf("%d",&opsi);
    if(opsi==1){
        input_data_mhs(mhs);
    }
    else if(opsi==2){
        tampilkan_data_mhs(mhs);
    }
    else if(opsi==3){
        exit(0);
    }
    else{
        printf("\n\t\tinput salah!");
        getch();
        system("cls");
        main();
    }

return 0;}

void input_data_mhs(mahasiswa mhs){
    int pengulangan;
    char kode,y,n;
    pengulangan=0;
    do{
    string induk,name;
    printf("\n\n\nMASUKKAN DATA MAHASISWA\n");
    printf("Masukkan NIM mahasiswa    : ");
    scanf("%s",&mhs.NIM);
    fflush(stdin);
    printf("Masukkan nama mahasiswa   : ");
    gets(mhs.nama);
    fflush(stdin);
    FILE *out=fopen("database.txt","r");
    if(!out){
        printf("\n\tNO DATABASES");
    }else{
        while(!feof(out)){
            fscanf(out,"%s # %[^#] #\n",&induk,&name);
        }
        fclose(out);
    }
    if(strcmp(mhs.NIM,induk)==0){
        printf("\n\t\tDATA SUDAH ADA");
    }
    else{
        FILE *in=fopen("database.txt","a");
        fprintf(in,"%s # %s #\n",mhs.NIM,mhs.nama);
        fclose(in);
        printf("\nData berhasil ditambahkan\n");
    }
    
    printf("\n\nApakah ingin kembali menginput data (y/n):");
    scanf("%s", &kode);
    if(kode=='y'){
        system("cls");
    }
    else if(kode=='n'){
        system("cls");
        exit(0);
    }
    else{
        break;
    }
    }while(pengulangan<1);
}

void tampilkan_data_mhs(mahasiswa mhs){
    int pengulangan;
    char kode,y,n;
    pengulangan=0;
    do{
    string data;
    printf("\nMasukkan NIM mahasiswa yang ingin dicari : ");
    scanf("%s",&data);
    fflush(stdin);
    FILE *in=fopen("database.txt","r");
    if(!in){
        printf("\n\t\tData Tidak Ada\n");
    }else{
        while(!feof(in)){
            fflush(stdin);
            fscanf(in,"%s # %[^#] #\n",&mhs.NIM,&mhs.nama);
            if(strcmp(mhs.NIM,data)==0){
            printf("\nDATA MAHASISWA\n");
            printf("NIM       : %s\n",mhs.NIM);
            printf("Nama      : %s\n",mhs.nama);
            }
        }
        fclose(in);
    }
    printf("\n\nApakah anda ingin kembali mencari data (y/n):");
    scanf("%s", &kode);
    if(kode=='y'){
        system("cls");
    }
    else if(kode=='n'){
        system("cls");
        exit(0);
    }
    else{
        break;
    }
    }while(pengulangan<1);
}
