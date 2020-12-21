#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, d, e, f;
    double i, k, da, dx, dy;
    cin >> a >> b >> c >> d >> e >> f;
    if(pow(a, 2)+pow(b, 2)==0||pow(d, 2)+pow(e, 2)==0) main();
    else{
        if((-a/b)==(-d/e)&&(c/b)!=(f/e)) cout << "SONG SONG";
        if((-a/b)==(-d/e)&&(c/b)==(f/e)) cout << "TRUNG NHAU";
        if((-a/b)!=(-d/e)){
             da=a*e-d*b; dx=c*e-f*b; dy=a*f-d*c;
             i=dx/da; k=dy/da;
             cout << i <<" "<< k << endl;
        }
    }
    return 0;
}