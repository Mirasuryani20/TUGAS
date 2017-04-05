#include <iostream>
using namespace std;
int i;
int faktorial (int i);
int main() {

cout << "        NILAI FAKTORIAL        "<<endl;
cout << "-------------------------------" <<endl;
cout << "Masukan Nilai : "; cin >> i;
cout << "-------------------------------" <<endl<<endl;
cout << faktorial(i);
return 0;
}
int faktorial (int i) {
int hasil = 1;
cout << "Nilai Faktorialnya : " <<endl<<endl;
for (int a=i; a!=0; a--) {
cout << a;
hasil = hasil * a;
if (a!=1)
cout << " x ";
else cout << " = ";
}
return hasil;
}