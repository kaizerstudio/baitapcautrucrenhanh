#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n; cin >> n;
    cout << fixed << setprecision(2) << (float) n*10/11 << " " << (float) n*1/11 << endl;
    return 0;
}