#include <bits/stdc++.h>
using namespace std;
int c[10000001]={},h[10000001]={},g[10000001]={},k[10000001]={},m,n,l=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    cin>>m>>n;
    for(int i=0;i<m;i++){
    	cin>>c[i];
	}
	for(int i=0;i<m;i++){
		for(int j=i;j<m;j++){
			if(l>0&&count(h,h+l,c[j])==0){
				for(int g=l-1;g>=0;g--){
					if(h[g]==c[j]){
						l=g;break;
					}
				}
			}
			else{
				h[l]=c[j];
				l++;
			}
		}
		for(int j=0;j<l;j++){
			h[c[j]-1]++;
		}
		for(int j=0;j<n;j++){
			if(h[j]>g[j]){
				g[j]++;h[j]=g[j];
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<h[i]<<' ';
	}
	return 0;
}
