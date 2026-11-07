#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct zifu{
    int a;
    char c;
};
zifu s[200005];
int n;
ll cnt;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i].a>>s[i].c;
    }
    int l=1,r=n;
    while(l<r){
        if(s[l].c!=s[r].c){
            if(s[l].a>s[r].a){
                cnt+=s[r].a;
                s[l].a-=s[r].a;
                r--;
            }else if(s[l].a<s[r].a){
                cnt+=s[l].a;
                s[r].a-=s[l].a;
                l++;
            }else{
                cnt+=s[l].a;
                l++;
                r--;
            }
        }else{
            if(s[l].a>s[r].a){
                s[l].a-=s[r].a;
                r--;
            }else if(s[l].a<s[r].a){
                s[r].a-=s[l].a;
                l++;
            }else{
                l++;
                r--;
            }
        }
    }
    cout<<cnt;
    return 0;
}
