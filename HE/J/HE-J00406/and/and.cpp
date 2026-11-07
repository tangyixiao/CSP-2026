#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005],ans=0;
string a2[100005],a3[100005];
int main(){
	freopen("ans.in","r",stdin);
	freopen("ans.out","w",stdout);
	//cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		while(a[i]>0){
			a2[i]+=a[i]%2;
		}
		if(a2[i]!=a2[i+1]){
			a3[i]='0';
		}else a3[i]='1';
		ans=max(int(a3[i])*pow(2,i-1),int(a3[i])*pow(2,i-1));
	}
	cout<<ans;
	return 0;
}
