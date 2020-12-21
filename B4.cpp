#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float dodai(float x,float y){
    float ans= sqrt(x*x+y*y);//Hàm tính độ dài
    return ans;
}
int main(){
    int x1,y1,x2,y2,x3,y3;
    float i,k; //toạ độ tâm I(i,k)
    float a, b, c;
    float a1, a2, b1, b2, c1, c2, d, dx, dy; //Định thức Cramer để giải phương trình bậc 1 2 ẩn
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    a= dodai(x3-x2, y3-y2);
    b= dodai(x2-x1, y2-y1);
    c= dodai(x3-x1, y3-y1);
    if(a+b>=c&&b+c>=a&&a+c>=b){
        a1=x1-x2; a2=x1-x3; b1=y1-y2; b2=y1-y3;
        c1=(pow(x1, 2)+pow(y1, 2)-pow(x2, 2)-pow(y2, 2))/2;
        c2=(pow(x1, 2)+pow(y1, 2)-pow(x3, 2)-pow(y3, 2))/2;
        d=a1*b2-a2*b1; dx=c1*b2-c2*b1; dy=a1*c2-a2*c1;
        i=dx/d; k=dy/d;
        cout << fixed << setprecision(3) << dodai(x1-i, y1-k)<<endl;
    }
    else cout << "No";
    getchar();
    return 0;
}