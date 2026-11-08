#include<bits/stdc++.h>
using namespace std;

int main(){
freopen("migrate.in", "r", stdin);
freopen("migrate.out", "w", stdout);

	int n,d;//岛屿和鸟最远距离
	cin>>n>>d;
	int N=3*n;
	int a[n];//各个岛屿的坐标
	
	int b[N];
	int u=0,v=0;//u为有几种可能 v需要几个元素 
	for(int i=0;i<n;i++){
		cin>>a[i];
	} 
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int x=0;x<n;x+=3){
				b[x]=a[i];
				b[x+1]=a[j];
				b[x+2]=a[j]-a[i];
				
				
			}
		
		}
	}


		
	
		 
return 0;
}
