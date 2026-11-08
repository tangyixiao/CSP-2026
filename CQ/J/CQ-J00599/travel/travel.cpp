#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	char xl1[3]={'A','B','C'};
	char xl2[2]={'D','F'}; 
	if(c1==c2){
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
			int pdr1=0,pdr2=0,pdx1=0,pdx2=0,idr=0,idx=0;
			for(int i=0;i<3;i++){
				if(s1[2]==xl1[i]){
					pdr1=1;
					idr=i+1;
				}
				if(s2[2]==xl1[i]){
					pdx1=1;
					idx=i+1;
				}
			}
			for(int i=0;i<2;i++){
				if(s1[2]==xl2[i]){
					pdr2=1;
					idr=4+i;
				}
				if(s2[2]==xl2[i]){
					pdx2=1;
					idx=4+i;
				}
			}
			if((pdr1==1&&pdx1==1)||(pdr2==1&&pdx2==1)){
				cout<<1;
				if(abs(idr-idx)==1){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}      
