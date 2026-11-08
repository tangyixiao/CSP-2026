#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m,max_s;
ll ans=1;
struct node{
    int num,cnt,max_c;
    string num_2;
}s[200005];
vector<int> f[200005];
vector<int> v;
int flag[200005];
string jz(int n,int id){
    string a="";
    while(n){
        a+=(n%2)+'0';
        n/=2;
    }
    string ans="";
    for(int j=a.size()-1;j>=0;j--){
        ans+=a[j];
    }
    return ans;
}
bool cmp(int a,int b){
    return s[a].cnt>s[b].cnt;
}
bool cmp1(node a,node b){
    if(a.cnt!=b.cnt) return a.cnt>b.cnt;
    return a.max_c<b.max_c;
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        int num;
        scanf("%d",&num);
        s[i].num=num;
        s[i].num_2=jz(num,i);
        max_s=max(max_s,(int)(s[i].num_2.size()));
        for(int j=0;j<s[i].num_2.size();j++){
            if(s[i].num_2[j]=='1') s[i].cnt++;
        }
    }
    for(int i=1;i<=n;i++){
        string t=s[i].num_2;
        int c=max_s-t.size();
        for(int j=0;j<t.size();j++){
            if(t[j]=='1'){
                s[i].max_c=min(s[i].max_c,c);
                f[c++].push_back(i);
            } 
        }
    }
    //for(int i:f[0]){
     //   cout << i << " ";
    //}
    //cout << endl;
    for(int i=0;i<max_s;i++){
        sort(f[i].begin(),f[i].end(),cmp);
        if(v.size()>=m){
            break;
        }
        for(int j:f[i]){
            if(!flag[j]){
                v.push_back(j);
                flag[j]=1;
            } 
            if(v.size()>=m) break;
        }
    }
    ans=s[v[0]].num;
    //cout << ans << endl;
    //cout << m << " " << v.size() << endl;
    for(int i=1;i<v.size();i++){
        //cout << s[v[i]].num << endl;
        ans&=s[v[i]].num;
    }
    //cout << ans << endl;
    sort(s+1,s+1+n,cmp1);
    ll sum=s[1].num;
    for(int i=2;i<=m;i++){
        sum&=s[i].num;
    }
    printf("%lld\n",max(ans,sum));
    return 0;
}