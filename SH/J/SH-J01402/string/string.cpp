#include<bits/stdc++.h>
using namespace std;
long long b[200000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long mx=0;
	cin>>n;
	char c;
	char d;
	int ans=0;
	for(int i=1;i<=n;i++){
		long long a;
		cin>>a;
		cin>>c;
		b[c-96]+=a;
		if(d!=c){
			ans++;
		}
		d=c;
	}
	for(int i=1;i<ans;i++){
		mx=max(mx,b[i]);
	}
	cout<<mx;
	return 0;
} 
