#include <bits/stdc++.h>
using namespace std;

int f(string x){
	if (x=="A") return 1;
	if (x=="B") return 2;
	if (x=="C") return 3;
	if (x=="D") return 4;
	if (x=="F") return 5;
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string Ra,Rb,Rrow,Rseat;
	string Xa,Xb,Xrow,Xseat;
	int check1=0,check2=0,check3=0,check4=0;
	cin>>Ra>>Rb>>Xa>>Xb;
	for (int i=0;i<2;i++){
		Rrow+=Rb[i];
		Xrow+=Xb[i];
	}
	Rseat=Rb[2];
	Xseat=Xb[2];

	if (Ra==Xa){
		check1=1;
		if (Rrow==Xrow){
			check2=1;
			if ((f(Rseat)<=3 && f(Xseat)<=3) || (f(Rseat)>3 && f(Xseat)>3)){
				check3=1;
				if (abs(f(Rseat)-f(Xseat))==1){
					check4=1;
				}
			}
		}
	}
	
	cout<<check1<<check2<<check3<<check4;
	return 0;
} 
