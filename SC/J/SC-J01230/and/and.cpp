#include<bits/stdc++.h>
#include<vector>
using namespace std;
const int N=2*1e5+1;
long long a[N];
long long da[N][33],mada[33];
bool aa[N];
vector< int > lsda;
long long n,m,op=0,i;
void zej(long long ls) {
	if(ls<=0) {
		return;
	}
	long long lls=ls%2;
	da[i][op]+=lls;
	op++;
	zej(ls/2);
	return;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(i=1; i<=n; i++) {
		cin>>a[i];
		op=0;
	}
//	sort(a+1,a+1+n);
	for(i=1; i<=n; i++) {
		zej(a[i]);
		op=0;
	}
	bool pp=0;
	long long ans=0;
	for(int j=30; j>=0; j--) {
		for(i=n; i>=1; i--) {
			if(da[i][j]!=0&&aa[i]!=1) {
//				cout<<i<<" ";
				lsda.push_back(i);
			}
		}
		if(!lsda.empty()) {
			auto ls=lsda.begin();
			for(ls; ls!=lsda.end(); ls++) {
				if(!pp){
//					cout<<(*ls)<<" ! ";
					for(int k=0;k<=30;k++){
						mada[k]=da[(*ls)][k];
					}
					aa[(*ls)]=1;
					m--;
					pp=1;
					continue;
				}
				if(m==0) {
					long long lsans=0,loop=1;
					for(int k=0; k<=30; k++) {
						if(mada[k]>=1) {
							ans+=loop;
						} 
						loop*=2;
					}
					cout<<ans;
					return 0;
				}
				if(aa[(*ls)]) continue;
				for(int k=0; k<=30; k++) {
					if(da[(*ls)][k]+mada[k]>=2) {
					} else {
						mada[k]=0;
					}
				}
//				cout<<(*ls)<<" | ";
//				ans+=lsans;
				m--;
				aa[(*ls)]=1;
			}
		}
	}
	return 0;
}

