#include<bits/stdc++.h>
using namespace std;

int a[200005],m,b,n;
int main(){
    //freopen("and.in","r",stdin);
    //freopen("and.out","w",stdout);
    cin>>b>>n;
    for(int i=1;i<=b;i++){
        cin>>a[i];
    }
    for(int i=1;i<=b;i++){
        for(int j=i+1;j<=b;j++){
            if(m<i&j){
                m=i&j;
            }

        }
    }
    cout<<m;
    return 0;




}































