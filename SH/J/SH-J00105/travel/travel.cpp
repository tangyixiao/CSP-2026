#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool flag;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1;
	cin>>s1;
	cin>>c2;
	cin>>s2;
	flag=1;
	for(int i=0;i<2;i++){
		if(c1[i]!=c2[i]){
			flag=0;
		}
	}
	cout<<flag;
	for(int i=0;i<2;i++){
		if(s1[i]!=s2[i]){
			flag=0;
		}	
	}
	cout<<flag;
	int pos1=s1[2]-'A';
	int pos2=s2[2]-'A';
	//cout<<pos1<<" "<<pos2<<endl;
	if(pos1>pos2){
		swap(pos1,pos2);
	}
	if(pos1<=2&&pos2>2){
		flag=0;
	}
	cout<<flag;
	if(pos1==3&&pos2==5){
		cout<<flag;
		return 0;
	}
	else if(pos1==2&&pos2==3){
		cout<<0;
		return 0;
	}
	else{
		if((pos2-pos1)!=1){
			cout<<0;
		}
		else{
			cout<<flag;
		}
	}
	return 0;
} 
