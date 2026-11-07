#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    long long n,m,a[100000];
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    	if(a[i]<=n)cout<<i<<" ";
    	else cout<<n<<" ";
    }
    	
	fclose(stdin);
	fclose(stdout);

	return 0;
}
