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
    float x, y, a;
    cin >> x1 >> y1;
    cin >> R1;
    cin >> x2 >> y2;
    cin >> R2;
    if(R1<=0||R2<=0){
        cout << "ERROR. PRESS ENTER TO TRY AGAIN." << endl;
        getchar();
        main();
    }
    if(dodai(x1-x2, y1-y2)!=R1+R2){
        if(dodai(x1-x2, y1-y2)>(R1+R2)){
            cout << fixed << setprecision(3) << dodai(x1-x2, y1-y2) - R1 - R2 << endl; //Không giao nhau
        } 
        if(dodai(x1-x2, y1-y2)<(R1+R2)){
            if(x1==x2&&y1==y2) cout << fixed << setprecision(3) << std::abs(R1-R2) << endl; //Trùng tâm
            else{ //Cắt nhau
                y=dodai(x1-x2, y1-y2)-R1;
                x=dodai(x1-x2, y1-y2)-R2;
                a=(R1+R2-x-y)/2;
                cout << fixed << setprecision(3) << a << endl;
            }   
        }
    }
    else cout << 0 << endl << 0 << endl; //Tiếp xúc
    getchar();
    return 0;
}