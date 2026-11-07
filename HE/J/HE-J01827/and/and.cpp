#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1000001],mx=-1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int sum=a[1];
	if(m==n){
		for(int i=2;i<=n;i++){
			sum=sum&a[i];
		}
		cout<<sum;
		return 0;
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			mx=max(a[i],mx);
		}
		cout<<mx;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				sum=a[i]&a[j];
				mx=max(mx,sum);
			}
		}
		cout<<mx;
		return 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
