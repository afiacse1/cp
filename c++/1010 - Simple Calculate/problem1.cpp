#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    double e, f;

    cin >> a >> b >> e >> c >> d >> f;

    double answer = (b * e) + (d * f);

    cout << "VALOR A PAGAR: R$ " << fixed
         << setprecision(2) << answer << endl;

    return 0;
}
