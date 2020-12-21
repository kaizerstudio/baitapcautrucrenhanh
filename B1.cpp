#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float dodai(float x,float y){
    float ans= sqrt(x*x+y*y);//Hàm tính độ dài
    return ans;
}
int main() //Hàm kiểm tra 1 điểm thuộc đường tròn
{
	float a,b,x,y,R;
    cout << endl << "R= ";
	cin >> R;
    if(R<=0) {
		cout << "WRONG. TRY AGAIN.";
        getchar();
        main();
	}
	cout << "I(a,b): ";
	cin >> a >> b;
	cout << endl << "A(x,y):";
	cin >> x >> y;
	if(dodai(x-a, y-b)==R) cout << endl << "IN ROUND"<<endl;
	else cout << endl << "NOT IN ROUND"<<endl;
    getchar();
    return 0;
}