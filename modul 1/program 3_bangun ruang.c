#include <stdio.h>
#include <math.h>
#define phi 3.14

int judul();
int menu_awal();
int menu_tabung();
int menu_bola();
int menu_limas_segiempat();
int menu_prisma_segitiga();
int menu_kerucut();
float luas_permukaan_tabung();
float luas_permukaan_bola();
float luas_permukaan_limas_segiempat();
float luas_permukaan_prisma_segitiga();
float luas_permukaan_kerucut();
float volume_tabung();
float volume_bola();
float volume_limas_segiempat();
float volume_prisma_segitiga();
float volume_kerucut();
float rumus_luas_permukaan_tabung(float r,float t);
float rumus_luas_permukaan_bola(float r);
float rumus_luas_permukaan_limas_segiempat(float sisi, float t);
float rumus_luas_permukaan_prisma_segitiga(float a, float t, float T_prisma);
float rumus_luas_permukaan_kerucut(float r, float t);
float rumus_volume_tabung(float r, float t);
float rumus_volume_bola(float r);
float rumus_volume_limas_segiempat(float sisi, float t);
float rumus_volume_prisma_segitiga(float a, float t, float T_prisma);
float rumus_volume_kerucut(float r, float t);
double check();
int keluar();


int main(){
	menu_awal();
	judul();
}

int menu_awal(){
	
	int opsi;
	
	printf("======================================\n");
	printf("|   Program Menghitung Bangun Ruang  |\n");
	printf("======================================\n");
	printf("| 1. Tabung                          |\n");
	printf("| 2. Bola                            |\n");
	printf("| 3. Limas Segiempat                 |\n");
	printf("| 4. Prisma Segitiga                 |\n");
	printf("| 5. Kerucut                         |\n");
	printf("| 6. Keluar dari program             |\n");
	printf("======================================\n");
	printf("Masukkan pilihan anda: ");
	opsi=check();
	system("cls");
	
    if (opsi==1){
		menu_tabung();
	}
	else if(opsi==2){
		menu_bola();
	}
	else if(opsi==3){
		menu_limas_segiempat();
	}
	else if(opsi==4){
		menu_prisma_segitiga();
	}
	else if(opsi==5){
		menu_kerucut();
	}
	else if(opsi==6){
		printf("=================================================\n");
		printf("| Terima kasih telah menggunakan program kami!  |\n");
		printf("|             Salam dari kelompok 4             |\n");
		printf("=================================================\n");
	}
	else {
		system("cls");
		printf("=================================================\n");		
		printf("|            Masukkan input yang benar!         |\n");
		printf("=================================================\n");	
		getch();
		system("cls");
		main();
	}
}

int judul(){


	printf("=================================\n");
	printf("|      Program Bangun Ruang     |\n");
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
	getch();
	system("cls");
}

int menu_tabung(){
	
	int opsi;
	
	printf("========================================\n");
	printf("|    Menghitung Bangun Ruang Tabung    |\n");
	printf("========================================\n");
	printf("| 1. Luas permukaan tabung             |\n");
	printf("| 2. Volume tabung                     |\n");
	printf("| 3. Kembali ke menu                   |\n");
	printf("| 4. Keluar dari program               |\n");
	printf("========================================\n");
	printf("Masukkan pilihan anda: ");
	opsi=check();
	system("cls");
	
	if (opsi==1){
		luas_permukaan_tabung();
	}
	else if(opsi==2){
		volume_tabung();
	}
	else if(opsi==3){
		main();
	}
	else if(opsi==4){
		system("cls");
		printf("=================================================\n");
		printf("| Terima kasih telah menggunakan program kami!  |\n");
		printf("|             Salam dari kelompok 4             |\n");
		printf("=================================================\n");
	}
	else {
		system("cls");
		printf("=================================================\n");		
		printf("|            Masukkan input yang benar!         |\n");
		printf("=================================================\n");	
		getch();
		system("cls");
		menu_tabung();
	}
		
}

