#include <bits/stdc++.h>
using namespace std;
int n,x;
char m;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    if(n<=2){
        cout<<0;
    }
    else{
        for(int i=1;i<=n;i++){
            cin>>x;
            cout<<x;
            break;
        }
    }
    return 0;
}
