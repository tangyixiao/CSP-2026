#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
int a[1005]={0};
int b[1005]={0};
int n,m;
int cnt=0;
cin>>n>>m;
int c[1005]={0};
for(int i=0;i<n;i++ ){
	cin>>a[i];
}
int p=n;

for(int j=1;j<=n;j++){
	p--;
int b[1005]={0};
	for(int o=0;o<=p;o++){
		b[o]=a[o];		
		for(int k=o;k>=0;k--){
			if(b[k]==b[o]){
				for(int p=k;p<=n;p++){
					b[p]=0;
					b[k]=a[o];
				}
			}
			
		}
	
	}
	for(int h=0;h<=p;h++ ){	
		if(b[h]==1){
			c[1]+=1;		
		}
		if(b[h]==2){
			c[2]+=1;		
		}
		if(b[h]==3){
			c[3]+=1;		
		}
}
}
for(int bu;bu<=3;bu++){
	cout<<c[bu];
}
	return 0;
}
