#include <iostream>
using namespace std;
int n,m,maxx=0;
int main(){
	freopen("and.in","w",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int a[n+1];
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=i;j++){
			max(maxx,a[i]&a[j]);
		}
    }
    cout<<maxx;
    fclose(stdin);
    fclose(stdout);
	return 0;
}
