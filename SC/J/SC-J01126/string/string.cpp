#include<bits/stdc++.h>
using namespace std;
int n,a[200005],si=0,f=1;
int ans;
string s,s1;
string p,q;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=si;j<si+a[i];j++){
			s[j]=c[i];
			s1[j]=c[i];
		}si+=a[i];
	}
	if(n==1){
		cout<<0;return 0;
	}reverse(s1.begin(),s1.end());
	for(int i=0;i<si;i++){
		if(s[i]!=s1[i]) f=0;
	}if(f==1){
		cout<<0;return 0;
	}
	return 0;
}