float luas_permukaan_tabung(){
	
	float r, t, luas, opsi;
	
	printf("=================================================\n");
	printf("| Masukkan jari-jari : ");
	r=check();
	printf("| Masukkan tinggi    : ");
	t=check();
	luas= rumus_luas_permukaan_tabung(r,t);
	printf("=================================================\n");
	printf("| luas permukaan tabung: %.2f \n", luas);
	printf("=================================================\n");
	printf("| 1. Input menghitung lagi? \n");
	printf("| 2. Keluar\n");
	printf("=================================================\n");
	printf("| Masukkan pilihan anda: ");
	opsi=check();
	system("cls");
	
	if (opsi==1){
		luas_permukaan_tabung();
	}
	else if(opsi==2){
		keluar();
	}
	else {
		system("cls");
		printf("=================================================\n");		
		printf("|            Masukkan input yang benar!         |\n");
		printf("=================================================\n");	
		getch();
		system("cls");
		main();
	}
	return 0;
}

float volume_tabung(){
	
	float r, t, volume, opsi;
	
	printf("=================================================\n");
	printf("| Masukkan jari-jari : ");
	r=check();
	printf("| Masukkan tinggi    : ");
	t=check();
	volume= rumus_volume_tabung(r,t);
	printf("=================================================\n");
	printf("| volume tabung: %.2f \n", volume);
	printf("=================================================\n");
	printf("| 1. Input menghitung lagi? \n");
	printf("| 2. Keluar\n");
	printf("=================================================\n");
	printf("| Masukkan pilihan anda: ");
	opsi=check();
	system("cls");
	
	if (opsi==1){
		volume_tabung();
	}
	else if(opsi==2){
		keluar();
	}
	else {
		system("cls");
		printf("=================================================\n");		
		printf("|            Masukkan input yang benar!         |\n");
		printf("=================================================\n");	
		getch();
		system("cls");
		main();
	}
	return 0;
}

float rumus_luas_permukaan_tabung(float r, float t){
	
	float luas;
	luas = 2*phi*r*(r+t);
	return luas;
}

float rumus_volume_tabung(float r, float t){
	
	float volume;
	volume = phi*r*r*t;
	return volume;
}


int menu_bola(){
	
	int opsi;

	printf("========================================\n");
	printf("|    Menghitung Bangun Ruang Bola      |\n");
	printf("========================================\n");
	printf("| 1. Luas permukaan bola               |\n");
	printf("| 2. Volume bola                       |\n");
	printf("| 3. Kembali ke menu                   |\n");
	printf("| 4. Keluar dari program               |\n");
	printf("========================================\n");
	printf("Masukkan pilihan anda: ");
	opsi=check();
	system("cls");
	
	if (opsi==1){
		luas_permukaan_bola();
	}
	else if(opsi==2){
		volume_bola();
	}
	else if(opsi==3){
		main();
	}
	else if(opsi==4){
		system("cls");
		printf("=================================================\n");
		printf("| Terima kasih telah menggunakan program kami!  |\n");
		printf("|             Salam dari kelompok 4             |\n");
		printf("=================================================\n");
	}
	else {
		system("cls");
		printf("=================================================\n");		
		printf("|            Masukkan input yang benar!         |\n");
		printf("=================================================\n");	
		getch();
		system("cls");
		menu_bola();
	}
		
}

float luas_permukaan_bola(){
	
	float r, luas, opsi;
	
	printf("=================================================\n");
	printf("| Masukkan jari-jari : ");
	r=check();
	luas= rumus_luas_permukaan_bola(r);
	printf("=================================================\n");
	printf("| luas permukaan bola: %.2f \n", luas);
	printf("=================================================\n");
	printf("| 1. Input menghitung lagi? \n");
	printf("| 2. Keluar\n");
	printf("=================================================\n");
	printf("| Masukkan pilihan anda: ");
	opsi=check();
	system("cls");
	
	if (opsi==1){
		luas_permukaan_bola();
	}
	else if(opsi==2){
		keluar();
	}
	else {
		system("cls");
		printf("=================================================\n");		
		printf("|            Masukkan input yang benar!         |\n");
		printf("=================================================\n");	
		getch();
		system("cls");
		main();
	}
	return 0;
}

float volume_bola(){
	
	float r, volume, opsi;
	
	printf("=================================================\n");
	printf("| Masukkan jari-jari : ");
	r=check();
	volume= rumus_volume_bola(r);
	printf("=================================================\n");
	printf("| volume bola: %.2f \n", volume);
	printf("=================================================\n");
	printf("| 1. Input menghitung lagi? \n");
	printf("| 2. Keluar\n");
	printf("=================================================\n");
	printf("| Masukkan pilihan anda: ");
	opsi=check();
	system("cls");
	
	if (opsi==1){
		volume_bola();
	}
	else if(opsi==2){
		keluar();
	}
	else {
		system("cls");
		printf("=================================================\n");		
		printf("|            Masukkan input yang benar!         |\n");
		printf("=================================================\n");	
		getch();
		system("cls");
		main();
	}
	return 0;
}

