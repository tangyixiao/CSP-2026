#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
 	string ca,sa,cb,sb;
	cin >>ca>>sa>>cb>>sb;
	int f=0;
	if(ca==cb && f==0){

		cout <<1;
	}
	else{
		cout<<0;
		f=1;
	}
	if(sa[0]==sb[0] && sa[1]==sb[1] && f==0){
		cout <<1;
	}else
	{
		cout <<0;
		f=1;
	}
	if(f==0){
	if(sa[2]=='F' || sa[2]=='D'){
		if(sb[2]=='D' || sb[2]=='F'){
			cout <<1<<1;
		}
		else{
			cout <<0<<0;
		}
		
	}
	else{
		if(sb[2]=='A' || sb[2]=='B' || sb[2]=='C'){
			cout <<1;
			int is=abs(int(sa[2]-sb[2]));
			if(is==1){
				cout <<1;
			}
			else{
				cout <<0;
			}
		}
		else{
			cout <<0<<0;
		}
	}
   }
   else{
   	cout <<0<<0;
   }
	
    
	return 0;
}
