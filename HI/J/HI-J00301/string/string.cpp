#include<bits/stdc++.h>
#define int long long
using namespace std;
int const N=2e5+5; 
int n;
int cnt=0;
string s;
struct cspT2{
	int a;
	string c;
}S[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int a1; string c1;cin>>a1>>c1;
		for(int j=1;j<=a1;j++) s+=c1; 
		S[i]={a1,c1};
	}
	if(n==1){
		cout<<0;
		return 0;
	}
	if(n==2&&S[1].c!=S[2].c){
		cout<<min(S[1].a,S[2].a);
		return 0;
	}
	for(int i=1,j=n;i<=n/2,j>=n/2;i++,j--){
		if(s[i]!=s[j]) cnt++;
	}
	cout<<cnt;
	return 0;
} 
