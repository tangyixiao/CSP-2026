#include<bits/stdc++.h>
using namespace std;
int a[10010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n;
	cin>>n;
	int m;
	cin>>m;
	int ans,num,sum;
	ans=n;
	num=m;
	sum=num;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		continue;
	}
	cout<<ans<<" "<<num<<" "<<sum<<" ";
	return 0;
}
