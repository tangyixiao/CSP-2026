#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n,m,v[300005] = {0},cnt[300005] = {0};
    cin >> n>> m;
    queue<int> a,c;
    stack<int> b;
    for(int i = 1;i <= n;i++){
        int t;
        cin >> t;
        a.push(t);
    }
    int w = n,q = 0;
    for(int i = 1;i <= n;i++){
        if(i >= 2){
            a.pop();
            w--;
        }
        c = a;
        for(int j = 1;j <= w;j++){
            if(v[c.front()] == 0) v[c.front()] = j;
            else{
                for(int k = 1;k <= q - v[c.front()] + 1;k++){
                    b.pop();
                    q--;
                }
            }
            b.push(c.front());
            q++;
            c.pop();
        }
        for(int i = 1;i <= m;i++){
            if(v[i] > 0) cnt[i]++;
        }
    }
    for(int i = 1;i <= m;i++){
        cout << cnt[i];
    }
    return 0;
}
//燃尽了
//给点分吧，我以后会改变社会的，真的
