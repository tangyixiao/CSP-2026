#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e5+5;
int n,m,ans;
int a[N];
int b[33][33],bi=0,mx,g=32;//b[i][j]，在已知最高位是i时所有数字中第j位是1的个数
bool ls;
//operator
signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1,l,j; i<=n; i++) {
		cin>>a[i];
		l=a[i];
		bi=max(bi,__lg(l)+1);
	//	cout<<"bi="<<bi<<endl;
		j=__lg(l)+1;
		for(int i=1; i<=j; i++) {
			b[32][i]+=l%2;
			//cout<<"b[32]["<<i<<"]="<<b[32][i]<<endl;
			l>>=1;
		}
	}
	while(1) {
		ls=1;
		for(int i=bi; i>=1; i--) {
			if(b[g][i]>=m) {
				mx=i;
				//cout<<"第"<<i<<"位达到要求"<<endl;
				ans+=((int)1<<(i-1));
				ls=0;
				break;
			}
		}
		if(ls) {
			cout<<ans;
			return 0;
		}
		for(int i=1,l; i<=n; i++) {
			if((a[i]>>(mx-1))%2) {
				a[i]%=((int)1<<mx);

				l=a[i];
				for(int i=1; i<=mx; i++) {
					b[mx][i]+=l%2;
					l>>=1;
				}

			} else {
				a[i]=0;
			}
		}
		g=mx;
		bi=mx-1;
	}

	return 0;
}