#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
const int maxp=35;
long long a[maxn],pw[maxp],num[maxp];
long long n,ans,yesnum,m;
bool ifcn[maxn],now[maxn];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	memset(ifcn,true,sizeof(ifcn));
	pw[0]=1;
	for(int i=1;i<maxp;i++){
		pw[i]=pw[i-1]*2;
	}
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=0;j<maxp;j++){
			if(a[i]&pw[j]){
				num[j]++;
			}
		}
	}
	for(int i=maxp-1;i>=0;i--){
		yesnum=0;
		if(num[i]<m){
			continue;
		}
		for(int j=1;j<=n;j++){
			if(ifcn[j]&&(a[j]&pw[i])){
				now[j]=true;
				yesnum++;
			}
		}
		if(yesnum>=m){
			ans=ans+pw[i];
			for(int j=1;j<=n;j++){
				ifcn[j]=now[j];
				now[j]=false;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
//Trick||Treat!
