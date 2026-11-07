#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string chexiang1,weizhi1,chexiang2,weizhi2;
	cin>>chexiang1>>weizhi1>>chexiang2>>weizhi2;
	if(chexiang1!=chexiang2){
		cout<<"0000";
		return 0;
	}
	string pai1=weizhi1.substr(0,2);
	string pai2=weizhi2.substr(0,2);
	if(pai1!=pai2){
		cout<<1000;
		return 0;
	}
	char bianhao1=weizhi1[2],bianhao2=weizhi2[2];
	if((bianhao1<='C'&&bianhao2<='C')||(bianhao1>='D'&&bianhao2>='D')){
		if(abs(bianhao1-bianhao2)==2){
			if(bianhao1=='C'||bianhao2=='C') cout<<1110;
			else cout<<1111;
		}
		else cout<<1111;
	}
	else cout<<1100;
	return 0;
}
