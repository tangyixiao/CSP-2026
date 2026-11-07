#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],sum;
char c[200005];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
		cin>>c[i];
	}
	bool b=true;
	for(int i=2;i<=n;i++){
		if(c[i]!=c[i-1]){
			b=false;
		}
	}
	if(b){
		cout<<0;
	}
	else cout<<sum/2;
	return 0;
	
}
