#include<bits/stdc++.h>
using namespace std;
int main(){
//	freopen("travel.in","r",stdin);
//	freopen("travel.out","w",stdout);
	int n,m,x[50010],over[50010],s;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>x[i];
	}	
	for(int i=1;i<=m;i++){
		s=0;
		for(int j=1;j<=n;j++){
			over[j]=x[j];
			for(int l=1;l<j;l++){
				if(over[l]==x[j]){
					for(int m=l;l<=j;l++){
						over[l]=0;
					}
					over[j]=x[j];
				}
			}
		}
		for(int ll=1;ll<=n;ll++){
			if(over[ll]==i){
				s+=1;
			}
			
		}cout<<s;
	} 
	return 0;
}
