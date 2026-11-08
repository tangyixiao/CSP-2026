#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string ansful="";
	string a1,a2,a3,a4;
	int tseat,tseat2;
	cin>>a1>>a2>>a3>>a4;
	if(a1==a3){
		ansful=ansful+"1";
	}
	else{
		ansful=ansful+"0";
	}
	if(ansful[0]=='1'){
		if((a2[0]==a4[0])&&(a2[1]==a4[1])){
			ansful=ansful+"1";
		}
		else{
			ansful=ansful+"0";
		}
	}
	else{
		ansful=ansful+"0";
	}
	if(ansful[1]=='1'){
			 tseat=a2[2]-'A'+1;
			 tseat2=a4[2]-'A'+1;
			 if(tseat==6) tseat=5;
			 if(tseat2==6)tseat=5;
			 if((tseat2>3.5)==(tseat>3.5)){
			 	ansful=ansful+"1";
			 }
			 else{
			 	ansful=ansful+"0";
			 }
		}
		else{
			ansful=ansful+"0";
		}	
	if(ansful[2]=='1'){
			 
			 if(abs(tseat-tseat2)<1.5){
			 	ansful=ansful+"1";
			 }
			 else{
			 	ansful=ansful+"0";
			 }
		}
		else{
			ansful=ansful+"0";
		}
	cout<<ansful<<endl;		
	return 0;
}
