#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		    cin>>a[i];
	}
	sort(a+1,a+n+1);
    if(m==1){	    
	    cout<<a[n];
    }else if(m==2){
    	int maxn=-1;
    	for(int i=1;i<=n;i++){
    		for(int j=i+1;j<=n;j++){
    			maxn=max(maxn,max((a[i]&a[j]),(a[j]&a[i])));
			} 
		}
		cout<<maxn;
	}
	return 0;
}
