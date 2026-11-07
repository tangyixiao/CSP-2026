#include<bits/stdc++.h>
using namespace std;
long long a[500010],n,m,s[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	if(m==1){
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<n;
	}
	return 0;
}
