#include <bits/stdc++.h>
using namespace std;
char a[1005],a2[1005],s[1005],s2[1005];
bool pan=1,pan2=1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>(a+1)>>(a2+1)>>(s+1)>>(s2+1);
	for(int i=1;i<=2;i++){
		if(a[i]!=s[i]){
			pan=0;
			pan2=0;
		}
	}
	if(pan)cout<<1;
	else cout<<0;
	pan=1;
	if(pan2==0)cout<<0;
	else{
		for(int i=1;i<=2;i++){
			if(a2[i]!=s2[i]){
				pan=0;
				pan2=0;
			}
		}
		if(pan)cout<<1;
		else cout<<0;
	}
	pan=1;
	if(pan2==0)cout<<0;
	else{
		if(a2[3]>='A'&&a2[3]<='C'){
			if(s2[3]>='D'&&s2[3]<='F'){
				pan=0;
				pan2=0;
			}
		}
		else if(a2[3]>='D'&&a2[3]<='F'){
			if(s2[3]>='A'&&s2[3]<='C'){
				pan=0;
				pan2=0;
			}
		}
		if(pan)cout<<1;
		else cout<<0;
	}
	pan=1;
	if(pan2==0)cout<<0;
	else{
		if(a2[3]>='A'&&a2[3]<='C'){
			if(((char)(a2[3]+1)=='D'||(char)(a2[3]+1)!=s2[3])&&((char)(s2[3]+1)=='D'||(char)(s2[3]+1)!=a2[3]))pan=0;
		}
		else if(a2[3]>='D'&&a2[3]<='F'){
			cout<<1;
			return 0;
		}
		if(pan)cout<<1;
		else cout<<0;
	}
	return 0;
} 
