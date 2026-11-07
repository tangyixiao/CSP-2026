#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int max=-1;
	int a[100001];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>=max){
			max=a[i];
		}
	}
	if(m==1){
		cout<<max;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(a[j]<a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
	cout<<a[m];
	return 0;
	
}