#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	int n,m,a[10000005],b[10000005],max=0,mx,mn;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==2){
		for(int i=1;i<n;i++){
		    for(int j=i+1;j<=n;j++){
		    	if(a[i]&a[j]>max){
		    		max==a[i]&a[j];
		    		mx=i;
		    		mn=j;
				}
			}
		}
		cout<<a[mx]<<a[mn];
	}else{
		for(int i=1;i<=m;i++){
			cout<<a[i];
		}
	}
	return 0;
}
