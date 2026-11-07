#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m,a[N],sum=0,sun=0,o=0,k=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(a[i]==a[i+1]&&a[i]==1){
			sum++;
		}
		if(a[i]==a[i+1]&&a[i]==2){
			sun++;
		}
		if(a[i]==2){
			o++;
		}
	}
	if(sum==n){
		cout<<n<<" "<<0;
	}
	if(sun==n){
		cout<<0<<" "<<n;
	}
	if(o>1&&o<n){
		cout<<0<<" "<<n;
	}else{
		cout<<n-1<<" "<<n;
	}
return 0; 	
}
