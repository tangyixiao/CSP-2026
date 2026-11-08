#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int as[n+1];
	char sa[n+1];
	int u=0,m=0;
	for(int i=1;i<=n;i++){
		cin>>as[i]>>sa[i];
	}
	string b;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=as[i];j++){
			b=b+sa[i];
		}
		u+=as[i];
	}
	for(int i=0;i<=u/2-1;i++){
		if(b[i]!=b[u-1-i])
		m++;
	}
	cout<<m;
	return 0;
}
