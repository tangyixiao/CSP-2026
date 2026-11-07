#include <bits/stdc++.h>
using namespace std;
const long long N=2e5+10;
long long n;
long long a[N];
char c[N];
int main (){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++){
        cin>>a[i]>>c[i];
    }
    long long cnt=0;
    long long l1=1;
    long long r1=n;
    while(l1<=r1){
        if(a[l1]==a[r1]&&c[l1]!=c[r1]){
            cnt+=a[l1];
            l1++;
            r1--;
        }else if(a[l1]!=a[r1]&&c[l1]==c[r1]&&l1+1!=r1){
            if(a[l1]>a[r1]){
                a[l1]-=a[r1];
                r1--;
            } else{
                a[r1]-=a[l1];
                l1++;
            }
        }  else if(a[l1]!=a[r1]&&c[l1]!=c[r1]){
            if(a[r1]<a[l1]){
                cnt+=a[r1];
                a[l1]-=a[r1];
                r1--;
            } else{
                cnt+=a[l1];
                a[r1]-=a[l1];
                l1++;
            }
        } else{
            l1++;
            r1--;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
