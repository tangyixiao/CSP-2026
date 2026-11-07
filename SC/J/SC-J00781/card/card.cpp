#include<bits/stdc++.h> 
using namespace std;
int a[1001],c[1001];
int s[3],vis[3];
int main(){
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		c[i] = a[i];
	}
	
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			int s1=0,s2=0,y1=0,y2=0;
			if(a[j] == 1){
				if(vis[1] == 1){
					y1 = j;
					vis[1]++;
				}else{
					s1 = j;
					vis[1]++; 
				}
			}else if(a[j] == 2){
				if(vis[2] == 2){
					y2 = j;
					vis[2]++;
				}else{
					s2 = j;
					vis[2]++; 
				}
			}
			if(vis[1] == 2){
				for(int k=s1;k<=y1;k++){
					a[k] = 0;
				}
				vis[1] = 0;
			}
			if(vis[2] == 2){
				for(int k=s2;k<=y2;k++){
					a[k] = 0;
				}
				vis[2] = 0;
			}
			
		}
		for(int j=i;j<=n;j++){
			if(a[j] == 1){
				s[1]++;
			}else if(a[j] == 2){
				s[2]++;
			}
		}
		for(int j=1;j<=n;j++){
			a[j] = c[j];
		}
		vis[1] = 0,vis[2] = 0;
	}
	for(int i=1;i<=m;i++){
		cout<<s[i]<<" ";
	}
	return 0;
} 