#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <windows.h>
#include <ctime>

using namespace std;

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void awal ()
{
	cout<<"\n\n\n";
	cout<<"\t \t \t \t \t \t================ \n";
	cout<<"\t \t \t \t \t \t||  KETENTUAN ||\n";
	cout<<"\t \t \t \t \t \t================ \n\n\n";

	gotoxy(8,8);cout  <<" ==================================================================================================== \n";
	gotoxy(8,9);cout  <<" || Program ini dibuat hanya untuk menghitung KPK dan FPB dari 2 nilai saja dan tidak dibuat untuk ||\n";
	gotoxy(8,10);cout <<" || menghitung KPK dan FPB lebih dari 2 nilai. 	 					           ||\n";														
	gotoxy(8,11);cout <<" ====================================================================================================\n";

	gotoxy(8,13);cout <<" ========================================================================================================== \n";
	gotoxy(8,14);cout <<" || Dalam menggunakan program ini, jangan pernah menginputkan huruf abjad, karena jika anda menginputkan ||\n";
	gotoxy(8,15);cout <<" || huruf abjad, maka program ini akan keluar. 	 							    ||\n";														
	gotoxy(8,16);cout <<" ==========================================================================================================\n";
	cout << endl;
	cout<<"\t \t \t \t  ========================================== \n";
	cout<<"\t \t \t \t  ||  Copyright Muhammad_Rizqi_Ardiansyah ||\n";
	cout<<"\t \t \t \t  ========================================== \n\n\n";
	
	cout << " Tekan sembarang tombol untuk melanjutkan ";
}

void judul_projek ()
	{MessageBox(NULL,
	"Salah satu bagian matematika yang menjadi pelajaran penting di sekolah - sekolah adalah KPK dan FPB. "
	"Metode KPK dan FPB dengan pemfaktoran setiap bilangan ini ternyata sudah ditemukan sejak masa sahabat nabi. \n \n "
	"Sahabat nabi yang mengajarkan metode ini tidak lain adalah Ali Bin abi Thalib. "
	"SAHABAT YANG DIKENAL SEBAGAI PINTUNYA ILMU "
	,"Tahukah anda ??",NULL);}
	
void penjelasan_KPK ()
{
	{MessageBox(NULL,
	"\t KPK ialah nilai terkecil dari suatu kelipatan persekutuan 2 bilangan \n "
	"\t ataupun lebih bilangan \n "
	"\t Contoh Soal : Carilah KPK dari 4 dan 8 \n "
	"\t Penyelesaian : \n "
	"\t Kelipatan 4 adalah = {4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, ....} \n "
	"\t Kelipatan 8 adalah = {8, 16, 24. 32. 40, 48, 56, ...} \n "		  
	"\t Jadi didapat kelipatan persekutuan dari 4 dan 8 adalah 8, 16, 24, 32, ...\n "
	"\t ( kelipatan yang bernilai sama dari 4 dan 8) \n "
	"\t Nilai yang terkecil dari 2 kelipatan persekutuannya adalah 8, sehingga \n "
	" \t KPK dari 4 dan 8 adalah 8."
	,"Info",NULL);}
	
	gotoxy(2,2);cout <<" ===================== \n";
	gotoxy(2,3);cout <<" ||    Mencari KPK  ||\n";
	gotoxy(2,4);cout <<" ===================== \n";
	cout << endl;
}
	
void penjelasan_FPB ()
{
	{MessageBox(NULL,
	" \t Yang dimaksud dengan faktor persekutuan adalah faktor yang sama \n "
	" \t dari 2 bilangan ataupun lebih. \n "
	" \t Jadi FPB adalah nilai paling besar dari faktor-faktor persekutuan dari 2 \n "
	" \t bilangan atau lebih itu. \n "
	" \t Contoh : Carilah FPB dari 4 dan 8 \n "
	" \t Faktor dari 4 adalah = {1, 2, 4} \n "
	" \t Faktor dari 8 adalah = {1, 2, 4, 8} \n "
	" \t Jadi faktor persekutuan dari kedua bilangan tersebut adalah 1, 2, 4 \n "
	" \t Nilai yang terbesarnya adalah 4, sehingga FPBnya adalah 4." ,"Info",NULL);}
	
	gotoxy(2,2);cout <<" ===================== \n";
	gotoxy(2,3);cout <<" ||    Mencari FPB  ||\n";
	gotoxy(2,4);cout <<" ===================== \n";
	cout << endl;
}

