#include <bits/stdc++.h>;
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	int a,b;
	int abc[110000];
	int g;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		for(int j=1;j<=a;j++){
			abc[j]=b;
		}
		g=a;
	}
	
	int ans;
	for(int i=0;i<=g/2;i++){
		if(abc[i]!=abc[g-i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
