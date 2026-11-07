#include<bits/stdc++.h>
#define int long long
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
using namespace std;
int n,tot,a[200005];
char c[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >>a[i];
		tot+=a[i];
		cin>>c[i];
	}
//	cout << "\n";
//	for(int i=1;i<=n;i++){
//		cout << a[i] << " " << c[i] << '\n';
//	}
	int l=tot/2,ans=0;
	for(int i=1;i<=l;i++){
		int l2=tot+1-i;
		char c1,c2;
		int t1=0,t2=0;
		for(int j=1;j<=n;j++){
			t1+=a[j];
			if(t1>=i){
				c1=c[j];
				break;
//				cout << "jaaja "<<c[j] << endl;
			}
		}
		for(int j=1;j<=n;j++){
			t2+=a[j];
			if(t2>=l2){
				c2=c[j];
				break;
			}
		}
		if(c1!=c2){
			ans++;
		}
//		cout << i << " " << l2 << " " << c1 << " " << c2 << " " << t1 << " " << t2 << "\n";
	}
	cout << ans;
	return 0;
}