#include<bits/stdc++.h> 
using namespace std;
long long n,cnt,sam;
string c,d;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 1;i <= n;i++){
		long long a;
		char b;
		cin>>a>>b;
		sam += a;
		for(int j = 1;j <= a;j++){
			c[cnt] = b;
			cnt++;
		}
	}
	
	for(int i = 0;i < sam;i++){
		d[i] = c[sam-i-1];
	}
	
	int ans = 0;
	for(int i = 0;i < sam;i++){
		if(c[i] != d[i]){
			ans++;
			d[i] = c[i];
			c[sam-i-1] = d[i];
		}
	}
	cout<<ans;
	return 0;
}
