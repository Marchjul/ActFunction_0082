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

float luaspersegi(){
    return p*l;
}

void output (){
    cout << "Hasilnya = " << luaspersegi();
}

int main()
{
    input();
    output();

}//selesai

