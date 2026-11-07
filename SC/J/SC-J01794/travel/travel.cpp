#include<bits/stdc++.h>
using namespace std;
long long c1,c2;
string s1,s2;
bool tc(string x,string y){
	if((x=="A" || x=="B" ||x=="C") && (y=="A" || y=="B" ||y=="C")){
		return 1;
	}
	else if((x=="D" || x=="F") && (y=="D" || y=="F")){
		return 1;
	}
	else{
		return 0;
	}
}
bool lj(string x,string y){
	if((x=="A" && y=="B")||(x=="B" && y=="A")||(x=="B" && y=="C")||(x=="C" && y=="B")){
		return 1;
	}
	else if((x=="D" && y=="F")||(x=="F" && y=="D")){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	int f1=0;
	if(c1==c2){
		f1=1;
		cout<<1;
	}
	else{
		cout<<0;
	}
	string p1=s1.substr(0,2);
	string p2=s2.substr(0,2);
	int f2=0;
	if(p1==p2 && f1==1){
		f2=1;
		cout<<1;
	}
	else{
		cout<<0;
	}
	string t1=s1.substr(2,1);
	string t2=s2.substr(2,1);
	int f3=0;
	if(f1==1 && f2==1 && tc(t1,t2)){
		f3=1;
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(f1==1 && f2==1 && f3==1 &&lj(t1,t2)){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
} 