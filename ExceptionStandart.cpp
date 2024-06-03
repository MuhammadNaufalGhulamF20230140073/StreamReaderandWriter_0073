#include <iostream>
#include <exception>
//untuk obyek array yang akan kita gunakan
#include <array>
using namespace std;

int main(){
    cout << "Awal program " << endl;//penanda 1
    try {
        array<int, 3> data= { 8, 4, 2 };
        //pesan array interger 3element
        cout <<data.at(5)<< endl;
    }
    catch (exception& e){
        //penangkap menggunakan objek exception
        cout << e.what() << endl ;
        /*akan dieksekusi karena array hanya memiliki 3 element*/
    }
    cout << "Baris program yang terakhir " << endl;
    /*penanda 2 : program berjalan tanpa henti*/
    
}