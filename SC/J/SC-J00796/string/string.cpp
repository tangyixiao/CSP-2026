#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,z,f,ans,nzc,nfc;
char nzf,nff;
pair<int,char>a[200050];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	z=1;
	f=n;
	for(int i=1;i<=n;i++){
		cin>>a[i].first>>a[i].second;
	}
	while(z<f){
		nzc=a[z].first;
		nfc=a[f].first;
		nzf=a[z].second;
		nff=a[f].second;
		if(nzc>nfc){
			if(nzf!=nff){
				ans+=nfc;
			}
			a[z].first-=nfc;
			f--;
		}
		else{
			if(nzf!=nff){
				ans+=nzc;
			}
			a[f].first-=nzc;
			z++;
		}
	}
	cout<<ans;
	return 0;
}