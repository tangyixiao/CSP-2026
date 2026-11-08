#include<bits/stdc++.h>
using namespace std;
int n;
int a[1000010];
char b[1000010];
string s;
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s+=b[i];
		}
	} 
	long long len=s.size();
	for(int i=0;i<len/2;i++){
		if(s[i]!=s[len-i-1])ans++;
	}
	cout<<ans;
	return 0;
}
