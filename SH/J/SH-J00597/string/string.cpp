#include<bits/stdc++.h>
using namespace std;
int n,a[200005],f,g;
long long len,ans,cnt;
int mn=1e9;
string s,s2;
char x;
bool check(int k){
	for(int i=1;i<=n;i++) if(a[i]%k) return 0;
	return 1;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	s="?",s2="!";
	cin>>n;
	if(n==1){
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i]>>x;
		mn=min(mn,a[i]);
		s+=x;
		if(a[i]!=a[i-1]&&i!=1) f=1;
	}
	if(!f){
		g=a[1];
	}
	else{
		g=1;
		for(int i=1;i<=mn;i++){
			if(check(i)) g=max(g,i);
		}
	}
	for(int i=1;i<=n;i++){
		a[i]/=g;
		len+=a[i];
		for(int j=1;j<=a[i];j++) s2+=s[i];
	}
	for(int i=1;i<=n;i++){
		if(s2[i]!=s2[len-i+1]){
			ans++;
			s2[i]=s2[len-i+1]; 
		}
	}
	cout<<ans*g;
	return 0;
} 
