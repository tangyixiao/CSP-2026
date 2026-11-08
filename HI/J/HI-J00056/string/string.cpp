#include<bits/stdc++.h>
using namespace std;
int n,l=0;
int a[200010];
char c[200010];
string t,t1;
bool f=true,f1=true;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if(a[i]!=1) f=false;
	}
	for(int i=2;i<=n;i++){
		if(c[i]!=c[i-1]) f1=false;
	}
	if(f1==true){
		cout<<0;
		return 0;
	}
	if(n==1){
		cout<<0;
		return 0;
	}
	if(n==2){
		if(c[1]==c[2] || a[1]==a[2]){
			cout<<0;
			return 0;
		}
	}
	if(f==true){
		string s,s1;
		for(int i=1;i<=n;i++){
			s[i]=c[i];
		}
		s1=s;
		reverse(s1.begin(),s1.end());
		if(s1==s){
			cout<<0;
			return 0;
		}
		else{
			int k=0;
			for(int i=1;i<=n;i++){
				if(s1[i]!=s[i]) k++;
			}
			int k1=k/2;
			cout<<k1;
			return 0;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			t+=c[i];
		}
		l+=a[i];
	}
	t1=t;
	reverse(t1.begin(),t1.end());
	if(t1==t){
		cout<<0;
		return 0;
	}
	else{
		int z=0;
		for(int i=0;i<l;i++){
			if(t1[i]!=t[i]) z++;
		}
		int z1=z/2;
		cout<<z1;
		return 0;
	}
	return 0;
}
