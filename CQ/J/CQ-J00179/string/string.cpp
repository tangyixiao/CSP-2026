#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=3e5+10;
int n,aa[N],a[N],sum,ans,cnt,val,k;
char cc[N],c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>aa[i]>>cc[i];
		sum+=aa[i];
	}
	if(n==1){
		cout<<0;return 0;
	}
	if(sum%2==1) sum++;
	sum/=2;
	for(int i=1;i<=n;i++){
		val+=aa[i];
		if(val<=sum){
			a[++cnt]=aa[i];c[cnt]=cc[i];
		}else{
			if((val-aa[i])<sum){
				a[++cnt]=sum-(val-aa[i]);
				c[cnt]=cc[i];k=cnt;
				a[++cnt]=val-sum;
			}else{
				if(val-aa[i]==sum) k=i-1;
				a[++cnt]=aa[i];
			}
			c[cnt]=cc[i];
		}
	}
//	for(int i=1;i<=cnt;i++){
//		cout<<a[i]<<" "<<c[i]<<"\n";
//	}
	for(int i=1;i<=k;i++){
		int u=cnt;
		for(int j=u;j>k;j--){
			if(a[i]>a[j]){
				if(c[i]==c[j]){
					a[i]-=a[j];cnt--;
					a[j]=0;
					continue;
				}
				ans+=a[j];
				a[i]-=a[j];cnt--;
				a[j]=0;
			}else{
				if(c[i]==c[j]){
					a[j]-=a[i];a[i]=0;
					break;
				}
				ans+=a[i];a[j]-=a[i];
				a[i]=0;
				break;
			}
		}
	}
	cout<<ans;
	return 0;
}
/*

*/
