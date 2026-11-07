#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int a[N];
string s;
string b;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int t,cnt=0;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>a[i];
		cin>>s[i];
		for(int j=1;j<a[i];j++){
			b+=s[i];
		}
	}
	int j=b.size(),i=-1;
	while(i<=j){
		j--,i++;
		if(b[i]!=b[j]){
			cnt++;
		}
	}
	cout<<cnt;
	
	return 0;
}