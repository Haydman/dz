#include <iostream>
#include <cmath>
using namespace std;

float Srectangle(float a, float b){
    return a * b;
}
float Striangle(float a, float b){
    return a * b / 2;
}
float Scircle(float r){
    return r**2;
}

int main(){
    float a, b, r;
    cout << "Введите длину прямоугольника: ";
    cin >> a;
    cout << "Введите ширину прямоугольника: ";
    cin >> b;
    cout << "Площадь прямоугольника: " << Srectangle(a, b) << endl;
    cout << "Введите длину основания треугольника: ";
    cin >> a;
    cout << "Введите высоту треугольника: ";
    cin >> b;
    cout << "Площадь треугольника: " << Striangle(a, b) << endl;
    cout << "Введите радиус круга: ";
    cin >> r;
    cout << "Площадь круга: " << Scircle(r) << endl;
}
