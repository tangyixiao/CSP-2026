#include<bits/stdc++.h>
using namespace std;
string cang1,sima1,cang2,sima2;
int res[10];
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>cang1>>sima1>>cang2>>sima2;
    if(cang1==cang2){
    	res[1]=1;
	}else{
		res[1]=0;
	}
	if(sima1[0]==sima2[0]&&sima1[1]==sima2[1]){
		res[2]=1;
	}else{
		res[2]=0;
	}
	if((sima1[2]<='C'&&sima2[2]<='C')||(sima1[2]>='D'&&sima2[2]>='D')){
		res[3]=1;
	}else{
		res[3]=0;
	}
	if((max(sima1[2],sima2[2])=='B'&&min(sima1[2],sima2[2])=='A')||(max(sima1[2],sima2[2])=='C'&&min(sima1[2],sima2[2])=='B')||(max(sima1[2],sima2[2])=='F'&&min(sima1[2],sima2[2])=='D')){
		res[4]=1;
	}else{
		res[4]=0;
	}
	for(int i=1;i<=4;++i){
		if(res[i]==0)res[i+1]=0;
		cout<<res[i];
	}
	cout<<endl;
	return 0;
} 