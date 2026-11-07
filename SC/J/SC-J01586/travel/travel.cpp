#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string ca,sa,cb,sb;
	cin>>ca>>sa>>cb>>sb;
	int o1=0,o2=0,o3=0,o4=0;
	
	string sac,sbc;
	char sao=sa[2],sbo=sb[2];
	for(int i=0;i<=1;i++){
		sac+=sa[i];
		sbc+=sb[i];
	}
//	cout<<sac<<' '<<sbc<<endl;
//	cout<<sao<<' '<<sbo<<endl;
	if(ca==cb){
		o1++;
		if(sac==sbc){
			o2++;
			if((sao>='A'&&sao<='C')&&(sbo>='A'&&sbo<='C')||(sao>='D'&&sao<='F')&&(sbo>='D'&&sbo<='F')){
				o3++;
				if((sao==sbo+1)||(sao==sbo-1)){
					o4++;
				}
			}
		}
	}
	cout<<o1<<o2<<o3<<o4;
	return 0;
}