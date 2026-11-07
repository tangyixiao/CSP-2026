#include<bits/stdc++.h>
using namespace std;
int b[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,s,sum;cin>>n>>m;int a[n+5];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[j]>b[i]){
				b[i]=a[j];
				a[j]=0;
			}
		}
	}s=b[0];
	for(int i=0;i<m;i++){
		s&=b[i];
	}cout<<s;
}