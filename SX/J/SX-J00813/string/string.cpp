#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a,x=0,y=0;
	char c;
	char d[1000000]={0};
	cin>>n;
	for(int i=0;i<=n;i++){
		cin>>a>>c;
		for(int j=0;j<a;j++){
			d[x]==c;
			x++;
		}
	}
	for(int i=1;i<=x-1;i++){
		if(d[i]==d[i-1]){
			y++;
		}
	}
	if(x-y==1){
		cout<<'0';
	}
	return 0;
}