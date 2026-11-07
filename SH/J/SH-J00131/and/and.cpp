#include<bits/stdc++.h>
using namespace std;
long long a[200010];string s[200010];
string zhuanzhuan(long long k){
	string s="";
	while(k>0){
		if(k%2==1) s+='1';
		else s+='0';
		k/=2;
	}
	return s;
}
long long ans(int num,string s[]){
	int minn=100000,answer=0;int chen=1;
	for(int i=1;i<=num;++i){
		int sum=s[i].size()-1;
		minn=min(minn,sum);
	}
	for(int i=0;i<=minn;++i){
		bool flag=1;
		for(int j=1;j<=num;++j){
			if(s[j][i]=='0')flag=0;
		}
		if(flag==1) answer+=chen;
		chen*=2;
	}
	return answer;
}
bool cmp(long long x,long long y){
	return x>=y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;++i) cin>>a[i];
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=m;++i) s[i]=zhuanzhuan(a[i]);
	cout<<ans(m,s);
	return 0;
}
