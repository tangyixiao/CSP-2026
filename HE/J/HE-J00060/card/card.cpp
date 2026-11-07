#include <bits/stdc++.h>
using namespace std;   
int a[500003],b[300002],s[500002];                                                                                
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		s[i]=a[i];
		for(int j=0;i<i;j++){
			if(s[j]==a[i]){
				for(int z=j;z<i,z++){
					s[z]==0;
				}
			}
		}
	}
	while(m--){
		cout<<a[i]<<" ";
	}
	return 0;
}
