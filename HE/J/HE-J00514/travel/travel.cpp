#include<bits/stdc++.h>
using namespace std;
string cou;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string R,X,R1,X1;
	cin>>R1>>R>>X1>>X;
	if(R1[1]==X1[1]&&R1[0]==X1[0]){
		cou+='1';
		if(R[0]==X[0]&&R[1]==X[1]){
			cou+='1';
			if(R[2]>='A'&&R[2]<='C'&&X[2]>='A'&&X[2]<='C'){
				cou+='1';
				if(R[2]-1==X[2]||R[2]+1==X[2]){
					cou+='1';
				}else {
					cou+='0';
				}
			}else if(R[2]>='D'&&R[2]<='F'&&X[2]>='D'&&X[2]<='F'){
				cou+='1';
				if(R[3]-1==X[2]||R[2]+1==X[2]){
					cou+='1';
				}else{
					cou+='0';
				} 
			}else{
				cou+="00";
			}
		}else{
			cou+="000";
		}
	}
	else{
		cou+="0000";
	}
	cout<<cou;
	return 0;
}
