#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int n;
	string s;
	cin>>n;
	int cnt=0;
	int p=0;
	for(int i=1;i<=n;i++){
		int x;char c;
		cin>>x>>c;
		for(int j=1;j<=x;j++){
			s[p++]=c;
		}
	}
	for(int i=1;i<=p/2;i++){
		if(s[i]!=s[p-i+1])cnt++;
	}
	cout<<cnt;
	return 0;
}