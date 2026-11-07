#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int M=1;
string C1,S1,C2,S2;
string ans;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>C1>>S1>>C2>>S2;
	string T1;T1+=S1[0];T1+=S1[1];
	string T2;T2+=S2[0];T2+=S2[1];
	char a=S1[2],b=S2[2];
	int opt=0;
	if(C1==C2){
		ans+='1';
		if(T1==T2){
			ans+='1';
			if(a=='D' or a=='F'){
				if(b=='D' or b=='F'){
					ans+='1';
					opt=1;
				}
				else{
					ans+='0';
				}
			}
			else{
				if(b=='A' or b=='B' or b=='C'){
					ans+='1';
					opt=2;
				}
				else{
					ans+='0';
				}
			}
		}
		else{
			ans+="00";
		}
		if(opt){
			if(abs((a-'a')-(b-'a'))==1){
				ans+='1';
			}
			else{
				ans+='0';
			}
		}else{
			ans+='0';
		}
	}
	else{
		ans+="0000";
	}
	
	cout<<ans;
	return 0;
}