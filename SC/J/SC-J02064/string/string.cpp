#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a,t,cnt;
string s,ss;
char c;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		cin>>a>>c;
		t+=a;
		for(int i=1;i<=a;i++){
			s+=c;
			ss+=c;
		}
	}
	for(int i=0,j=t-1;i<j;i++,j--) swap(ss[i],ss[j]);
	for(int i=0;i<t;i++){ 
		if(s[i]!=ss[i]) cnt++;
	}
	cout<<cnt/2;
}