#include<bits/stdc++.h>
#define int long long
using namespace std;
struct node{
	int gs;
	char wh;
}a[2000001]; 
signed main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].gs>>a[i].wh;
	int cha;
	for(int r=1,l=n;r<=l;){
		cha=a[r].gs-a[l].gs;
		if(a[r].wh!=a[l].wh){
			if(cha>0){
				a[r].gs-=a[l].gs;
				ans+=a[l].gs;
			}
			if(cha<0){
				a[l].gs-=a[r].gs;
				ans+=a[r].gs;
			}
			if(cha==0) ans+=a[r].gs;
		}else{
			if(cha>0) a[r].gs-=a[l].gs;
			else if(cha<0) a[l].gs-=a[r].gs;
		}
		if(cha==0) r++,l--;
		if(cha>0) l--;
		if(cha<0) r++;
	}
	cout<<ans;
	return 0;
}

