#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n = 3.14159;
    double r;

    cin >> r;

    double ans = n * (r * r);

    cout << "A=" << fixed << setprecision(4) << ans << endl;

    return 0;
}
