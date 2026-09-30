#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    double b, c;

    cin >> a >> b >> c;

    double answer = b + (c * 0.15);

    cout << "TOTAL = R$ " << fixed << setprecision(2) << answer << endl;

    return 0;
}
