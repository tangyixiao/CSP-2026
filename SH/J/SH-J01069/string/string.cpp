#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> v;
int n,cnt,ans;
char c;
int l;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int d;
		cin>>d>>c;
		cnt+=d;
		for(int j=1;j<=d;j++){
			v.push_back((int)c);
		} 
	}
	int l=floor(cnt/2.0);
	for(int i=0;i<l;i++){
		if(v[i]!=v[cnt-i-1]){
			ans++;
//			cout<<i+1<<" "<<cnt-i<<"\n";
//			cout<<(char)v[i]<<" "<<(char)v[cnt-i-1]<<"\n"; 
		} 
	}cout<<ans;
	return 0;
}
/*

*/ 
