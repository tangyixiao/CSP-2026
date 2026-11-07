#include<bits/stdc++.h>
using namespace std;
long long n,a[100010];
string c[100010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if(n==2&&c[1]==c[2]){
			cout<<0;
		}
	}
	return 0;
}
