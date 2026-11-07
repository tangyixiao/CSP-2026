#include<bits/stdc++.h>
#define int long long
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
// sro CCF orz
using namespace std;
const int N=5e5+5;
int n,m,a[N],d[N],r=0,cnt[N];
int ap[N];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int t=1;t<=n;t++){
		memset(ap,0,sizeof ap);
		memset(d,0,sizeof d);
		r=0;
		for(int i=t;i<=n;i++){
			if(ap[a[i]]!=0){
				int it=ap[a[i]];
				for(int j=it+1;j<=r;j++){
					ap[d[j]]=0;
				}
				r=it;
			} else {
				d[++r]=a[i];
				ap[a[i]]=r;
			}
//			for(int i=1;i<
//				cout << d[i] << " ";
//			}
//			cout << "    G:" << a[i];
		}
//		cout << "AP: ";
		for(int i=1;i<=m;i++){
			cnt[i]+=(ap[i]!=0?1:0);
//			cout << ap[i] << " ";
		}
//		cout << "\n";
	}
	for(int i=1;i<=m;i++){
		cout << cnt[i] << " ";
	}
	return 0;
}

/*

src src src src src    CCCCCC     CCCCCC     FFFFFFFF   orz orz orz orz orz 
src src src src src   CC    CC   CC    CC    FF         orz orz orz orz orz 
src src src src src   CC         CC          FFFFFFFF   orz orz orz orz orz 
src src src src src   CC    CC   CC    CC    FF         orz orz orz orz orz 
src src src src src    CCCCCC     CCCCCC     FF         orz orz orz orz orz 

*/