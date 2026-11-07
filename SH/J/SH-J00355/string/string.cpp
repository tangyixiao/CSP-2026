/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int n,cnt=0;
    cin>>n;
    for(int i=1;i<=n;++i){
        int a;
        char c;
        cin>>a>>c;
        s.append(a,c);
    }
    int len=s.size();
    for(int i=0;i<len/2;++i){
        if(s[i]!=s[len-i-1]){
            ++cnt;
        }
    }
    cout<<cnt<<"\n";

    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
const int MAXN=200005;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    long long n,cnt=0,a[MAXN];
    char c[MAXN];
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>a[i]>>c[i];
    }

    long long pos1=0,pos2=0,i1=1,i2=n;
    do{
        if(a[i1]-pos1<a[i2]-pos2){
            if(c[i1]!=c[i2]){
                cnt+=a[i1]-pos1;
            }
            pos2+=a[i1]-pos1;
            ++i1,pos1=0;
        }else if(a[i1]-pos1==a[i2]-pos2){
            if(c[i1]!=c[i2]){
                cnt+=a[i1]-pos1;
            }
            ++i1,--i2;
            pos1=pos2=0;
        }else{
            if(c[i1]!=c[i2]){
                cnt+=a[i2]-pos2;
            }
            pos1+=a[i2]-pos2;
            --i2,pos2=0;
        }
    }while(i1<i2);
    cout<<cnt<<"\n";

    return 0;
}