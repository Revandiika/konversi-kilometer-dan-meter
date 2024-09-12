#include <iostream>

using namespace std;

int main()
{
    int angka;
    string s;
    
    cout << "km atau m" << endl;
    cin >> s;
    cout << "berapa ";
    cin >> angka;
    
    if (s == "m"){
        angka /= 1000;
        cout << fixed << angka << " km";
    }
    else {
        angka *= 1000;
        cout << fixed << angka << " m";
    }

    return 0;
}