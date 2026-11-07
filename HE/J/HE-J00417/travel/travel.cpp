#include<bits/stdc++.h>
using namespace std;

string c,cc,s,ss; 
int sp = 1,ssp = 1;
int spp = 1;
int a[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>cc>>ss;
	for(int i = 0;i <= 1;i++){
		if(c[i] != cc[i]){
			cout<<"0000";
			return 0;
		}
		else{
			a[1] = 1;
		}
	}
	for(int i = 0;i <= 1;i++){
		if(s[i] != ss[i]){
			cout<<1000;
			return 0;
		}
		else{
			a[2] = 1;
		}
	}
	
	
	if(s[2] == 'A'||s[2] == 'B'||s[2] == 'C'){
		sp = 1;
	}
	if(ss[2] == 'A'||ss[2] == 'B'||ss[2] == 'C'){
		ssp = 1;
	}
	if(s[2] == 'D'||ss[2] == 'F'){
		sp = 2;
	}
	if(ss[2] == 'D'||ss[2] == 'F'){
		ssp = 2;
	}

	if(sp != ssp){
		cout<<1100;
		return 0;
	}
	
	if(s[2] - 1 == ss[2]||s[2] + 1 == ss[2]){
		spp = 1;
	}
	else{
		spp = 0;
	}
	
	if(spp == 1)
	{
		cout<<1111;
	}
	else{
		cout<<1110;
	}
	return 0;
}
