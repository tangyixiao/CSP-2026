#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","w",stdin);
	freopen("string.out","r",stdout);
	
	int n; cin>>n;
	string num;
	
	
	for(int i = 1;i<=n;i++){
		int a;
		char b;
		cin>>a>>b;
		for(int j=1;j<=a;j++){
			num += b;
		}
	}
	int cnt = 0;
	for(int i = 0;i<n/2+1;i++){
		if(num[i] != num[n-i])cnt++;
	}
	cout<<cnt;
	
	return 0;
}


