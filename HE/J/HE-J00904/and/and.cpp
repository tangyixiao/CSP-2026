#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long a[N],maxx,ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
	cin>>a[i];maxx=max(maxx,a[i]);} 
	if(n==m){
		ans=a[1];
		for(int i=2;i<=n;i++)
		ans&=a[i];
		cout<<ans;return 0;
	}
	if(m==1){
		cout<<maxx;return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++){
				ans=max(a[i]&a[j],ans);
			}
		cout<<ans;
		return 0;
	}
	bool flag=0;int la=1;
	for(int i=30,ne,minn;i>=0;i--){
		long long qwq=(1<<i);
		if(i==0)qwq=1;
		if(maxx<qwq)continue;
		sort(a+la,a+n+1);
		int l=la,r=n,mid;
		while(l<=r){
			mid=(l+r)>>1;
			if(a[mid]>=qwq){
				r=mid-1;ne=mid;
			}
			else l=mid+1;
		}
		if(a[n]<qwq)continue;
		for(int j=ne;j<=n;j++)
			a[j]-=qwq;
		if(!flag&&(n-ne+1)>=m){
			la=ne;flag=1;minn=la;
		}
		else if(flag&&(n-ne+1)>=m&&minn<ne){
			la=ne;flag=1;minn=la;	
		}
		if((n-ne+1)>=m)ans+=qwq;
	}
	cout<<ans;
	return 0;
}/*5 3
31 3 1 15 7
*/
/*4 2
2 3 15 12 12
*/
