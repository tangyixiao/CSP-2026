#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int a[N];
int n,m;
int sum=1;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout)
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		cout<<n;
	}
	if(m==2){
		if(a[n]==1){
			cout<<n<<" "<<2;
		}
		else{
			cout<<2<<" "<<n;
		}
	}
	else{
		for(int i=1;i<=n;i++){
			if(a[i]!=a[i+1]){
				cout<<i<<" ";
			}
		
		}
	}
	return 0;
}