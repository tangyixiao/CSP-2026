#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[500005],z[50000],id1,id2;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
			cin>>a[i];
	for(int i=1;i<=n;i++){
		if(a[i]==1){
				id1=i;
				break;
		}
	
	}	
	for(int i=1;i<=n;i++){
		if(a[i]==2){
			id2=i;
			break;
		}
	}
	cout<<n-id1+1<<" "<<n-id2+1;
    return 0;

}
