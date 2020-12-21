#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float dodai(float x,float y){
    float ans= sqrt(x*x+y*y);//Hàm tính độ dài
    return ans;
}
int main() //Hàm tính khoảng cách
{
    float x1, x2, y1, y2, R1, R2;
    cout << "I1(x1, y1): "; cin >> x1 >> y1;
    cout << "R1: "; cin >> R1;
    cout << "I2(x2, y2): "; cin >> x2 >> y2;
    cout << "R2: "; cin >> R2;
    if(R1<=0||R2<=0){
        cout << "ERROR. PRESS ENTER TO TRY AGAIN." << endl;
        getchar();
        main();
    }
    if(dodai(x1-x2, y1-y2)!=R1+R2){
        if(dodai(x1-x2, y1-y2)>(R1+R2)) cout << "KHONG GIAO NHAU" << endl;
        if(dodai(x1-x2, y1-y2)<(R1+R2)){
            if(x1==x2&&y1==y2) cout << "CUNG TAM" << endl;
            else cout << "CAT NHAU" << endl;
        }
    }
    else cout << "TIEP XUC" << endl << 0 << endl;
    getchar();
    return 0;
}