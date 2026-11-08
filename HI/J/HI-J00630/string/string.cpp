#include<bits/stdc++.h>
using namespace std;

struct node {
	int y;
	char u;
} a[200005];

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long cnt=0;
	for(int i=1; i<=n; i++) {
		cin>>a[i].y>>a[i].u;
		cnt+=a[i].y;
	}//shuru
//	cout<<cnt<<'\n';

	long long msl=cnt/2+(cnt%2==1);
	long long pi=0,pt=0;
	int l=1,r=n;
	long long ans=0;
	long long sg;
	for(int i=1; i<=n; i++) {
		ans+=a[i].y;
		if(ans>=msl) {
//			sg=min(ans-msl,msl-(ans-a[i].y));
//			sg=msl-sg;
			msl=i;
			ans=0;
			break;
		}
	}//找中间值所在位置
//cout<<sg;

	while(1) {
		if(a[l].u!=a[r].u) {
//			if(sg<=a[l].y+pi||sg<=pt+a[r].y) {
//				int nm=max(pi,pt);
//				ans+=sg-nm;
//				break;
//			}
			if(a[l].y+pi>pt+a[r].y) {
				int nm=max(pi,pt);
				ans+=pt+a[r].y-nm;
				pt+=a[r].y;
				r--;
			} else {
				if(a[l].y+pi<pt+a[r].y) {
					int nm=max(pi,pt);
					ans+=pi+a[l].y-nm;
					pi+=a[l].y;
					l++;
				} else {
					int nm=max(pi,pt);
					ans+=pi+a[l].y-nm;
					pi+=a[l].y;
					pt+=a[r].y;
					r--;
					l++;
				}
			}

		} else {
			if(a[l].y+pi>pt+a[r].y) {
				pt+=a[r].y;
				r--;
			} else {
				if(a[l].y+pi<pt+a[r].y) {
					pi+=a[l].y;
					l++;
				} else {
					pt+=a[r].y;
					pi+=a[l].y;
					l++;
					r--;
					while(pt>=1000000000&&pi>=1000000000){
					pt-=1000000000;
					pi-=1000000000;
		}
				}
			}
		}
		
		if(l==r||l>msl||r<msl) break;
//		if(pi>=sg&&pt>=sg) {
//			break;
//		}
	}
	cout<<ans;
	return 0;
}











//你不炸，我不炸，鱼儿何时能长大？
