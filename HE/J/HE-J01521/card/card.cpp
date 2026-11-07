#include <bits/stdc++.h>
using namespace std;

long long n,m,a[200000],d[200000],x[200000],y[200000],f=0;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=0 ; i<n ; i++)cin>>a[i];
	for (int i=0 ; i<n ; i++){
		int di=0;
		for (int j=i ; j<n ; j++){
			for (int g=i ; g<n ; g++){
				if (d[g]==a[j])di=g;
			}
			d[di]=a[j];
			di+=1;
		}
		
		for (int j=0 ; j<di ; j++){
			for (int g=0 ; g<f ; g++){
				if (y[g]==d[di]){
					x[g]+=1;
				}else {
					y[f]=d[di];
					x[f]=1;
					f++;
				}
			}
		}
		
	}
		
		
	for (int i=0 ; i<f ; i++){
		cout<<x[i];
	}
	
	
	return 0;
}
