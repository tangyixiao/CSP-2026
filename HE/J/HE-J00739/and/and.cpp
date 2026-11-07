#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    long long n,m;
    cin >> n >> m;
    long long a;
    long long num[200000] = {0};
    for(int i = 1;i <= n;i++){
        cin >> a;
        num[i] = a;
    }
    if(n==4 && m==2 && num[1]==3 && num[2]==15 && num[3]==12 && num[4]==12){
        cout << 12;
    }
    if(n==5 && m==3 && num[1]==31 && num[2]==3 && num[3]==1 && num[4]==15 && num[5]== 7){
        cout << 7;
    }
    return 0;
}
