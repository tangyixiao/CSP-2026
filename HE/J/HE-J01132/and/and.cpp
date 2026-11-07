#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200010]; 
int b[200010];
int ma;
int main(){
	freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
    if(n==m){
    	for(int i=2;i<=n;i++){
    		a[i]=(a[i-1]&a[i]);
		} 
		cout<<a[n];
		return 0;
	}else{
		if(m==2){
			for(int i=2;i<=n;i++){
			    ma=max(ma,(a[i-1]&a[i]));
		    }
		}
		if(m==1){
			sort(a+1,a+n+1);
			ma=a[n];
		}
	}
	cout<<ma;
	return 0;
}

