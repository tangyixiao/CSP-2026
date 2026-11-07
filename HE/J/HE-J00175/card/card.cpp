#include <bits/stdc++.h>
#define int long long
using namespace std;
constexpr int N=5e5+7,M=3e5+7;
int n,m;
int a[N];
int res[N],ans[N];
int32_t main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	cin>>n>>m;
	bool f=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int len=0;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			bool f=1;
			for(int k=1;k<=len;k++){
				if(res[k]==a[j]){
					f=0;
					for(int k1=k+1;k1<=len;k1++){
						res[k1]=0;
					}
					len=k;
					break;
				}
			}
			if(f==1){
				len++;
				res[len]=a[j];
			}
		}
		for(int j=1;j<=len;j++){
			ans[res[j]]++;
			//cout<<res[j]<<" ";
			res[j]=0;
		}
		len=0;
		//cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
