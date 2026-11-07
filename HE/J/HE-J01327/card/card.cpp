#include<bits/stdc++.h>
using namespace std;
int a[2000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int k,i;
	cin>>k>>i;
    for(int i=1;i<=m;i++){
    	if(i==n&&i!=k){
    		cout<<n;
		}else{
			cout<<k;
		}
		
			
		
	}
	cout<<i;
	return 0;
}
