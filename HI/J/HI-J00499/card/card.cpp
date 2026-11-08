#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=500005;
int a[N];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,r=0;
	cin>>m>>n;
	string s;
	for(int i=0;i<n;i++){
		cin>>s[i]; 
		if(s[i]==m){
			r=s[i-1];
			s.erase(r-1);
		}
	}
	cout<<s;
	return 0;
} 
