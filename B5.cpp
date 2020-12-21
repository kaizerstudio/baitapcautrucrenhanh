#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float dodai(float x,float y){
    float ans= sqrt(x*x+y*y); //Hàm tính độ dài
    return ans;
}
int main(){
    int x1,y1,x2,y2,x3,y3; // Toạ độ 3 đỉnh tam giác
    float a, b, c, p; // 3 cạnh tương ứng + nửa chu vi
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    a= dodai(x3-x2, y3-y2);
    b= dodai(x2-x1, y2-y1);
    c= dodai(x3-x1, y3-y1);
    if(a+b>=c&&b+c>=a&&a+c>=b){
        p=(a+b+c)/2;
        cout << fixed << setprecision(3) << 2*p << endl << sqrt(p*(p-a)*(p-b)*(p-c)) << endl; //Công thức Heron
    }
    else cout << "No";
    getchar();
}