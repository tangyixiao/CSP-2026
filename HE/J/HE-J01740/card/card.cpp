#include<bits/stdc++.h>
using namespace std;
int n,m,l;
int main(){	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	int a[n]={0},b[m]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}int a1[n]={0};
	for(int i=0;i<n;i++){	l=0;
	
	for(int qk=0;qk<=n;qk++){
		a1[qk]=0;
	}
		for(int j=i;j<n;j++){
			a1[l]=a[j];
			l++;
			for(int x=i;x<l-1;x++){
				if(a1[x]==a[j]){
					for(int qk=0;qk<n;qk++){
						a1[qk]=0;
					}
					l=1;
					a1[i]=a[j];
					break;
				}
			}
		}
		
		
		
		
		
		
		for(int jl=0;jl<n;jl++){
			if(a1[jl]!=0)
				b[a1[jl]-1]++;
			}
		}
	
		for(int i=0;i<m;i++){
			cout<<b[i]<<" ";	
		}	
	return 0;
}




















