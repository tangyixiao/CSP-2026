#include<bits/stdc++.h>
using namespace std;
int n,m,a[100000005],maa=0,b[100000005];
void abc(int x,int y,int z){
	b[y]=a[x];
	if(y==1){
		if(z>maa){
			maa=z;
		}
	}
	if(y>1){
		for(int i=x+1;i<=n;i++){
		    abc(i,y-1,z&a[i]);
    	}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		abc(i,m,a[i]);
	}
	cout<<maa;
	return 0;
}