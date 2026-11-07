#include <bits/stdc++.h>
using namespace std;
	int n;
	string s="",s1="";
	long long x[100010],ans;
	bool f=true;
	int x1;
	char a,a1;
//bool ans1(){
//	int k=s/2;
//	for(int i=1;i<=k;i++){
//		s1=
//	}
//}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	cin>>x1>>a;
	a1=a;
	for(int j=1;j<=x1;j++){
			s=s+a;
	}
	for(int i=2;i<=n;i++){
		cin>>x1>>a;
		for(int j=1;j<=x1;j++){
			s=s+a;
		}
		if(a1!=a){
			f=false;
		}
		a1=a;
	} 
	if(f==true){
		cout<<0;
		return 0;
	} 
	for(int i=s.size()-1;i>=0;i--){
		s1=s1+s[i];
	}
	for(int i=0;i<s.size();i++){
		if(s[i]!=s1[i]) ans++;
	} 
	cout<<ans/2;
	return 0;
}
