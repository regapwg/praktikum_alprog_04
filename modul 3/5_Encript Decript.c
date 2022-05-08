#include <stdio.h> 
#include <string.h> 
#include <conio.h> 
#include <windows.h> 

 
void keluar (void) 
{ 
    int ext; 
    char klr[]="k e l u a r . . . . . . . . . . ."; 
    for(ext=0;klr[ext]!=0;ext++) 
    { 
        Sleep(50); 
        printf("%c",klr[ext]); 
    } 
}
double check();

 
 
main() 
{ 
    int menu; 
    char a; 
    menu_awal: 
    system("cls"); 
    printf("\n\n"); 
    printf("\t+==============================================================+\n");
    printf("\t|                PROGRAM ENKRIPSI DAN DEKRIPSI                 |\n");
    printf("\t+==============================================================+\n");
    printf("\t| MENU:                                                        |\n"); 
    printf("\t|  1. ENKRIPSI                                                 |\n"); 
    printf("\t|  2. DESKRIPSI                                                |\n"); 
    printf("\t|  3. KELUAR                                                   |\n"); 
    printf("\t|  Pilih sesuai menu yang tersedia!                            |\n"); 
    printf("\t >>Masukan Angka untuk memilih menu : "); 
    scanf("%d", &menu); 
    switch (menu) 
 
    { 
        case 1: 
        system("cls"); 
        { 
            printf("\t+==============================================================+\n");
            printf("\t|                        PROGRAM ENKRIPSI                      |\n");
            printf("\t+==============================================================+\n");
            char teks[100]; 
            int i,geser; 
            size_t a; 
            fflush(stdin); 
            printf("\t >>Plaintext          : "); 
            gets(teks); 
            printf("\t >>Jumlah Pergeseran  : "); 
            scanf("%d",&geser); 
            a=strlen(teks); 
            printf("\t >>Hasil Enkripsi     : %c"); 
            for(i=0;i<a;i++) 
            { 
                printf("%c",teks[i]+geser); 
            } 
 
            getch(); 
            printf("\n\t >>Apakah anda ingin kembali ke menu awal ? (Y/T) : "); 
            scanf("%s",&a); 
            a=toupper(a); 
            if(a == 'Y') 
            goto menu_awal; 
            if(a == 'T') 
            system("cls"); 
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t"); 
            keluar(); 
            exit(1); 
            break; 
        } 
 
        case 2: 
        system("cls"); 
 
        { 
            printf("\t+==============================================================+\n");
            printf("\t|                        PROGRAM DEKRIPSI                      |\n");
            printf("\t+==============================================================+\n");
            char teks[100]; 
            int x,gser; 
            size_t y; 
            fflush(stdin); 
            printf("\t >>Chipertext        : "); 
            gets(teks); 
            printf("\t >>Jumlah Pergeseran : "); 
            scanf("%d",&gser); 
            y=strlen(teks); 
            printf("\t >>Hasil Dekripsi    : "); 
            for(x=0;x<y;x++) 
            { 
                printf("%c",(teks[x])-gser); 
            } 
            getch(); 
            fflush(stdin); 
            printf("\n\t >>Apakah anda ingin kembali ke menu awal ? (Y/T) : "); 
            scanf("%s",&a); 
            a=toupper(a); 
            if(a == 'Y') 
            goto menu_awal; 
            if(a == 'T') 
            system("cls"); 
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t"); 
            keluar(); 
            exit(1); 
            break; 
 
        } 
        case 3: 
        system("cls"); 
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t"); 
        keluar(); 
        exit(1); 
        break; 
        
        default: goto menu_awal; 
        
        break;
     } 
     getch(); 
     
     

}



