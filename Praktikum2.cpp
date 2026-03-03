#include <iostream>
using namespace std;

//deklarasi global
    float p,l;
 
//implementasi
void input(){
    cout << "Masukan Panjang : ";
    cin >> p;
    cout << "Masukan Lebar : " ;
    cin >> l;
}

float luaspersegi(float x, float y){
    return x*y;
}
int jumlah(int a, int b, int c){
    return a+b+c;
}

void output (){
    cout << "Hasilnya = " << luaspersegi(p,l)<< endl;
}

int main()
{
    input();
    output();
    cout << "Hasil Penjumlahan = " << jumlah(5,6,9);

}//selesai
