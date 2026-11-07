#include <bits/stdc++.h>
using namespace std;
long long n,a[200005],ans=0;
char c[200005];
bool b=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	char x[200005];
	for(int i=2;i<=n;i++){
		if(c[i]==c[i-1]){
			b=1;
		}
		else{
			cout<<2;
			return 0;
		}
	}
	cout<<ans;
	return 0;
} 