float rumus_luas_permukaan_bola(float r){
	
	float luas;
	luas = 4*phi*r*r;
	return luas;
}

float rumus_volume_bola(float r){
	
	float volume;
	volume = 1.3*phi*r*r*r;
	return volume;
}

int menu_limas_segiempat(){
	
	int opsi;

	printf("=================================================\n");
	printf("|    Menghitung Bangun Ruang Limas Segiempat    |\n");
	printf("=================================================\n");
	printf("| 1. Luas permukaan limas segiempat             |\n");
	printf("| 2. Volume limas segiempat                     |\n");
	printf("| 3. Kembali ke menu                            |\n");
	printf("| 4. Keluar dari program                        |\n");
	printf("=================================================\n");
	printf("Masukkan pilihan anda: ");
	opsi=check();
	system("cls");
	
	if (opsi==1){
		luas_permukaan_limas_segiempat();
	}
	else if(opsi==2){
		volume_limas_segiempat();
	}
	else if(opsi==3){
		main();
	}
	else if(opsi==4){
		system("cls");
		printf("=================================================\n");
		printf("| Terima kasih telah menggunakan program kami!  |\n");
		printf("|             Salam dari kelompok 4             |\n");
		printf("=================================================\n");
	}
	else {
		system("cls");
		printf("=================================================\n");		
		printf("|            Masukkan input yang benar!         |\n");
		printf("=================================================\n");	
		getch();
		system("cls");
		menu_limas_segiempat();
	}
		
}


float luas_permukaan_limas_segiempat(){
	
	float sisi, t, luas, opsi;
	
	printf("=================================================\n");
	printf("| Masukkan sisi   : ");
	sisi=check();
	printf("| Masukkan tinggi : ");
	t=check();
	luas= rumus_luas_permukaan_limas_segiempat(sisi,t);
	printf("=================================================\n");
	printf("| luas permukaan limas segiempat: %.2f \n", luas);
	printf("=================================================\n");
	printf("| 1. Input menghitung lagi? \n");
	printf("| 2. Keluar\n");
	printf("=================================================\n");
	printf("| Masukkan pilihan anda: ");
	opsi=check();
	system("cls");
	
	if (opsi==1){
		luas_permukaan_limas_segiempat();
	}
	else if(opsi==2){
		keluar();
	}
	else {
		system("cls");
		printf("=================================================\n");		
		printf("|            Masukkan input yang benar!         |\n");
		printf("=================================================\n");	
		getch();
		system("cls");
		main();
	}
	return 0;
}

float volume_limas_segiempat(){
	
	float sisi, t, volume, opsi;
	
	printf("=================================================\n");
	printf("| Masukkan sisi   : ");
	sisi=check();
	printf("| Masukkan tinggi : ");
	t=check();
	volume= rumus_volume_limas_segiempat(sisi,t);
	printf("=================================================\n");
	printf("| volume limas segiempat: %.2f \n", volume);
	printf("=================================================\n");
	printf("| 1. Input menghitung lagi? \n");
	printf("| 2. Keluar\n");
	printf("=================================================\n");
	printf("| Masukkan pilihan anda: ");
	opsi=check();
	system("cls");
	
	if (opsi==1){
		volume_limas_segiempat();
	}
	else if(opsi==2){
		keluar();
	}
	else {
		system("cls");
		printf("=================================================\n");		
		printf("|            Masukkan input yang benar!         |\n");
		printf("=================================================\n");	
		getch();
		system("cls");
		main();
	}
	return 0;
}

float rumus_luas_permukaan_limas_segiempat(float sisi, float t){
	
	float S_tegak,L_segitiga;
	float luas;
	S_tegak =sqrt((sisi*0.5)*(sisi*0.5)+(t*t));
	L_segitiga=0.5*sisi*S_tegak;
	luas = (sisi*sisi)+(4*L_segitiga);
	return luas;
}

float rumus_volume_limas_segiempat(float sisi, float t){
	
	float volume;
	volume = (0.3)*(sisi*sisi)*t;
	return volume;
}

