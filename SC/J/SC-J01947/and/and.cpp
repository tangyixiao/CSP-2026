#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long ans=2147483647;
string s[200005];
long long c[50];
struct stu{
	long long ss,zz;
}a[200005];
bool cmp(stu x,stu y){
	return x.zz>y.zz;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		long long x,t=0;cin>>x;
		a[i].ss=x;
		while(x!=0){
			int b=(x%2==1?1:0);
			s[i]+=b+'0';
			t++,c[t]+=b;
			x/=2;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<s[i].size();j++){
			if(s[i][j]=='1')a[i].zz+=c[j+1]-1;
		}
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=m;i++)ans&=a[i].ss;
	cout<<ans;
	return 0;
}