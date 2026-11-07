#include<iostream>
#include<algorithm>
#include<cstring>
#define int long long
using namespace std;
const int N=5*1e5+2,M=3*1e5;
int a[N],tot[M],mtot=1,car[N];
bool fa,ptot[N];
signed main(){
	freopen("card.in","r",stdin),freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		memset(car,0,sizeof(car));
		mtot=0;
		for(int j=i;j<=n;j++){
			fa=0;
			for(int k=1;k<=mtot;k++){
				if(car[k]==a[j]){
					mtot=k;fa=1;
					break;
				}
			}
			if(fa==0){
				mtot++;
				car[mtot]=a[j];
			}
		}
		for(int i=1;i<=mtot;i++){
			ptot[car[i]]++;
		}
		for(int i=1;i<=m;i++){
			if(ptot[i]){
				tot[i]++;
			}
		}
	}
	for(int i=1;i<=m;i++) cout<<tot[i]<<" ";
	return 0;
}