#include <bits/stdc++.h>
const int N=3e5+5;
using namespace std;
int a[N],p[N],cnt,ans[N];
int main(){
  freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;  cin>>n>>m;
	for(int i=1;i<=n;i++)  cin>>a[i];
	for(int i=1;i<=n;i++){
		cnt=0;
		for(int j=i;j<=n;j++){
			for(int k=1;k<=cnt;k++){
				if(p[k]==a[j])	cnt=k-1;
			}
			p[++cnt]=a[j];
//			for(int i=1;i<=cnt;i++) cout<<p[i]<<" ";  cout<<endl;
		}
		for(int i=1;i<=cnt;i++){
			ans[p[i]]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}