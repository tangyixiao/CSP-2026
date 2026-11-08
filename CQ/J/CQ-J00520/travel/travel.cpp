#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#define endl '\n'
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]) {
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int d1{}, x1{}, d2{}, x2{}; char c1{}, c2{};
    cin >> d1 >> x1 >> c1 >> d2 >> x2 >> c2;
    bool f1 = (d1 == d2);
    bool f2 = (f1 && x1 == x2);
    bool f3 = (f2 && (c1 <= 'C' && c2 <= 'C' || c1 >= 'D' && c2 >= 'D'));
    bool f4 = (f3 && abs(c1 - c2) == 1 || min(c1, c2) == 'D' && max(c1, c2) == 'F');
    cout << f1 << f2 << f3 << f4 << endl;
    return 0;
}