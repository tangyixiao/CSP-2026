#include<bits/stdc++.h>
using namespace std;
int n,m,l[500030]={0},c[500030]={0},ans[500030]={0};
void card(int d,int g){//要发的牌点数，局数 
	for(int i=1;i<=n-g;i++){
		if(c[i]==d){
			for(int j=i;j<=n-g;j++){
				c[j]=0;
			}
			
			return;
		}
		else{
			c[n-g+1]=d;
			return;
		}
	}
}
int main(){
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>l[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			c[j]=l[j];
		}
		for(int j=1;j<=n-i;j++){
			card(c[j],i);
		}
		for(int j=1;j<=m;j++){
			for(int k=1;k<=n;k++){
				if(c[k]==j){
				ans[j]++;
				j++;
				}
				//cout<<c[j];
			}
			
		}
		//cout<<endl;
	}
	
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	
	return 0;
} 