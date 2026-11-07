#include<bits/stdc++.h>
#define int long long

using namespace std;
int a[200005],n,m,ans = -1;
bool b[200005];
int f1(string s){
	int sum=0,k = 1;
	for(int i = s.size()-1;i >= 0;i--){
		sum+=(s[i]-'0')*k;
		k*=2;
	}
	return sum;
}
string f2(int sum){
	string s;
	while(sum!=0){
		int k = sum%2;
		char c = k+'0';
		s=c+s;
		sum/=2;
	}
	return s;
}
string f3(string s,string s1){
	int l1 = s1.size(),l2 = s.size();
	if(l1<l2){
		for(int i = 1;i <= l2-l1;i++){
			s='0'+s1;
		}
		l1=l2;
	}else{
		for(int i = 1;i <= l1-l2;i++){
			s='0'+s;
		}
		l2=l1;
	}
	for(int i = 0;i < l1;i++){
		if(s1[i]=='0'){
			s[i]='0';
		}
	}
	return s;
}
void f(string s,int dep){
	if(dep==m){
		ans = max(f1(s),ans);
		return;
	}
	for(int i = 1;i <= n;i++){
		if(b[i]==0){
			b[i]=1;
			s=f3(s,f2(a[i]));
			f(s,dep+1);
			b[i]=0;
		}
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i = 1;i <= n;i++){
		cin>>a[i];
	}
	for(int i = 1;i <= n;i++){
		b[i]=1;
		f(f2(a[i]),0);
		b[i]=0;
	}
	cout<<ans;
	return 0;
} 