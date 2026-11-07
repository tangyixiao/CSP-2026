#include <iostream>
#include <vector>
using namespace std;
const int N=2e5+5;
int n,m,a[N],ans;
bool lsr[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n>>m;
	for (int i=1;i<=n;i++) {
		cin >> a[i];
	}for (int i=29;i>=0;i--){
		int cnt=0;
		for (int j=1;j<=n;j++){
			if (lsr[j]) continue;
			if (a[j]&(1<<i)) cnt++;
		}if(cnt>=m) {
			ans+=(1<<i);
			for (int j=1;j<=n;j++){
				if ((a[j]&(1<<i))==0) lsr[j]=1;
			}
		}
	}cout<< ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}