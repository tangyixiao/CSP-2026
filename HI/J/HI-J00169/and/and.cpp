#include<bits/stdc++.h>
using namespace std;
int n[100050],a,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>a>>m;
	for(int i=1;i<=a;i++){
		cin>>n[i];
	}
	int sum=0;
	for(int i=1;i<=a-m;i++){
		int ans=n[i];
		for(int j=i+1;j<=m+i;j++){
			ans=ans&n[j];
		}
		sum=max(ans,sum);
	}
	cout<<sum;
	return 0;
}
