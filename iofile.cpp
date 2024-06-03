#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;
    //membuka file untuk menulis
    ofstream outfile;
    //menunjuk nama file
    outfile.open("contohFile.txt");

    cout << ">= Menulis File, \'q\' untuk keluar" << endl;

    // unlimited loop menulis
    while (true){
        cout << "-";
        //mendapatkan setiap karakter - dalam satu baris
        getline(cin, baris);
        //loop berenti jika memasukan huruf q
        if (baris == "q") break;
        //menulis dan memasukan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    //selesai dalam menulis sekarang tutup file
    outfile.close();

    //membuka file dalam mode membaca
    ifstream infile;
    //menunjuk sebuah file
    infile.open("contohfile.txt");

    cout << endl << ">= Membuka dan Membaca File" << endl;
    //jika fike ada maka buka
    if (infile.is_open())
    {
        //melakukan perulangan setiap baris
        while(getline(infile, baris))
        {
            //tampilkan 
            cout << baris <<'\n';
        }

        //tutup file setelah selesai
        infile.close();
