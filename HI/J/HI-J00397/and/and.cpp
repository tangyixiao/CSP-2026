#include<bits/stdc++.h>
using namespace std;
struct all{
	string tw;
	long long ma;
	long long one;
} a[200005];
bool cmp(all x,all y){
	return x.one>y.one;
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m,ans=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i].ma;
    	int p=a[i].ma;
    	while(p!=0){
    		a[i].tw+=(p%2)+'0';
    		if(p%2==1) a[i].one++;
    		p/=2;
		}
	}
	sort(a+1,a+n+1,cmp);
	string p=a[1].tw;
	for(int i=2;i<=m;i++){
		int l=max(p.size()-1,a[i].tw.size()-1),q=0;
		while(q<=l){
			if(p[q]=='1' and a[i].tw[q]=='1') p[q]='1';
			else p[q]='0';
			q++;
		}
	}
	int l=p.size()-1,q=0,t=1;
	while(q<=l){
		ans+=t*(p[q]-'0');
		t*=2;
		q++;
	}
	cout<<ans;
    return 0;
}
