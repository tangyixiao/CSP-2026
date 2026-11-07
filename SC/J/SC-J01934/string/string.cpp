#include<bits/stdc++.h>
using namespace std;
long long a,s,d,l,r,ans;
string z;
char x;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>a;
	for(long long i=1;i<=a;i++){
		cin>>s>>x;
		for(long long j=1;j<=s;j++){
			z+=x;
		}
	}
	l=1;
	r=z.size();
	while(r>l){
		if(z[l-1]!=z[r-1]){
			ans++;
		}
		l++;
		r--;
	}
	cout<<ans;
	return 0;
}