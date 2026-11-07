#include<bits/stdc++.h>
using namespace std;
short s[100010000];
long long cd=0,w;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int i=1;i<=a;i++){
			s[i+cd]=c-94;
		}
		cd+=a;
	}
	for(int l=1,r=cd;l<r;l++,r--){
		if(s[l]!=s[r]){
			w++;
		}
	}
	cout<<w;
	return 0;
}
