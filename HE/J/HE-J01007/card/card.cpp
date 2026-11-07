#include<bits/stdc++.h>
using namespace std;
long long x[200005];
long long ans[200005];
int main(){
//	freopen("card.in","r",stdin);
//	freopen("card.out","w",stdout);
 	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>x[i];
	if(n<=5&&m<=2){
		int a=0,b=0;
		for(int i=1;i<=n;i++){
			if(x[i]==1) a++;
			else b++;
			if(x[n]==1&&x[n]!=x[i]) a++;
			else if(x[n]==2&&x[n]!=x[i])b++;
			else ;						
		}
		cout<<a<<" "<<b;
	}
	if(1){
		int j=1;
		for(int i=1;i<=(n-1);i++){
			if(x[i]!=x[i+1]){
				ans[j]+=i;
				j++;
			}
		}
		for(int i=1;i<=(m-1);i++){
			cout<<ans[i]<<" ";
		}
		cout<<n;
	}
	return 0;
} 