int menu_prisma_segitiga(){
	
	int opsi;

	printf("=================================================\n");
	printf("|    Menghitung Bangun Ruang Prisma Segitiga    |\n");
	printf("=================================================\n");
	printf("| 1. Luas permukaan prisma segitiga             |\n");
	printf("| 2. Volume prisma segitiga                     |\n");
	printf("| 3. Kembali ke menu                            |\n");
	printf("| 4. Keluar dari program                        |\n");
	printf("=================================================\n");
	printf("Masukkan pilihan anda: ");
	opsi=check();
	system("cls");
	
	if (opsi==1){
		luas_permukaan_prisma_segitiga();
	}
	else if(opsi==2){
		volume_prisma_segitiga();
	}
	else if(opsi==3){
		main();
	}
	else if(opsi==4){
		system("cls");
		printf("=================================================\n");
		printf("| Terima kasih telah menggunakan program kami!  |\n");
		printf("|             Salam dari kelompok 4             |\n");
		printf("=================================================\n");
	}
	else {
		system("cls");
		printf("=================================================\n");		
		printf("|            Masukkan input yang benar!         |\n");
		printf("=================================================\n");	
		getch();
		system("cls");
		menu_prisma_segitiga();
	}
		
}


float luas_permukaan_prisma_segitiga(){
	
	float a, t, T_prisma, luas, opsi;
	
	printf("=================================================\n");
	printf("| Masukkan alas          : ");
	a=check();
	printf("| Masukkan tinggi        : ");
	t=check();
	printf("| Masukkan tinggi prisma : ");
	T_prisma=check();
	luas= rumus_luas_permukaan_prisma_segitiga(a,t,T_prisma);
	printf("=================================================\n");
	printf("| luas permukaan prisma segitiga: %.2f \n", luas);
	printf("=================================================\n");
	printf("| 1. Input menghitung lagi? \n");
	printf("| 2. Keluar\n");
	printf("=================================================\n");
	printf("| Masukkan pilihan anda: ");
	opsi=check();
	system("cls");
	
	if (opsi==1){
		luas_permukaan_prisma_segitiga();
	}
	else if(opsi==2){
		keluar();
	}
	else {
		system("cls");
		printf("=================================================\n");		
		printf("|            Masukkan input yang benar!         |\n");
		printf("=================================================\n");	
		getch();
		system("cls");
		main();
	}
	return 0;
}

float volume_prisma_segitiga(){
	
	float a, t, T_prisma, volume, opsi;
	
	printf("=================================================\n");
	printf("| Masukkan alas          : ");
	a=check();
	printf("| Masukkan tinggi        : ");
	t=check();
	printf("| Masukkan tinggi prisma : ");
	T_prisma=check();
	volume= rumus_volume_prisma_segitiga(a,t,T_prisma);
	printf("=================================================\n");
	printf("\n volume prisma segitiga: %.2f \n\n", volume);
	printf("=================================================\n");
	printf("| 1. Input menghitung lagi? \n");
	printf("| 2. Keluar\n");
	printf("=================================================\n");
	printf("| Masukkan pilihan anda: ");
	opsi=check();
	system("cls");
	
	if (opsi==1){
		volume_prisma_segitiga();
	}
	else if(opsi==2){
		keluar();
	}
	else {
		system("cls");
		printf("=================================================\n");		
		printf("|            Masukkan input yang benar!         |\n");
		printf("=================================================\n");	
		getch();
		system("cls");
		main();
	}
	return 0;
}


float rumus_luas_permukaan_prisma_segitiga(float a, float t, float T_prisma){
	
	float S_miring;
	float luas;
	S_miring= sqrt((a*a)+(t*t));
	luas = (2*0.5*a*t)+((a+t+S_miring)*T_prisma);
	return luas;
}

float rumus_volume_prisma_segitiga(float a, float t, float T_prisma){
	
	float volume;
	volume = (0.5*a*t)*T_prisma;
	return volume;
}

