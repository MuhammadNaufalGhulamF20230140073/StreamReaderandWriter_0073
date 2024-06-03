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
