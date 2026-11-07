#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,d,v;
string s;
int a[N];
char b[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>b[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s+=b[i];
		}
	}
	for(int i=1;i<=n;i++){
		if(s[i]!=s[n-i+1]){
			d++;
		}
	}
	cout<<d;
	return 0;
}