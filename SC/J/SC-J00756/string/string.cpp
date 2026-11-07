#include<bits/stdc++.h>
using namespace std;
const int N=1e7;
map<long long,char> ax;
long long n,ans,id;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		long long p;
		char a;
		cin>>p;
		cin>>a;
		for(int j=id+1;j<=id+p;j++){
			ax[j]=a;
		}
		id+=p;
	}

	for(int i=1;i<=id/2;i++){
		if(ax[id-i+1]!=ax[i]) ans++;
	}
	cout<<ans;
	return 0;
}