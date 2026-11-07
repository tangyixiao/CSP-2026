#include <bits/stdc++.h>
using namespace std;
 int xiang,xiang2;
 int p,p2;
 int a,a2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=0;i<=4;i++){
		cin>>xiang>>p>>a>>xiang2>>p2>>a2;
		if(xiang==xiang2){
			cout<<1;
		}else{
			cout<<0;
			break;
		}
		if(p==p2&&(a+1==a2||a-1==a2)){
			cout<<1;
		}else{
			cout<<0;
		}
		
		
	}
	return 0;
}
