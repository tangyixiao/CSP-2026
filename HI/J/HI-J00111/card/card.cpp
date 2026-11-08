#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a;
	cin>>n>>m;
	int f={m};
	for(int i=0;i<=m;i++){
		cin>>a;
		f+=a;
	}
	return 0;
} 
