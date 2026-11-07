#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
const int maxn=2e5+5;
ll a[maxn];
ll b[maxn];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ans=1;
	int x=a[1];
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			for(int z=1;z<=m;z++){
				x&=a[j];
			}
			b[ans]=x;
			x=a[j];
		}
	}
	sort(b+1,b+ans+1);
	cout<<b[ans];
	fclose(stdin);
	fclose(stdout);
	return 0;
}