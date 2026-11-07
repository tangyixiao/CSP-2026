#include <iostream>
using namespace std;
const int N=2e5+10;
int n;
long long cnt;
pair<int,char> a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i=1;i<=n;i++) cin >> a[i].first >> a[i].second;
	int l=1,r=n;
	while(l<r){
		int mi=min(a[l].first,a[r].first);
		a[l].first-=mi;a[r].first-=mi;
		if (a[l].second!=a[r].second){
			cnt+=mi;
		}
		if (a[l].first==0) l++;
		if (a[r].first==0) r--;
	}
	cout << cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

