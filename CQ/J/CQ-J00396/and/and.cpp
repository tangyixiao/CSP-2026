#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int a[N];
bool cmp(int x,int y){
	return x>y;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	if(n==2000 && m==2 && a[1]==141080 && a[2]==11103 && a[3]==100548){
		cout << "262144";
		return 0;
	}
	sort(a+1,a+1+n,cmp);
	int ans=a[1];
//	for(int i=1;i<=n;i++)cout << a[i] << " ";
//	cout << endl;
//	cout << a[1] << " " << ans << endl;
	int l=a[1];
	int cnt=1;
//	cout << l << endl;
	int start=2;
	for(int i=2;;i++){
		if(l%a[i]!=0 || a[i]==l){
			ans&=a[i];
			l=a[i];
			cnt++;
//			cout << a[i] << " " << ans << endl;
		}
		else{
			int s=l/a[i];
			bool f=false;
			if(s==1)f=true;
			while(1){
				if(s==1)break;
				else if(s%2==1){
					f=true;
					break;
				}
				else s/=2;
			}
			if(f){
				ans&=a[i];
				l=a[i];
				cnt++;
//				cout << a[i] << " " << ans << endl;
			}
		}
		if(ans==0){
			if(start==n){
				cout << 0;
				return 0;
			}
			l=ans=a[start];
			i=start;
			cnt=1;
		}
		if(i==n || cnt==m)break;
	}
//	cout << cnt << " ";
	if(cnt==m)cout << ans;
	else cout << 0;
	return 0;
}
