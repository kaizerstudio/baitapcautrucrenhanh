#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "Tinh ket qua tro choi." << endl;
    cout << "Nhap 0 ung voi sap, 1 ung voi ngua" << endl;
    cout << "An: "; cin >> a;
    cout << "Binh: "; cin >> b;
    cout << "Cuong: "; cin >> c;
    if(a<0||b<0||c<0) main();
    if(a==b&&a==c) cout << "HOA!";
    else{
    if(a!=b&&a!=c) cout << "AN THANG!";
    if(b!=a&&b!=c) cout << "BINH THANG!";
    if(c!=a&&c!=b) cout << "CUONG THANG!";}
    return 0;
}