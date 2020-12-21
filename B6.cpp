#include <iostream>
using namespace std;

int main(){
    int n,h,k,ans; // n vòi phun, k khối nước, h giờ nguyên dương 
    long long int x, y, z; // giá nước lần lượt
    cout.precision(100);
    cout << "So voi phun: "; cin >> n;
    cout << endl << "Thoi gian phun: "; cin >> h;
    cout << endl << "So khoi nuoc moi voi phun: "; cin >> k;
    ans=n*h*k;
    cout << endl << "Gia nuoc: " << endl << "- 99 khoi dau: "; cin >> x;
    cout << endl << "- Tu 100 - 200 khoi: "; cin >> y;
    cout << endl << "- Tu 200 khoi tro len: "; cin >> z;
    if(n<0||h<0||k<0||x<0||y<0||z<0) main();
    if(n*h*k>=0&&n*h*k<100) cout << "Gia nuoc: " << fixed << ans*x << "dong";
    if(n*h*k>=100&&n*h*k<=200) cout << "Gia nuoc: " << fixed << 99*x+(ans-99)*y << " dong";
    if(n*h*k>200) cout << "Gia nuoc: " << fixed << 99*x+101*y+(ans-200)*z << "dong";
    return 0;
}