#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],to[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		to[a[i]]++;
	}
	if(m==1){
		cout<<n;
		return 0;
	}
	if(m==2){
		cout<<to[1]<<" "<<to[2];
		return 0;
	}
	for(int i=1;i<=n;i++)cout<<to[i]<<" ";
	return 0;
}