int menu_kerucut(){
	
	int opsi;

	printf("=========================================\n");
	printf("|    Menghitung Bangun Ruang Kerucut    |\n");
	printf("=========================================\n");
	printf("| 1. Luas permukaan kerucut             |\n");
	printf("| 2. Volume kerucut                     |\n");
	printf("| 3. Kembali ke menu                    |\n");
	printf("| 4. Keluar dari program                |\n");
	printf("=========================================\n");
	printf("Masukkan pilihan anda: ");
	opsi=check();
	system("cls");
	
	if (opsi==1){
		luas_permukaan_kerucut();
	}
	else if(opsi==2){
		volume_kerucut();
	}
	else if(opsi==3){
		main();
	}
	else if(opsi==4){
		system("cls");
		printf("=================================================\n");
		printf("| Terima kasih telah menggunakan program kami!  |\n");
		printf("|             Salam dari kelompok 4             |\n");
		printf("=================================================\n");
	}
	else {
		system("cls");
		printf("=================================================\n");		
		printf("|            Masukkan input yang benar!         |\n");
		printf("=================================================\n");	
		getch();
		system("cls");
		menu_kerucut();
	}
		
}


float luas_permukaan_kerucut(){
	
	float r, t, luas, opsi;
	
	printf("=================================================\n");
	printf("| Masukkan jari-jari : ");
	r=check();
	printf("| Masukkan tinggi    : ");
	t=check();
	luas= rumus_luas_permukaan_kerucut(r,t);
	printf("=================================================\n");
	printf("\n luas permukaan kerucut: %.2f \n\n", luas);
	printf("=================================================\n");
	printf("| 1. Input menghitung lagi? \n");
	printf("| 2. Keluar\n");
	printf("=================================================\n");
	printf("| Masukkan pilihan anda: ");
	opsi=check();
	system("cls");
	
	if (opsi==1){
		luas_permukaan_kerucut();
	}
	else if(opsi==2){
		keluar();
	}
	else {
		system("cls");
		printf("=================================================\n");		
		printf("|            Masukkan input yang benar!         |\n");
		printf("=================================================\n");	
		getch();
		system("cls");
		main();
	}
	return 0;
}

float volume_kerucut(){
	
	float r, t, volume, opsi;
	
	printf("=================================================\n");
	printf("| Masukkan jari-jari : ");
	r=check();
	printf("| Masukkan tinggi    : ");
	t=check();
	volume= rumus_volume_kerucut(r,t);
	printf("=================================================\n");
	printf("\n volume kerucut: %.2f \n\n", volume);
	printf("=================================================\n");
	printf("| 1. Input menghitung lagi? \n");
	printf("| 2. Keluar\n");
	printf("=================================================\n");
	printf("| Masukkan pilihan anda: ");
	opsi=check();
	system("cls");
	
	if (opsi==1){
		volume_kerucut();
	}
	else if(opsi==2){
		keluar();
	}
	else {
		system("cls");
		printf("=================================================\n");		
		printf("|            Masukkan input yang benar!         |\n");
		printf("=================================================\n");	
		getch();
		system("cls");
		main();
	}
	return 0;
}

float rumus_luas_permukaan_kerucut(float r, float t){
	
	float s;
	float luas;
	s = sqrt((r*r)+(t*t));
	luas = (phi*r)*(r+s);
	return luas;
}

float rumus_volume_kerucut(float r, float t){
	
	float volume;
	volume = 0.3*phi*r*r*t;
	return volume;
}


double check(){
	double input;
	char checkinput;
	int cek;
	
	cek=scanf("%lf%c", &input,&checkinput);
	
	if(cek!=2 || checkinput!='\n'){
		system("cls");
		printf("\n\n\n");
		printf("inputan anda tidak sesuai kriteria! \n\n");
		system("pause");
		system("cls");
		cek=1;
		fflush(stdin);
		main();
	}
	else if(input<=0){
		printf("input anda invalid! \n");
		printf("Masukkan angka selain -/0 : ");
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

int keluar(){
	
	int opsi;
	
	printf("=================================================\n");
	printf("| 1. Kembali ke menu                            |\n");
	printf("| 2. Keluar dari program                        |\n");
	printf("=================================================\n");
	printf("Masukkan pilihan anda: ");
	opsi=check();
	system("cls");
	
	if (opsi==1){
		main();
	}
	else if(opsi==2){
		system("cls");
		printf("=================================================\n");
		printf("| Terima kasih telah menggunakan program kami!  |\n");
		printf("|             Salam dari kelompok 4             |\n");
		printf("=================================================\n");
	}
	else {
		system("cls");
		printf("=================================================\n");		
		printf("|            Masukkan input yang benar!         |\n");
		printf("=================================================\n");	
		getch();
		system("cls");
		main();
	}
	
}