#include<bits/stdc++.h>
using namespace std;
string a,b,a1,b1;
int aa,bb;
int cnt=4;
char aaa,bbb;
bool flag=true;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>a1>>b>>b1;
	for(int i=0;i<a1.size();i++){
		if(i<=1){
			aa=aa*10+(int)a1[i]-48;
			bb=bb*10+(int)b1[i]-48;
		}
		else{
			aaa=a1[i];
			bbb=b1[i];
		}
	}
	//cout<<aa<<" "<<bb<<" "<<aaa<<" "<<bbb;
	if(a==b){
		cout<<"1";
		cnt--;
	}
	else if(a!=b){
		cout<<"0";
		for(int i=0;i<cnt-1;i++){
			cout<<"0";
		}
		return 0;
	}
	if(aa==bb){
		cout<<"1";
		cnt--;
	}
	else if(aa!=bb){
		cout<<"0";
		for(int i=0;i<cnt-1;i++){
			cout<<"0";
		}
		return 0;
	}
	if(aaa=='A'||aaa=='B'||aaa=='C'){
		if(bbb=='A'||bbb=='B'||bbb=='C'){
			cout<<"1";
			cnt--;
		}
		else{
			for(int i=0;i<cnt;i++){
				cout<<"0";
			}
			return 0;
		}
	}
	else if(aaa=='D'||aaa=='F'){
		if(bbb=='D'||bbb=='F'){
			cout<<"1";
			cnt--;
		}
		else{
			for(int i=0;i<cnt;i++){
				cout<<"0";
			}
			return 0;
		}
	}
	if(aaa=='D'&&bbb=='F'){
		cout<<"1";
	}
	else if(aaa=='F'&&bbb=='D'){
		cout<<"1";
	}
	else if(aaa+1==bbb||aaa-1==bbb){
		if(aaa=='C'&&bbb=='D'){
			cout<<"0";
		}
		else if(aaa=='D'&&bbb=='C'){
			cout<<"0";
		}
		else{
			cout<<"1";
		}
	}
	else{
		cout<<"0";
	}
	return 0;
} 
