#include <iostream>
using namespace std;

int main(){
    float a=650000;
    for (int i = 0; i < 5; i++)
    {
        a=a*209/200;
        cout << "Nam " << i+1 << ": " << a << endl;
    }
    getchar();
    return 0;
}