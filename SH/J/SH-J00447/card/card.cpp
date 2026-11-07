#include<bits/stdc++.h>
using namespace std;
const int N = 5e5+5;
long long n,m,a[N],ans[N],x[N];
bool f=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i<=n;i++){
		cin >> a[i];
	}
	for(int i = n;i>1;i--){
		if(a[i]==a[i-1]){
			for(int k = i;k<=n;k++){
				ans[a[k]]=k;
			}
			f=1;
			break;
		}
	}
	if(f) for(int i = 1;i<=m;i++) cout << ans[i] << " ";
	else for(int i = 1;i<=m;i++) cout << i << " ";
//	for(int i = 1;i<=n;i++){
//		int c;
//		for(int r = 1;r<=c;r++){
//			x[r]=0;
//			vis[r]=false;
//		}
//		c=0;
//		for(int j = i;j<=n;j++){
//			c++;
//			if(vis[a[j]]){
//				for(int k = 1;k<=c;k++){
//					if(x[i]>a[j]) continue;
//					else x[i]=0;
//				}
//			}else{
//				vis[a[j]]=true;
//				x[c]=a[j];
//				sort(x+1,x+c+1);
//			}
//		}
//		for(int j = 1;j<=c;j++){
//			if(ans[x[j]]!=0) ans[x[j]]++;
//		}
//	}
//	for(int i = 1;i<=m;i++) cout << ans[i] << " ";
	return 0;
}
