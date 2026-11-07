#include<bits/stdc++.h>
using namespace std;
string c;
long long int a[200005];
int ans=0;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen(string.in,'r',stdin);
	freopen(string.out,'w',stdout);
	long long n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	long long h=0,t=n;
	if('c[h]'!='c[t]'){
		ans++;
		h++;
		t--;
	}
	cout<<ans<<'/n';
	return 0;
}