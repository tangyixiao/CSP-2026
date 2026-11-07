#include <bits/stdc++.h>
using namespace std;
int a,b;
int c[500010],d[500010],e[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>c[i];
		d[i]=0;
		e[i]=0;
	}
	for(int i=1;i<=a;i++){
		int m=i;
		for(int j=i;j<=a;j++){
			d[c[j]]++;
			int k;
			for(k=m;k<j;k++){
				if(c[k]==c[j]){
					for(int l=k;l<j;l++){
						if(e[l]==1){
							continue;
						}
						d[c[l]]--;
						e[l]=1;
					}
					m=k;
					break;
				}
			}
		}
		for(int j=1;j<=a;j++){
			e[j]=0;
		}
	}
	for(int i=1;i<=b;i++){
		cout<<d[i]<<' ';
	}
	return 0;
} 

