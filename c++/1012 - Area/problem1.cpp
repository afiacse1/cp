#include <bits/stdc++.h>
using namespace std;

int main()
{

    double a, b, c;

    cin >> a >> b >> c;

    double answer1 = 0.5 * a * c;
    double answer2 = 3.14159 * (c * c);
    double answer3 = c * (a + b) / 2;
    double answer4 = b * b;
    double answer5 = a * b;

    cout << "TRIANGULO: " << fixed << setprecision(3) << answer1 << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << answer2 << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << answer3 << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << answer4 << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << answer5 << endl;

    return 0;
}
