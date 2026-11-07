#include<bits/stdc++.h>
using namespace std;
	int n,m;
	int a[6];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int x=n/2;
	if(n%2==0){
		cout<<x<<" "<<x;
		return 0;
	}else{
		if(a[n-1]==1){
			cout<<x+1<<" "<<x;
			return 0;
		}else{
			cout<<x<<" "<<x+1;
			return 0;
		}
	}
	return 0;
}
