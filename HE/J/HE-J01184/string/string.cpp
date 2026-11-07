#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,a[500110],he=1,b[500110],s1=0,s2=0,x1=1,x2=1,c=0;
char sa[500100],s[5000100];
//Trick||Treat!
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>sa[i];
		he+=a[i];
		for(ll j=he-a[i];j<=he;j++){
			s[j]=sa[i];
		}
	}
	ll l=1,r=he,js=0;
	while(l<r){
		if(s[l]!=s[r]){
			js++;
		}
		l++;
		r--;
	}
	cout<<js;
	return 0;
} 
