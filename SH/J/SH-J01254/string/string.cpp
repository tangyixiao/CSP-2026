#include <bits/stdc++.h>
using namespace std;
#define int long long

struct node{
    int a;
    char c;
};

int n,a[200005],b[200005],ans;
char c[200005];
deque <node> q1,q2;

signed main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);

    cin >> n;
    int x=1;
    for(int i=1;i <= n;i++){
        cin >> a[i] >> c[i];
        b[i] = x;
        x += a[i];
    }
    x--;
    int now=1;
    for(int i=1;i <= n;i++){
        if(x&1){
            int s=x/2+1;
            if(b[i]<=s&&s<=b[i]+a[i]-1){
                if(b[i]!=s){
                    q1.push_front({s-b[i],c[i]});
                }
                if(b[i]+a[i]-1!=s){
                    q2.push_front({b[i]+a[i]-1-s,c[i]});
                }
                now=2;
                continue;
            }
        }else{
            int s=x/2;
            if(b[i]<=s&&s<b[i]+a[i]-1){
                if(b[i]!=s){
                    q1.push_front({s-b[i],c[i]});
                }
                if(b[i]+a[i]-1!=s+1){
                    q2.push_front({b[i]+a[i]-1-s-1,c[i]});
                }
                now=2;
                continue;
            }
            else if(s==b[i]+a[i]-1){
                if(b[i]!=s){
                    q1.push_front({s-b[i],c[i]});
                }
                if(b[i+1]+a[i+1]-1!=s+1){
                    q2.push_front({b[i+1]+a[i+1]-1-s-1,c[i+1]});
                }
                if(c[i]!=c[i+1]) ans++;
                i++;
                now=2;
                continue;
            }
        }
        if(now==1){
            q1.push_front({a[i],c[i]});
        }else{
            q2.push_back({a[i],c[i]});
        }
    }

    while(!q1.empty()&&!q2.empty()){
        auto [a1,c1]=q1.front();
        auto [a2,c2]=q2.front();
        q1.pop_front(),q2.pop_front();
        int s=(c1!=c2);
        if(a1>a2){
            ans+=s*a2;
            q1.push_front({a1-a2,c1});
        }else if(a1<a2){
            ans+=s*a1;
            q2.push_front({a2-a1,c2});
        }else{
            ans+=s*a1;
        }
    }
    cout << ans;

    fclose(stdin);
    fclose(stdout);
    return 0;
}
