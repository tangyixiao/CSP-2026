#include <iostream>
#include <string>
#include <cstdint>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    struct z{
        int a;
        char c;
    };
    cin >> n;
    z s[n + 1];
    for (int i = 1;i <= n;++i){
        cin >> s[i].a >> s[i].c;
    }
    int64_t lon = 0;
    for (int i = 1;i <= n;++i){
        lon += s[i].a;
    }
    long long l = (lon / 2),li = 1,lj,ri,rj;
    while (s[li].a < l){
        l -= s[li].a;
        ++li;
    }
    lj = l;
    ri = li;
    rj = lj + 1;
    if (rj > s[ri].a){
        ++ri;
        rj = 1;
    }
    if (lon % 2 == 1){
        ++lj;
    }
    if (lj > s[li].a){
        ++li;
        lj = 1;
    }
    long long sum = 0;
    while (li > 0){
        long long maxx = min(lj,s[ri].a - rj + 1);
        if (s[li].c != s[ri].c){
            sum += maxx;
        }
        lj -= maxx;
        rj += maxx;
        if (lj < 1){
            --li;
            lj = s[li].a;
        }
        if (rj > s[ri].a){
            ++ri;
            rj = 1;
        }
    }
    cout << sum;
    return 0;
}

