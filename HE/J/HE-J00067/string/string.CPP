#include <bits/stdc++.h>
using namespace std;
int a,b,d,i,j,e;
int g = 1;
int ans;
char c;
char f[200010];
char q[200010];
int main(){
    freopen("string.out","r",stdout);
    freopen("string.in","w",stdin);
    cin >> a;
    while(i <= a){
        cin >> b;
        cin >> c;
        i++;
        while(j <= b){
        f[e] = c;
        e++;
        j++;
    }
    }
    for(int w = e;w >= 1;w++){
        q[g] = f[w];
        e++;
    }
    for(int y = 1;y >= 1;y++){
        if(q[y] != f[y]){
            ans += 1;
        }
    }
cout << ans;
return 0;
}
