#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float dodai(float x,float y){
    float ans= sqrt(x*x+y*y);//Hàm tính độ dài
    return ans;
}
void khoangcach() //Hàm tính khoảng cách
{
    float x1, x2, y1, y2, R1, R2;
    float x, y, a;
    cout << "Bai 2+3. Nhap vao tam I1(x1, y1) va R1; I2(x2, y2) va R2" <<endl;
    cin >> x1 >> y1 >> R1 >> x2 >> y2 >> R2;
    if(R1<=0||R2<=0){
        cout << "ERROR. Nhan Enter de thu lai." << endl;
        getchar();
        khoangcach();
    }
    if(dodai(x1-x2, y1-y2)!=R1+R2){
        if(dodai(x1-x2, y1-y2)>(R1+R2)){
            cout << "KHONG GIAO NHAU" << endl;
            cout << fixed << setprecision(3) << dodai(x1-x2, y1-y2) - R1 - R2 << endl;
        } 
        if(dodai(x1-x2, y1-y2)<(R1+R2)){
            if(x1==x2&&y1==y2){
                cout << "HAI DUONG TRON CUNG TAM" << endl;
                if(R1>R2) cout << fixed << setprecision(3) << R1-R2 << endl;
                if(R2>R1) cout << fixed << setprecision(3) << R2-R1 << endl;
                if(R2==R1) cout << fixed << setprecision(3) << 0 << endl;
            }
            else{
                cout << "CAT NHAU" << endl;
                y=dodai(x1-x2, y1-y2)-R1;
                x=dodai(x1-x2, y1-y2)-R2;
                a=(R1+R2-x-y)/2;
                cout << fixed << setprecision(3) << a << endl;
            }   
        }
    }
    else cout << "TIEP XUC" << endl << 0 << endl;
    getchar();
}
void kiemtra() //Hàm kiểm tra 1 điểm thuộc đường tròn
{
	float a,b,x,y,R;
    cout << "Bai 1." << endl;
    cout << endl << "Ban kinh: ";
	cin >> R;
    if(R<=0) {
		cout << "Khong hop le! Vui long thu lai!";
        getchar();
        kiemtra();
	}
	cout << "Nhap tam I(a,b): ";
	cin >> a >> b;
	cout << endl << "Nhap diem A(x,y):";
	cin >> x >> y;
	if(dodai(x-a, y-b)==R) cout << endl << "A thuoc duong tron"<<endl;
	else cout << endl << "A khong thuoc duong tron"<<endl;
    getchar();
}
void tamgiac(){ //Hàm tìm bán kính đường tròn ngoại tiếp, chu vi, diện tích tam giác
    int x1,y1,x2,y2,x3,y3;
    float i,k; //toạ độ tâm i
    float a, b, c, p; // 3 cạnh tương ứng + nửa chu vi
    float a1, a2, b1, b2, c1, c2, d, dx, dy; //Định thức Crammer để giải phương trình bậc 1 2 ẩn
    cout << "Bai 4+5. Nhap vao 3 diem A(x1, y1), B(x2, y2), C(x3, y3)." << endl;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    a= dodai(x3-x2, y3-y2);
    b= dodai(x2-x1, y2-y1);
    c= dodai(x3-x1, y3-y1);
    if(a+b>c||b+c>a||a+c>b){
        a1=x1-x2; a2=x1-x3; b1=y1-y2; b2=y1-y3;
        c1=(pow(x1, 2)+pow(y1, 2)-pow(x2, 2)-pow(y2, 2))/2;
        c2=(pow(x1, 2)+pow(y1, 2)-pow(x3, 2)-pow(y3, 2))/2;
        d=a1*b2-a2*b1; dx=c1*b2-c2*b1; dy=a1*c2-a2*c1;
        i=dx/d; k=dy/d;
        cout << fixed << setprecision(3) << dodai(x1-i, y1-k)<<endl;
        p=(a+b+c)/2;
        cout << fixed << setprecision(3) << 2*p << endl << sqrt(p*(p-a)*(p-b)*(p-c)) << endl; //Công thức Heron
    }
    else cout << "No";
    getchar();
}
int main(int argc, const char** argv) {
    kiemtra();
    khoangcach();
    tamgiac();
    return 0;
}