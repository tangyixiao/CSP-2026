#include<bits/stdc++.h>
using namespace std;
const int N=1e4+10;
char s[N];
signed main(){
//	cin.tie(0),cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,l=0,cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		char c;
		int x;
		cin>>x>>c;
		for(int j=1;j<=x;j++){
			s[l]=c;
			l++;
		}
	}
	if(n==1)cout<<0;
	if(n==2){
		for(int i=0;i<l;i++){
			if(s[i]!=s[i+1]){
				cout<<1;
				return 0;
			}
		}
		cout<<0;
	}
	return 0;
	/*
3
2 a
2 b
1 c
	*/
} 