void nama_app()
{
	cout <<"\t \t \t \t \t ======================= \n";
	cout <<"\t \t \t \t \t ||  Program Aplikasi ||\n";
	cout <<"\t \t \t \t \t ||     KPK dan FPB   ||\n";
	cout <<"\t \t \t \t \t ======================= \n";
	cout << endl;
}	

void exit(){
	system("cls");
	system("color 70");
	cout <<
	"\n\n\n\n\n"
	"\t\t\t============  !! 	!!   =========   !!         !!  !!      =\n"
	"\t\t\t     !!       !!        !!  !!       !!  !!!!       !!  !!    =\n"
	"\t\t\t     !!       !!        !!  !!       !!  !!  !!     !!  !!  =\n"
	"\t\t\t     !!       !!========!!  !!=======!!  !!    !!   !!  !!=\n"
	"\t\t\t     !!       !!        !!  !!       !!  !!      !! !!  !!  =\n"
	"\t\t\t     !!       !!        !!  !!       !!  !!       !!!!  !!    =\n"
	"\t\t\t     !!       !!        !!  !!       !!  !!         !!  !!      =\n";
	
	cout<<
	"\n\n\n\n\n"
	"\t\t\t\t\t!!      !!    =======    !!       !!\n"
	"\t\t\t\t\t!!      !!  !!       !!  !!       !!\n"
	"\t\t\t\t\t!!      !!  !!       !!  !!       !!\n"
	"\t\t\t\t\t!!======!!  !!       !!  !!       !!\n"
	"\t\t\t\t\t    !!      !!       !!  !!       !!\n"
	"\t\t\t\t\t    !!	    !!       !!  !!	  !!\n"
	"\t\t\t\t\t    !!	    !!	     !!  !!       !!\n"
	"\t\t\t\t\t    !! 	      =======	  =========\n";
	
	MessageBox(NULL,"Terima kasih telah mengunjungi program ini, semoga bermanfaat dan mohon maaf apabila ada kesalahan dalam program ini \n\n"
	" (Klik sembarang tombol untuk keluar dari program ini )","Notification",NULL);	
 	exit (0);}

int cara_1 (int c){
	
	gotoxy(2,6);cout <<" ========================================================================================================== \n";
	gotoxy(2,7);cout <<" || Setelah itu, tentukan nilai terbesar dan sama dari nilai pertama dan kedua(dengan konsekuensi jika   ||\n";
	gotoxy(2,8);cout <<" || nilai terbesar merupakan nilai yang sama, tetapi jika tidak ada yang sama, maka kalikan semua nilai).||\n";
	gotoxy(2,9);cout <<" ==========================================================================================================\n";
	cout << endl;
		
}

int cara_2 (int c){
	
	gotoxy(2,6);cout<<" =============================================================================================================== \n";
	gotoxy(2,7);cout<<" || Setelah itu, tentukan nilai terkecil dan sama dari nilai pertama dan kedua(dengan konsekuensi jika nilai  ||\n";
	gotoxy(2,8);cout<<" || terkecil merupakan nilai yang sama, tetapi jika tidak ada yang sama, maka ambil nilai yang terkecil).     ||\n";
	gotoxy(2,9);cout<<" ===============================================================================================================\n";
	cout << endl;
}





