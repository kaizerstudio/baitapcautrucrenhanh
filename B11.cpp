#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n; cin >>n;
    if(n<=0||n>1000) main();
    if(n>0&&n<6) cout << fixed << setprecision(2) << (float) (6500*n) << endl << (float) (6500*n)*12/100 << endl << (float) (6500*n)*112/100 << endl;
    if(n>=6&&n<=15) cout << fixed << setprecision(2) << (float) (6500*5+(n-5)*7800) << endl << (float) (6500*5+(n-5)*7800)*12/100 << endl << (float) (6500*5+(n-5)*7800)*112/100 << endl;
    if(n>15&&n<=25) cout << fixed << setprecision(2) << (float) (6500*5+10*7800+(n-15)*9200) << endl << (float) (6500*5+10*7800+(n-15)*9200)*12/100 << endl << (float) (6500*5+10*7800+(n-15)*9200)*112/100 << endl;
    if(n>26) cout << fixed << setprecision(2) << (float) (6500*5+10*7800+10*9200+(n-25)*10300) << endl << (float) (6500*5+10*7800+10*9200+(n-25)*10300)*12/100 << endl << (float) (6500*5+10*7800+10*9200+(n-25)*10300)*112/100 << endl;
    return 0;
}