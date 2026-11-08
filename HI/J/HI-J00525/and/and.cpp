#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005]={};
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int and0=0,and1=0,maxand=-2e9;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=j){
				and0=a[i] && a[j];
				cout<<a[i]<<' '<<a[j]<<' '<<and0<<endl;
			}
			if(and0>maxand){
				maxand=and0;
			}
		}
	}
	and0=maxand;
	for(int i=0;i<m-2;i++){
		for(int j=0;j<n;j++){
			and1=and0 && a[i];
			if(and1>maxand){
				maxand=and1;
			}
		}
		and0=maxand;
	}
	cout<<maxand;
	return 0;
}
