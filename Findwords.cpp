#include <iostream>
using namespace std;

char s0[15]		= 	{'T','G','B','W','W','I','N','T','E','R','W','S','E','S','N'};
char s1[15]		=	{'A','A','U','N','T','T','M','M','H','F','O','O','D','N','B'};
char s2[15]		=	{'J','L','W','C','Q','L','D','Z','M','P','M','V','D','M','R'};
char s3[15]		=	{'A','S','A','G','M','Q','U','W','V','V','B','S','O','H','I'};
char s4[15]		=	{'B','W','P','L','O','T','A','N','A','D','T','P','G','N','C'};
char s5[15]		=	{'R','E','W','N','G','O','D','J','C','P','N','A','T','N','K'};
char s6[15]		=	{'E','E','O','T','W','O','S','B','Q','H','A','R','R','S','A'};
char s7[15]		=	{'A','Z','C','G','E','S','W','E','W','N','A','K','N','P','B'};
char s8[15]		=	{'D','I','N','N','E','R','Q','O','D','L','W','D','C','A','R'};
char s9[15]		=	{'O','N','O','P','K','W','M','P','A','R','K','T','Z','C','C'};
char s10[15]		=	{'Q','B','F','R','O','G','M','A','M','W','P','W','E','E','Y'};
char s11[15]		=	{'L','Q','Z','Q','N','N','M','R','Z','J','J','S','C','L','G'};
char s12[15]		=	{'M','O','S','G','Z','C','Z','E','T','D','B','O','O','T','O'};
char s13[15]		=	{'P','D','C','R','Z','M','S','N','G','R','D','N','R','P','Z'};
char s14[15]		= 	{'O','H','N','K','Z','W','A','T','E','R','J','G','T','R','A'};
char *(soal[15]) = {s0,s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14};

//Pemanggil puzzle
void panggil_soal(){
	for (int sb=0;sb<15;sb++){
		for (int sk=0;sk<15;sk++){
		cout<<*(*(soal+sb)+sk)<<" ";
		}
	cout<<endl;
	}
}

//Ubah semua huruf menjadi huruf kapital

void menaik( char *word){
	int x = 'A' - 'a';
	if (x < 0) {
		x*=-1;}
	
	for (int i=0;*(word+i);i++){
		if ('A' < 'a'){
			if (*(word+i) >= 'a') *(word+i)-=x;
			}
			else{
				if (*(word+i) <= 'A') *(word+i)+=x;}
	}
}

//menghitung panjang array

int panjang(char *word){
	int x;
	for (int i=0;*(word+i);i++){
		x = i;
	}	
	return x;
}

//pencarian kata
void cari (char *(word)){
int banyak =0;
	for (int sb=0;sb<15;sb++){
		
		for (int sk=0;sk<15;sk++){
