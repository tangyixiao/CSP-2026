#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500007];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int idx=n;
	for(int i=n;i>=1;i--){
		if(a[i]>a[i-1]){
			idx=i;
		}
		else{
			break;
		}
	}
	cout<<idx<<endl;
	for(int i=1;i<=m;i++){
		if(i<a[idx]){
			cout<<0<<" ";
		}
		else if(i>=a[idx]){
			cout<<1<<" ";
		}
	}
	return 0;
}
