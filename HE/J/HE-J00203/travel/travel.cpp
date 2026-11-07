#include<bits/stdc++.h>
using namespace std;
string c1,c2,c3,c4;
//string ans;
int jdz(int a,int b){
	if(a>b) return a-b;
	else return b-a;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>c2>>c3>>c4;

	if(!(c1==c3)){
		cout<<"0000";
		return 0;
	}
	
	int cnt1=0,cnt2=0;
	for(int i=0;i<2;i++){
		cnt1=cnt1*10+(c2[i]-'0');
		cnt2=cnt2*10+(c4[i]-'0');
	}

	if(!(cnt1==cnt2)){
		cout<<"1000";
		return 0;
	}
	
	
	int cnt3=c2[2]-'A',cnt4=c4[2]-'A';
	if(!(cnt3+cnt4==1 || cnt3+cnt4==2 || cnt3+cnt4==3 || cnt3+cnt4==7)){
		cout<<"1100";
		return 0;
	}
	
	if(!(jdz(cnt3,cnt4)==1)){
		cout<<"1110";
		return 0;
	}
	
	
	cout<<"1111";
	
	
	
	return 0;
} 
