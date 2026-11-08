#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,a,cnt=0;
	string c,s,x;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=0;j<a;j++){
			s+=c;
		}
	}
	for(int i=s.size();i>=0;i--){
		x+=s[i];
	}
	for(int i=0;i<=s.size();i++){
		if(s[i]!=x[i]){
			cnt++;
		}
	}
	cnt=cnt/2;
	cout<<cnt;
	return 0;
}
