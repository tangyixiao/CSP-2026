#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int s[200010]={};
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		s[i]=a;
	}
	int maxn=0;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			int f=s[i]&s[j];
			if(maxn<f){
				maxn=f;
			}
		}
	}
	cout<<maxn;
	return 0;
}


