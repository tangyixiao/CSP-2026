#include <iostream>
#include <algorithm>
#include <cstdint>
using namespace std;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int64_t n,m;
    cin >> n >> m;
    int64_t a[n + 1];
    for (int i = 1;i <= n;++i){
        cin >> a[i];
    }
    sort(a + 1,a + n + 1);
    cout << a[n - m + 1];
    return 0;
}