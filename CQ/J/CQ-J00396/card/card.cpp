#include <bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int a[N];
bool f[N];
int ans[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		ans[a[i]]++;
	}
	for(int i=1;i<=n-m;i++)f[i]=true;
//	cout << f[1];
	for(int i=n;i>=1;i--){
		if(f[a[i]]==false){
//			cout << a[i] << ":" << i << endl;
			f[a[i]]=true;
			ans[a[i]]=i;
		}
		else{
//			cout << a[i] << ":" << i << endl;
			ans[a[i]]=i;
			break;
		}
	}
	for(int i=1;i<=m;i++){
		cout << ans[i] << " ";
	}
	return 0;
}

