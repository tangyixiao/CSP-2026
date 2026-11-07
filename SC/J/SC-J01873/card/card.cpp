#include<bits/stdc++.h>
using namespace std;
int ca[10000001],bj1[1000000],bj2[100001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int cn,cm,c1,c2,k1=0,k2=0,k3=0,k4=0;
	cin>>cn>>cm;
	for(int i=1;i<=cn;i++){
		cin>>ca[i];
		if(ca[i]==1){
			bj1[i]=1;
			k1=i;
		} 
		else{
			bj2[i]=1;
			k2=i;
		} 
	}
	if(cm==1) cout<<cn;
	else if(cm==2){
		if(ca[cn]==2){
			for(int i=1;i<=cn;i++){
				if(bj2[i]==1&&i<cn){
					k3=i;
				}
			} 
			if(k1>k3) cout<<k1-k3<<" "<<cn;
			else cout<<0<<" "<<cn;
		}else{
			for(int i=1;i<=cn;i++){
				if(bj1[i]==1&&i<cn){
					k4=i;
				}
			} 
			if(k2>k4) cout<<k2-k4<<" "<<cn;
			else cout<<0<<" "<<cn;
		}
	}
	
	return 0;
}
