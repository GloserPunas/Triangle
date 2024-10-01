#include <iostream>
using namespace std;

void checkTriangle (double a, double b, double c){
    if (a <= 0 || a > 100 || b <= 0 || b > 100 || c <= 0 || c > 100) {
        cout << "input khong hop le" << endl;
    } else {
        if (a + b > c && a + c > b && b + c > a) {
            cout << "Day la 3 canh cua mot tam giac" << endl;
        } else {
            cout << "Day khong phai la 3 canh cua mot tam giac" << endl;
        }
    }
}


int main() {
    double a, b, c;
    cout << "Nhap canh a: ";
    cin >> a;
    cout << "Nhap canh b: ";
    cin >> b;
    cout << "Nhap canh c: ";
    cin >> c;

    checkTriangle(a, b, c);
    return 0;
}

