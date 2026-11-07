#include<bits/stdc++.h>
using namespace std;
const long long N=1e6+5;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a;
	cin>>n;
	char c,app[N];
	long long cnt=0,sun=0;
	if(n==1){
		cout<<0<<'\n';
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			app[++cnt]=c;
		}
	}
	int r=cnt,l=1;
	while(l<=r){
		if(app[r]==app[cnt+1-r]){
			l++;
			r--;
		}
		else{
			sun++;
			l++;
			r--;
		}
	}
	cout<<sun;
	return 0;
}
