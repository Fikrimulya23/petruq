#include <iostream>
using namespace std;

char p0[15]		= 	{'T','G','B','W','W','I','N','T','E','R','W','S','E','S','N'};
char p1[15]		=	{'A','A','U','N','T','T','M','M','H','F','O','O','D','N','B'};
char p2[15]		=	{'J','L','W','C','Q','L','D','Z','M','P','M','V','D','M','R'};
char p3[15]		=	{'A','S','A','G','M','Q','U','W','V','V','B','S','O','H','I'};
char p4[15]		=	{'B','W','P','L','O','T','A','N','A','D','T','P','G','N','C'};
char p5[15]		=	{'R','E','W','N','G','O','D','J','C','P','N','A','T','N','K'};
char p6[15]		=	{'E','E','O','T','W','O','S','B','Q','H','A','R','R','S','A'};
char p7[15]		=	{'A','Z','C','G','E','S','W','E','W','N','A','K','N','P','B'};
char p8[15]		=	{'D','I','N','N','E','R','Q','O','D','L','W','D','C','A','R'};
char p9[15]		=	{'O','N','O','P','K','W','M','P','A','R','K','T','Z','C','C'};
char p10[15]	=	{'Q','B','F','R','O','G','M','A','M','W','P','W','E','E','Y'};
char p11[15]	=	{'L','Q','Z','Q','N','N','M','R','Z','J','J','S','C','L','G'};
char p12[15]	=	{'M','O','S','G','Z','C','Z','E','T','D','B','O','O','T','O'};
char p13[15]	=	{'P','D','C','R','Z','M','S','N','G','R','D','N','R','P','Z'};
char p14[15]	= 	{'O','H','N','K','Z','W','A','T','E','R','J','G','T','R','A'};
char *(soal[15]) = {p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14};

//Pemanggil puzzle
void munculkansoal(){
	for (int pb=0;pb<15;pb++){
		for (int pk=0;pk<15;pk++){
		cout<<*(*(soal+pb)+pk)<<" ";
		}
	cout<<endl;
	}
}


//Agar semua kata menjadi huruf kapital
void menaik( char *word){
	int x = 'A' - 'a';
	if (x < 0) x*=-1;
	
	for (int i=0;*(word+i);i++){
		if ('A' < 'a'){
		if (*(word+i) >= 'a') *(word+i)-=x;}
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


void cari (char *(word)){
int banyak =0;
	for (int pb=0;pb<15;pb++){
		
		for (int pk=0;pk<15;pk++){
		
			int ada[8] = {0,0,0,0,0,0,0,0};
			if (*(*(soal+pb)+pk) == *(word+0)){
				
				for(int i=1;i<=panjang(word);i++){
					if (pb <(15-panjang(word)))
					if (*(*(soal+(pb+i))+pk) == *(word+i)) ada[0]++; //pencarian ke selatan
					
					if (pb >=(0+panjang(word)))
					if (*(*(soal+(pb-i))+pk) == *(word+i)) ada[1]++; //pencarian ke utara
					
					if (pk <(15-panjang(word)))
					if (*(*(soal+pb)+(pk+i)) == *(word+i)) ada[2]++; //pencarian ke timur
					
					if (pk >=(0+panjang(word)))
					if (*(*(soal+pb)+(pk-i)) == *(word+i)) ada[3]++; //pencarian ke barat
					
					if (pb <(15-panjang(word)) && pk <(15-panjang(word))) 
					if (*(*(soal+(pb+i))+(pk+i)) == *(word+i)) ada[4]++; //pencarian ke tenggara
					
					if (pb <(15-panjang(word)) && pk >=(0+panjang(word)))
					if (*(*(soal+(pb+i))+(pk-i)) == *(word+i)) ada[5]++; //pencarian ke barat daya
					
					if (pb >=(0+panjang(word)) && pk <(15-panjang(word)))
					if (*(*(soal+(pb-i))+(pk+i)) == *(word+i)) ada[6]++; //pencarian ke timur laut
					
					if (pb >=(0+panjang(word)) && pk >=(0+panjang(word)))
					if (*(*(soal+(pb-i))+(pk-i)) == *(word+i)) ada[7]++; //pencarian ke barat laut
				}
			
				if (panjang(word) == 0){
					banyak++;
				}
			
				else {
					for(int l=0;l<8;l++){
						if (ada[l] == panjang(word)) banyak++;
					}
				}
				
			}
		}
	}		

	if (banyak != 0 ) cout<<"Ada\n";
	else cout<<"Tidak ada\n";	
	
}

int main(){

munculkansoal();	
int kata;
cout<<"\nBerapa banyak kata yang akan dicari: ";
cin>>kata;
char word[kata][15];

	for (int i=0;i<kata;i++){
		cout<<"Masukkan kata ke "<<i+1<<" : ";
		cin>>word[i];
		panjang(*(word+i));
	}

	for (int i=0;i<kata;i++){
		menaik(*(word+i));
		cari(*(word+i));
	}	
	
}
