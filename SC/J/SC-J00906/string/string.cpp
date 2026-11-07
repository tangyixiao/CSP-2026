#include<bits/stdc++.h>
using namespace std;
long long n,m,jsq;
long long a[100005];
char c[100005];
string s,s1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>a[i]>>c[i]; 
		n+=a[i];
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=a[i];j++){
			s=s+c[i];
		}
	}
	for(int i=floor(n/2)-1;i>=0;i--){
		s1=s1+s[i];
	}
	for(int i=ceil(n/2),j=0;i<n&&j<floor(n/2);i++,j++){
		if(s1[j]!=s[i])jsq++;
	}
	if(n%2==1)cout<<jsq-1; 
	else cout<<jsq;
	return 0;
}
