#include<bits/stdc++.h>
using namespace std;
bool flag[1000005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[1000005],mx=0,l;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i] && flag[i]==false) {
			flag[i]=true;
			break;
			l=i;
			mx=max(mx,a[i]);
		} 
	}
	cout<<l<<" ";
	cout<<mx<<" ";
	cout<<l+mx;
	return 0;
}
