#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m,a[200005],sum=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==2){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				if(a[i]&a[j]>sum){
					sum=a[i]&a[j];
				}
			}
		}
	}
	else sum=a[n-m];
	cout<<sum<<endl;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
