#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){
    int a,b,ans;
    cout.precision(100);
    cout << "Thang truoc: "; cin >> a;
    cout << endl << "Thang nay: "; cin >> b;
    ans = std::abs(a-b);
    if(ans>=0&&ans<61) cout << "Gia dien: " << fixed << ans<< "*1000=" << ans*1000 << "dong";
    if(ans>=61&&ans<=120) cout << "Gia dien: " << fixed << "1000*60+1200*"<<ans-60<<"="<<60*1000+(ans-60)*1200 << "dong";
    if(ans>120&&ans<=300) cout << "Gia dien: " << fixed << "1000*60+1200*60+2000*"<<ans-120<<"="<<60*1000+60*1200+(ans-120)*2000 << "dong";
    if(ans>300) cout << "Gia dien: " << fixed << "1000*60+1200*60+2000*180+4000*"<<ans-300<<"="<<60*1000+60*1200+180*2000+(ans-300)*4000 << "dong";
    return 0;
}