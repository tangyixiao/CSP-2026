#include<bits/stdc++.h>
using namespace std;
int n,m,ma,a[2005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
    }
    for(int i=1;i<n;i++){
    	for(int j=i+1;j<=n;j++){
    		if(ma<a[i]|a[j]){
    			ma=a[i]|a[j];
			}
		}
	}
    cout<<ma;
}