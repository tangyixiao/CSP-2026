#include <bits/stdc++.h>
using namespace std;

vector<long long> b;
int ddd[300005];
int p[500005];
vector<long long> a;



int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);

    int n,m;
    cin >> n >> m;
    a.resize(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    for(int i = 0;i<n;i++){
        int now_d = 0;
        for(int j = i;j<n;j++){
            auto it = find(p,p+now_d,a[j]);
            if(it!=p+now_d){
                now_d = it-p+1;
            }else{
                p[now_d] = a[j];
                now_d++;
            }
        }
        for(int j = 0;j<now_d;j++){
            ddd[p[j]]++;
        }
    }

    for(int j = 1;j<=m;j++){
        cout << ddd[j] << " ";
    }
    return 0;
}
