#include<bits/stdc++.h>
#define int long long
using namespace std;
//const int MAXN=1e8+1;
//char c[MAXN];
vector<char> s;
int n,x,cnt,ans=0;
char c;
signed main(){
	//ÄãµÄfreopen!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! 
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		cin>>x>>c;
		for(int i=1;i<=x;i++){
			s.push_back(c);
		}
		cnt+=x;
	}
	
	for(int i=0;i<cnt/2;i++){
		if(s[i]!=s[cnt-i-1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
/*
	3
	2 a
	2 b
	1 c
*/
