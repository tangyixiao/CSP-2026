#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 5e5 + 5, M = 3e5 + 5;
int a[N];
bool fl[M];

int main(){
    //freopen("string.in", "r", stdin);
    //freopen("string.out", "w", stdout);

    int n,m;
    cin >> n >> m;

    for(int i = 1; i <= n;i++){
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++){
        stack<int> stk;
        ll cnt = 0;
        for(int j = i;j <= n;j++){
            if(!fl[a[j]]){
                stk.push(a[j]);
                if(a[j] == i){
                    cnt++;
                }
                fl[a[j]] = true;
            }else{
                while(!stk.empty() && stk.top() != a[j]){
                    fl[stk.top()] = false;
                    stk.pop();
                }
            }
        }

        cout <<cnt << " ";
    }

    //fclose(stdin);
    //fclose(stdout);

    return 0;
}
