#include<stdio.h>
#include<stdlib.h>

struct skubus{
	int s;
	int volume;
	int luas;
	};

union ukubus{
	int s;
	int volume;
	int luas;
};


void kembali(){
    char pil[2];
    printf("\nApakah anda ingin mengulang? (y/n) \n");
    scanf("%s",&pil);
    if(strcmpi(pil,"y")==0){
        system("cls");
        main();
    }else if(strcmpi(pil,"n")==0){
        exit(0);
    }else{
        printf("Silahkan Masukkan Pilihan Yang Benar!! ");
        kembali();
    }
getch();
}

int main(){

	struct skubus skbs;
	union ukubus ukbs;
	int s;

	printf("\t\t\t\t+----------------------------------------------+\n");
	printf("\t\t\t\t|  MENGHITUNG LUAS PERMUKAAN DAN VOLUME KUBUS  |\n");
	printf("\t\t\t\t+----------------------------------------------+\n\n");

	printf("Masukkan sisi kubus: ");
	scanf("%d", &s);

	if(s>=1){
//output perhitungan kubus menggunakan struct
	skbs.volume=s*s*s;
	skbs.luas=6*s*s;
	printf("\n-------------------------------------\n");
	printf("Kubus dengan Struct");
	printf("\nSisi		: %d", s);
	printf("\nLuas Permukaan	: %d", skbs.luas);
	printf("\nVolume		: %d", skbs.volume);

//output perhitungan kubus menggunakan union
	printf("\n-------------------------------------\n");
	printf("Kubus dengan Union");
	printf("\nSisi		: %d", s);
	ukbs.luas = 6*s*s;
	printf("\nLuas Permukaan	: %d", ukbs.luas);
	ukbs.volume = s*s*s;
	printf("\nVolume		: %d", ukbs.volume);

	printf("\n-------------------------------------\n");
	printf("Ukuran memori pada struct	: %d", sizeof(skbs));
	printf("\nUkuran memori pada union	: %d", sizeof(ukbs));
	printf("\n-------------------------------------\n");
	}
	kembali();
}
