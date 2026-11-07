#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a;
string ans;
struct mode{
	string s;
	long long shu;
	long long dd;
}b[2000001];
bool cmp(mode aa,mode bb){
	return aa.shu>bb.shu;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a;
		while(a>0){
			if (a%2==1){
				b[i].shu++;
			}
			b[i].dd++;
			char c=a%2+'0';
			b[i].s=c+b[i].s;
			a=a/2;
			
		}
		cout<<b[i].s<<" ";
	}
	sort(b+1,b+n+1,cmp);
	for (int i=1;i<=n;i++){
		cout<<b[i].s<<endl;
	}
	long long d=0;
	for(int i=1;i<=m;i++){
		d=max(d,b[i].dd);
	}
	for(int i=2;i<=m;i++){
		for (int j=1;j<=d;j++){
			if (b[i].s[j]==1&&b[i-1].s[j]==1){
				ans=b[i].s[j]+ans;
			}
			else{
				ans='0'+ans;
			}
		}
	}
	cout<<ans<<" ";
	long long x=1;
	long long ans1=1;
	for (int i=ans.size();i>=0;i--){
		if (ans[i]=='1'){
			ans1=ans[i]*x;
		}
		x*=2;
	}
	cout<<ans1;
	return 0;
}
