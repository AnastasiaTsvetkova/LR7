#include <iostream>

using namespace std;

double F1(double a, double b) 
{
    double c;
    c = 2 / (1 / a + 1 / b);
    return c;
}
void F2(double& x, double& y, double& z) 
    {
        double a, b, c; 
        b = x;
        if (y < b)
            b = y;
        if (z < b)
            b = z;
        a = x;
        if (y > a)
            a = y; 
        if (z > a)
            a = z;
        if (x != b && x != a)
            c = x;
        if (y != b && y != a)
            c = y;
        if (z != b && z != a)
            c = z;
        x = b;
        y = c;
        z = a;
    }

int main()
{
    setlocale(LC_ALL, "RU");
    
    double a, b;
    cout << "Введите числа:" << endl;
    do {
        cout << "Число a ";
        cin >> a;
        cout << endl;
        cout << "Число b ";
        cin >> b;
        cout << endl;
        if (a == 0 || b == 0)
            cout << "Ошибка:";
    } while (a == 0 || b == 0); cout << endl;
    cout << "Среднее гармоническое  " << F1(a, b) << endl;
    cout << endl;
   
    double x1, x2, x3;
    cout << "Введите числа:" << endl;
    cout << "x1  ";
    cin >> x1;
    cout << endl;
    cout << "x2 ";
    cin >> x2;
    cout << endl;
    cout << "x3  ";
    cin >> x3;
    cout << endl;
    F2(x1, x2, x3);
    cout << x1 << "/" << x2 << "/" << x3 << endl;
    system("pause");
    return 0;
}


