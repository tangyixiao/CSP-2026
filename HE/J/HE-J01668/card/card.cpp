#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],b,c; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]==1){
			b++;
		}else{
			c++;
		}
	}
	if(a[n]==1){
		cout<<n<<' '<<c;
	}else{
		cout<<b<<' '<<n;
	}
	return 0;
}
