#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 2e5 + 5;

ll x[N], d[N][35];
int n, m, len;
ll ans = 0;

void func(){
    vector<int> old;
    bool fl = true;
    for(int k = len; k >= 0; k--){
        vector<int> now;
        for(int i = 1; i <= n;i++){
            if(d[i][k] == 1){
                now.push_back(x[i]);
            }
        }

        if(fl && now.size() >= m){
            fl = false;
            ans = pow(2, k);
            old = now;
        }else if(now.size() >= m){
            int cnt = 0;
            for(int x : now){
                for(int y :old){
                    if(x == y){
                        cnt++;
                        break;
                    }
                }
            }

            if(cnt >= m){
                ans += pow(2, k);
                old = now;
            }
        }
    }
    return;
}

int main(){
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for(int i = 1; i <= n;i++){
        cin >> x[i];
    }


    sort(x + 1,x + 1 + n);

    for(int i = 1; i <= n;i++){
        int tmp = x[i],j = 0;
        while(tmp){
            d[i][j++] = tmp % 2;
            tmp /= 2;
        }
        len = max(len, j - 1);
    }

    if(m == 1){
        cout << x[n] << '\n';
    }else if(m == n){
        ans = x[1];
        for(int i = 2; i <= n;i++){
            ans &= x[i];
        }
    }else if (m == 2){
        for(int i = 1; i <= n;i++){
            for(int j = i + 1; j <= n;j++){
                ans = max(ans,(ll) x[i] & x[j]);
            }
        }
    }else if(m == n - 1){
        ans = x[2];
        for(int i = 3; i <= n;i++){
                ans &= x[i];

        }
    }else{
        func();
    }

    cout << ans << endl;

    fclose(stdin);
    fclose(stdout);

    return 0;
}
