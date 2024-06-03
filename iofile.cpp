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

