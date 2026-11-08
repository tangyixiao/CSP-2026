#include<bits/stdc++.h>
using namespace std;
long long s[200100]; 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	sort(s+1,s+1+n);
	if(m==1){
		cout<<s[n];
		return 0;
	}
	long long h=s[n];
	for(int i=n;i>=n-m;i--){
		h=(h&s[i]);
	}
	cout<<h;
	return 0;
}
