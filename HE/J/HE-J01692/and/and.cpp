#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[100010];
int b=-1;
int main (){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b=max(b,a[i]);
	}
	if(m==1){
		cout<<b;
		return 0;
	}
	b=-1;
	if(m==2){
		for(int i=1;i<=n;i++){
	        for(int j=i-1;j>=1;j--){
			    b=max(b,a[i]&a[j]);
		    }
	    }
	    cout<<b;
	    return 0;
	}
	b=-1;
	if(m==n-1){
		int c=1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i!=j){
					c=c&a[j];
				}
			}
			b=max(b,c);
		}
		cout<<b;
		return 0;
	}

	return 0;
}
