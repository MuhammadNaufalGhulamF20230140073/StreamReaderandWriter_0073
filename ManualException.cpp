#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "Selamat belajar di ProdiTI UMY" << endl;
        //throw; //melemparkan sebuah interger maka
        cout << "Pernyataan tidak akan di eksekusi" << endl;
    }
    catch (int a){
        //blok ini akan di eksekusi
        cout << "Pengecualian akan di eksekusi" << endl;
    }

    catch (...){
        /*jika selain interger maka blokk ini akan di eksekusi*/
        cout << "default pengecualian di eksekusi" << endl;
    }

    return 0;
}
    