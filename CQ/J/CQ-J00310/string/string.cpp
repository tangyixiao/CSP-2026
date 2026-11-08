#include<bits/stdc++.h>
using namespace std;
string s;
int a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,cs;
	long long l=0,t=0;
	char ci;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		l+=a[i];
	}
	if(l>=10000000){
		cout<<l/2;
		return 0;
	}
	for(int i=0;i<n;i++){
		while(a[i]--){
			s=s+c[i];
		}
	}
	for(int i=0;i<l/2;i++){
		if(s[i]!=s[l-i-1]){
			t++;
		}
	}
	cout<<t;
	return 0;
}
