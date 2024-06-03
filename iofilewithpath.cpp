#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;
    string NamaFile;

    cout << "Masukan Nama File : ";
    cin >> NamaFile;

    //membuka file mode menulis
    ofstream outfile;
    //menunjuk nama file
    outfile.open(NamaFile + ".txt", ios::out);

    cout << ">= Menulis File, \'q\' untuk keluar" << endl;

    //unlimited loop untuk menulis
    while(true){
        cout << "-";
        //mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop berhenti jika memasukan  q
        if (baris =="q") break;

        //menulis dan memasukan nilai baris ke dalam file
        outfile << baris << endl;
    }
    //selesai dalam menulis sekarang tutup file
    outfile.close();

    //membuka file dalam mode membaca
    ifstream infile;

    //menunjuk kesebuah file
    infile.open(NamaFile + ".txt", ios::in );

    cout << endl << ">= Membuka dan membaca file" << endl;
    //jika file ada maka
    if (infile.is_open())
    {
        //melakukan perulangan setiap baris
        while(getline(infile,baris))
        {
            // menampilkan isi
            cout << baris << '\n';
        }
        //tutup jika file tersebut telah selesai
        infile.close();
    }
    //jika tidak ada nama file tersebut 
    else cout << "Unable to open file";
    return 0;
}