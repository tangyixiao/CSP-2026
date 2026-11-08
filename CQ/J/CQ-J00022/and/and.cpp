#include<bits/stdc++.h>
using namespace std;
namespace pdf{
	int n,m,a[200005];
	bool b[200005][35];
	bool no[200005],chs[35];
	int ans;
	int main(){
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			for(int j=0;j<=31;j++){
				b[i][j]=a[i]%2;
				a[i]/=2;
			}
		}
		for(int j=31;j>=0;j--){
			int s=0;
			for(int i=1;i<=n;i++){
				if(!no[i])s+=b[i][j];
			}
			if(s>=m){
				for(int i=1;i<=n;i++){
					if(!b[i][j])no[i]=1;
				}
				chs[j]=1;
			}
		}
		for(int j=31;j>=0;j--){
			ans*=2;
			if(chs[j]){
				ans++;
			}
		}
		cout<<ans;
		return 0;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	pdf::main();
	return 0;
}
