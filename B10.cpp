#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){
    int a;
    cin >> a;
    if(a>=0&&a<101) cout << "Gia dien: " << fixed << a*550*110/10 << endl;
    if(a>=101&&a<=150) cout << "Gia dien: " << fixed << (100*550+(a-100)*1100)*11/10 << endl;
    if(a>150&&a<=200) cout << "Gia dien: " << fixed << (100*550+50*1100+(a-150)*1470)*11/10 << endl;
    if(a>200) cout << "Gia dien: " << fixed << (100*550+50*1100+50*1470+(a-200)*1600)*11/10 << endl;
    return 0;
}