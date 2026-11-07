#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a[200005],cnt,ans;
char c[200005];
struct para{
    int s,e;
    char c;
};
vector<para> pos,neg;
signed main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i]>>c[i];
        cnt+=a[i];
    }
    for(int i=1,j=1;i<=cnt/2;j++){
        pos.push_back({i,min(cnt/2,i+a[j]-1),c[j]});
        i+=a[j];
    }
    for(int i=1,j=n;i<=cnt/2;j--){
        neg.push_back({i,min(cnt/2,i+a[j]-1),c[j]});
        i+=a[j];
    }
    for(unsigned int i=0,j=0,ptr=1;i<pos.size()&&j<neg.size();){
        int ptre=min(pos[i].e,neg[j].e);
        if(pos[i].c!=neg[j].c) ans+=ptre-ptr+1;
        if(pos[i].e<=neg[j].e) i++;
        else j++;
        ptr=ptre+1;
    }
    cout<<ans;
    return 0;
}
unsigned long long rp=-1;