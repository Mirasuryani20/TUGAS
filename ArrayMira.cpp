#include <iostream>
using namespace std;
int main(){
	
	char ALPHABET[10];
	char m;
	int z=0, sum=0;
	cout << "Masukan 10 karakter" << endl;
		while(z <= 10){
				cout<<"~~~~~~\n";
				cout<<"> ";cin>>ALPHABET[z];
				z++;
		}
	
		for (int x=0; x<=10; x++ ) { 
		cout<<"Huruf ke-"<<x<<": "<<ALPHABET[x]<<"\n";
	}

	cout<<"AlPHABET yang Dicari:\n";
	cin>>m;
	
		for(int z=0; z<=10; z++){
		if(m == ALPHABET[z]){int v=1; sum+=v; }
		}
		
	cout <<"jumlah ALPHABET "<<m<<" : Sebanyak: "<<sum;
}
