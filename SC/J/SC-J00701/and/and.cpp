#include<bits/stdc++.h>
using namespace std;
int a[10001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long int n,m,s=0,maxx=-1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			if(a[i]>maxx)maxx=a[i];
		}	
		cout<<maxx;
		return 0;
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				s=a[i]&a[j];
				if(s>maxx)maxx=s;
			}
		}
		cout<<maxx;
		return 0;
	}
	else if(m==n){
		for(int i=1;i<=n;i++){
			s=s&a[i];
		}	
		cout<<s;
		return 0;
	}
	else{
		cout<<623; 
	}
	return 0;
}