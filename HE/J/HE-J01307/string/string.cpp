#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in ","r",stdin);
    freopen("string.out ","w",stdout);
    string s;
    long long n,sum;
    string c;
    cin >> n;
    for(int i = 1;i<= n;i++){
        cin >> sum;
        cin >> c;
        for(int j = 1;j<= sum;j++){
            s+= c;
        }
    }
    long long x = 0,y = s.size(),cnt = 0;
    while(x<=y){
        if(s[x] != s[y-1]){
            s[y] = s[x];
            cnt++;
        }
        x++;
        y--;
    }
    cout << cnt;
    return 0;
}
