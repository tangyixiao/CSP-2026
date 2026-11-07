#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n,m,a[N],b[33],o,sum,sun;
string xy,cxy;
void clm(){
	b[0]=1;
	b[1]=2;
	for(int i=2;i<=31;i++){
		b[i]=b[i-1]*2;
	}
}
string bb(int a){
	string s1;
	while(a!=0){
	if(a%2==1){
		s1+="1";
		a/=2;
	}
	if(a%2==0){
		s1+="0";
		a/=2;
	}
	}
	reverse(s1.begin(),s1.end());
	return s1;
}
int andd(string a,string s){
	int ans=0;
	int len=max(a.size(),s.size());
	for(int i=len-1;i>0;i--){
		if(a[i]==s[i]&&a[i]=='1'){
			ans+=b[i];
		}
	}
	return ans;
}
bool cmp(int a,int b){
	return a>b;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	clm();
	if(m==n){
		xy=bb(a[1]);
		for(int i=2;i<=n;i++){
			sum=andd(xy,bb(a[i]));
			xy=bb(sum);
		}
		cout<<sum;
		return 0;
	}
	if(m==1){
		cout<<a[1];
		return 0;
	}

	return 0;
}
