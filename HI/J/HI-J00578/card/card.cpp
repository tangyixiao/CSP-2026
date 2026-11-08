#include<bits/stdc++.h>
using namespace std;
int a[500030];
bool b[500030];
int c[500030];
int main(){
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n ,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];	
	}
	for(int k=1;k<=n;k++){
		
		for(int i=n;i>=k;i--){
		if(b[a[i]]==0){
			b[a[i]]=1;

		}else{
       
			for(int i=1;i<=m;i++){
				if(b[i]==1){
					c[i]++;
					b[i]=0;
				}
			}
			break;
		}
	
	
	
		for(int i=1;i<=m;i++){
				if(b[i]==1){
					c[i]++;
					b[i]=0;
				}
			}	
	}

	
}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}

return 0;
}
