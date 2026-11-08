#include<bits/stdc++.h>
using namespace std;
namespace STRs{
    int n;string a[200005];char c[200005];
    int cmp(string a,string b){
        if(a.size()>b.size())return 2;
        if(a.size()<b.size())return 0;
        for(int i=0;i<a.size();i++){
            if(a[i]<b[i])return 0;
            if(a[i]>b[i])return 2;
        }
        return 1;
    }
    string add(string a,string b){
        int l=max(a.size(),b.size());
        while(a.size()<l)a="0"+a;
        while(b.size()<l)b="0"+b;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        vector<int> c(20,0);
        for(int i=0;i<l;i++){
            int adds=c[i]+a[i]+b[i]-2*'0';
            if(adds>9){adds-=10;c[i+1]+=1;}
            c[i]=adds;
        }
        reverse(c.begin(),c.end());
        int pos=0;
        while(c[pos]==0 && pos<c.size())pos++;
        string res;
        for(int i=pos;i<c.size();i++)res=res+(char)(c[i]+'0');
        return res;
    }
    string del(string a,string b){
        int l=max(a.size(),b.size());
        while(a.size()<l)a="0"+a;
        while(b.size()<l)b="0"+b;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        vector<int> c(20,0);
        for(int i=0;i<l;i++){
            int dels=c[i]+a[i]-b[i];
            if(dels<0){dels+=10;c[i+1]-=1;}
            c[i]=dels;
        }
        reverse(c.begin(),c.end());
        int pos=0;
        while(c[pos]==0 && pos<c.size())pos++;
        string res;
        for(int i=pos;i<c.size();i++)res=res+(char)(c[i]+'0');
        return res;
    }
    string solve(){
        int l=1,r=n;string ans="0";
        while(l<r){
            int now=cmp(a[l],a[r]);
            if(now==1){
                if(c[l]!=c[r])ans=add(ans,a[l]);
                l++;r--;
            }else if(now==2){
                a[l]=del(a[l],a[r]);
                if(c[l]!=c[r])ans=add(ans,a[r]);
                r--;
            }else{
                a[r]=del(a[r],a[l]);
                if(c[l]!=c[r])ans=add(ans,a[l]);
                l++;
            }
        }
        return ans;
    }
}
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin.tie(0)->ios::sync_with_stdio(0);
    cin>>STRs::n;
    for(int i=1;i<=STRs::n;i++)cin>>STRs::a[i]>>STRs::c[i];
    cout<<STRs::solve()<<"\n";
    return 0;
}
