#include<bits/stdc++.h>
using namespace std;


int main(){
    freopen("and.in", "read", stdin);
    freopen("and.out", "write", stdout);
    int n, m;
    cin >> n;
    int maxn = -1, maxand = -1;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        if (maxn == -1){
            maxn = num;
            continue;
        }
        int maxand_old = maxand;
        maxand = max(maxand, maxn & num);
        if(maxand > maxand_old){
            maxn = num;
        }
    }
    cout << maxn;
    return 0;
}
