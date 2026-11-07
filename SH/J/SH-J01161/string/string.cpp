#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+5;
int n;
struct blk{
	string s;
	int l=0,r=0;
}a[maxn];
bool vis[maxn];
int len;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin>>n;
	for(int i=1;i<=n;i++){
		string s;
		int x;
		cin>>x>>s;
		len+=x;
		a[i].s=s;
		a[i].l=a[i-1].r+1;
		a[i].r=a[i-1].r+x;

	}
	int fin=n,ans=0;
	for(int i=1;i<=n;i++){
		blk a2;
		vis[i]=1;
		a2.s=a[i].s,a2.l=len-a[i].r+1,a2.r=len-a[i].l+1;
		for(int j=fin;j>=i;j--){
			//cout<<i<<' '<<j<<endl;
			 //cout<<a2.l<<' '<<a2.r<<endl;
			
			if(vis[j]) continue;
			//vis[j]=1;
			
			if(a2.s==a[j].s) continue;
			if(a[j].l<=a2.l && a[j].r>=a2.r){
				ans+=a2.r-a2.l+1;
				//cout<<a2.r-a2.l+1<<endl;
				//cout<<1<<endl;
				break;
			}else if(a2.l<=a[j].l && a2.r>=a[j].l && a2.r<a[j].r){
				ans+=a2.r-a[j].l+1;
				//cout<<2<<endl;
				//cout<<a2.r-a[j].l+1<<endl;
				vis[j]=1;
				//fin=j;
			}else if(a[j].l<=a2.l && a[j].r>=a2.l && a[j].r<a2.r){
				ans+=a[j].r-a2.l+1;
				//cout<<a[j].r-a2.l+1<<endl;
				//cout<<3<<endl;
				break;
			}else if(a2.l<=a[j].l && a2.r>=a[j].r){
				ans+=a[j].r-a[j].l+1;
				//cout<<a[j].r-a[j].l+1<<endl;
				//cout<<4<<endl;
				vis[j]=1;
				//fin=j;
			}
			
		}
		
	}
	cout<<ans<<endl;	
	return 0;
}
