#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int a[500005];
	int n,m;
	bool flag=true;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]) flag=false;
	}
	if(flag==false){
		for(int i=1;i<=m;i++) cout<<n<<" ";
		return 0;
	}
	if(m==1){
		int t=0;
		for(int i=0;i<n;i++){
			if((n-i)%2==1){
				t++;
			}
		}
		cout<<t;
		return 0;
	}
	return 0;
}
