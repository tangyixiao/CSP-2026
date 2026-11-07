#include</stdc++.h>
using namespace std;
long long a[1010],n,m;
int main(){
	freopen("string.in","w",stdin);
	freopen("string.out","r",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=m;j++){
			cin>>a[i];
			m++;
		}
	}
	cout<<m;
	return 0;
}
