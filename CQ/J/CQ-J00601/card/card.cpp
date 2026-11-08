#include<bits/stdc++.h>
using namespace std;
int a[10];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,i;
	cin>>n;
	i=n-1;
	for(int i=1;i<=n;i++)cin>>a[i];
	while(a[i]!=a[n]){
		i--;
		if(i==0){
			if(a[n]==1){
				cout<<n<<" "<<0;
			}
			else cout<<0<<" "<<n;
		}
	}
	if(a[n]==1){
		cout<<i+1<<" "<<n-i-1;
	}
	else cout<<n-i-1<<" "<<i+1;
	return 0;
}


