#include <bits/stdc++.h>
using namespace std;
int n,sl,xg,zs,a[100005];
string zm;
string zfc[100005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>sl>>zm;
		for(int j=zs;j<zs+sl;j++){
			zfc[j]=zm;
			zs++;
		}
	}
	for(int i=0;i<zs;i++){
		for(int j=zs;j>=0;j--){
			if(zfc[i]!=zfc[j]){
				xg++;
				}
				if(i==j){
					break;
			}
		}
	}
	cout<<xg;
	return 0;
}
