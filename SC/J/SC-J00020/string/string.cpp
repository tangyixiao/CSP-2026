#include<bits/stdc++.h>
using namepaces std;
int a;
string b;
char x = '';
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","r",stdont);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        cin >> x;
        while(a--){
            b += x;
        }
    }
    int x,y;
    for (int i=1; i<=b.size();i++){
        if(x<=y){
            if(b[x]!=b[y]){
                ans++;
            }
            x++;y--;
        }else{
            cout << ans;
        }
    }

    return 0;
}
