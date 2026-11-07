#include<bits/stdc++.h>
using namespace std;
int huo(int a,int b){
	
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,p[200005];
	for(int i=1;i<=n;i++){
		cin>>p[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(p[i]<p[j]){
				swap(p[i],p[j]);
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(p[i]==p[i+1]){
			cout<<p[i];
			return 0;
		}
	}
	return 0;
}