int main (){
	
    int i,j,l,k,kpk;
    int a,b,c,d,e,f,g,get;
    int PK,ht,menu,FPB,pkt,pkb,info,app,hb,Ket,awl;

awl :    

	awal();
	info=getch();
	if (info!=13)
	{goto app;}

app :
    
	{system("color 17");
	system ("cls");
	
	nama_app();
	cout << endl;
	
	judul_projek();
	
menu :
	
	cout <<
	"\nSilahkan pilih diantara pilihan berikut = \n"
	"\t\t\t\t\t1. KPK\n"
	"\t\t\t\t\t2. FPB\n"
	"\t\t\t\t\t0. Keluar\n\n"
	"\n\t\t\t\t\tPilihan =  ";
	cin >> b;
	
		if (b==1)
		{system ("cls");
		{goto PK;}
}

		if (b==2)
		{system ("cls");
		{goto FPB;
		}
}
		if (b==0)
		{system ("cls");
		{exit();}
		
}
		else
		{goto slh;}
		

PK :

kpk=0;

		penjelasan_KPK ();

ht :
	
	cout<<endl;
	cout<<" Masukkan Bilangan Pertama : ";
	cin >>  k;	
	cout<<" Masukkan Bilangan Kedua   : ";
	cin >>  j;
	cout<<endl;

		for(i=1;i<=j;i++)
{
		kpk=kpk+k;

		if(kpk % j==0)
{
	cout<<"\n Jadi hasil KPK dari bilangan "<<k<<" dengan bilangan "<<j<<" adalah "<<kpk<<endl<<endl;
	cout<<" ======================================================================================================================\n";
	cout << endl;
	cout << " Apakah yang ingin anda lakukan selanjutnya  ? \n\n";
	cout << " 1. Ingin tahu caranya ? \n";
	cout << " 2. Kembali ke menghitung KPK \n";
	cout << " 3. Kembali ke menu utama \n ";
	cout << "0. Keluar \n\n ";
	cout << "   Pilihan anda = ";
	cin >>   f; 
	cout <<endl<<endl;
		
		if (f==1){
		system ("cls");
		{goto pkt;
		}
}
		if (f==2){
		system ("cls");
		{goto ht;}	
		}
		
		if (f==3){
		system ("cls");
		{goto menu;}	
		}
		
		if (f==0)
		{system ("cls");
		{exit ();}
		}
		
		else
		{goto slh;}
		
pkt :
	
	MessageBox(NULL, " Perhatikan tanda-tanda berikut : (^) artinya sebagai pangkat \n, (*) artinya sebagai lambang perkalian, (:) artinya sebagai lambang pembagian" ,"Simbol",NULL);
	cout << " \n ";													
	cout << "Faktorisasi prima dari "<<k<<" = ";
		
		a=k;
		for (int i=2;i<=a;){
		 if(k%i==0){
		 	k/=i;
		 	pkt++;
		 }
		 else {
		 	if (pkt==1){
		 	cout<<i;
		 }
		 else if 
		 	(pkt>1){
		 	cout<<i<<"^"<<pkt;
		 }
		 if (k!=1 && pkt>0){
		 	cout<<"*";
		 }
		 	pkt=0;
		 	i++;
		 }
		}
		cout << endl;
		cout << endl;
		cout << " Faktorisasi prima dari "<<j<<" = ";

		
		a=j;
		for (int i=2;i<=a;){
		 if (j%i==0){
		 	j/=i;
		 	pkt++;
		 }
		 else {
		 	if (pkt==1){
		 cout<<i;
		 }
		 else if 
		 	(pkt>1){
		 	cout<<i<<"^"<<pkt;
		 }
		 if (j!=1 && pkt>0){
		 	cout<<"*";
		 }
			 pkt=0;
		 	i++;
		
		 }
		}
		cout <<" \n ";
		cout << endl;
		
cara_1 (c);
		cout << endl;	
		cout << endl;
		
		cout << " 1. Kembali ke menghitung KPK \n";
		cout << " 0. Keluar \n\n";
		cout << " Pilihan = ";
		cin >> a;
		
		if (a==1){
			system ("cls");
			{goto PK;}
		}	
		if (a==0){
			system ("cls");
			{exit();
			}
		}
		else
		{goto slh;}


FPB :
	
	penjelasan_FPB();
	
hb :
	
		cout << endl;
		cout << " Masukkan Bilangan Pertama 	: ";
		cin >>k;                               
		cout << " Masukan Bilangan Kedua 	: " ;
		cin >>j;
		
		l = k%j;                                                     
		while (l!=0)
{
		k = j;
		j = l;
		l = k%j;
}
{
		cout<<"\n Jadi hasil FPB dari bilangan pertama dengan bilangan kedua adalah "<<j<<endl;
		cout << endl;
cout<<" ======================================================================================================================\n";
		cout << endl;
		cout << " Apakah yang ingin anda lakukan selanjutnya  ? \n\n";
		cout << " 1. Ingin tahu caranya ? \n";
		cout << " 2. Kembali ke menghitung FPB \n";
		cout << " 3. Kembali ke menu utama \n ";
		cout << "0. Keluar \n\n ";
		cout << "   Pilihan anda = ";
		cin >>   f; 
		cout <<endl<<endl;
		
		if (f==1){
			system ("cls");
			{goto pkb;}
		}
		
		if (f==2){
			system ("cls");
			{goto hb;}	
		}
		
		if (f==3){
			system ("cls");
			{goto menu;}	
		}
		
		if (f==0)
		{system ("cls");
		{exit ();}
}

		else
		{goto slh;}
pkb :
	
		MessageBox(NULL, " Perhatikan tanda-tanda berikut : (^) artinya sebagai pangkat \n, (*) artinya sebagai lambang perkalian, (:) artinya sebagai lambang pembagian" ,"Simbol",NULL);
		
		cout << endl;
		cout <<endl;													
		cout << " Faktorisasi prima dari "<<k<<" = ";
			
		a=k;
		for (int i=2;i<=a;){
		 	if (k%i==0){
		 	k/=i;
		 	pkt++;
		 }
		 else {
		 	if (pkt==1){
		 	cout<<i;
		 }
		 else if 
		 	(pkt>1){
		 	cout<<i<<"^"<<pkt;
		 }
		 if (k!=1 && pkt>0){
		 	cout<<"*";
		 }
		 	pkt=0;
		 	i++;
		 
		 
		 }
		}

		cout << endl;
		cout << endl;
		
		cout << " Faktorisasi prima dari "<<j<<"  = ";

		
		a=j;
		for (int i=2;i<=a;){
		 	if (j%i==0){
		 	j/=i;
		 	pkt++;
		 }
		 else {
		 	if (pkt==1){
		 	cout<<i;
		 }
		 else if (pkt>1){
		 	cout<<i<<"^"<<pkt;
		 }
		 if (j!=1 && pkt>0){
		 	cout<<"*";
		 }
		 	pkt=0;
		 	i++;
		
		 }
		}
		cout << endl;
		cara_2 (c);
		cout << endl;
		cout << endl;	
		
		cout << " 1. Kembali ke menghitung FPB \n";
		cout << " 0. Keluar \n\n";
		cout << " Pilihan =  ";
		cin >> a;
		
		if (a==1){
			system ("cls");
			{goto FPB;}
}
		if (a==0){
			system ("cls");
					{exit();}
		}
			
}

slh :
	
		system("cls");
		{system("color 4f");
	
		
		gotoxy(30,10);cout<<" ================================================ \n";
		gotoxy(30,11);cout<<" ||    Maaf... Input yang anda masukkan salah  ||\n";
		gotoxy(30,12);cout<<" ================================================ \n";
		cout << endl;
		cout << " \t \t \t ============================================================ \n ";
		gotoxy(30,16); cout << " Apakah anda ingin melanjutkan program ini ? : ";
		gotoxy(30,17); cout << " Tekan 1 jika ingin melanjutkan ";
		gotoxy(30,18); cout << " Tekan 0 untuk keluar ";
		gotoxy(30,19); cout << " Pilihan = ";
		cin >> c;
}
			if (c==1){goto app;}
			if (c==0){exit();}
	
			else
	
			{goto slh;}



}
}
	cout << endl;
	cout << endl ;
    system("PAUSE");
    return EXIT_SUCCESS;
}
}

    


    


