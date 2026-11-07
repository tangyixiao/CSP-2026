#include<bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n[3];string s[3];int a=3;
	for(int i=1;i<=2;i++){
		cin>>n[i];
		cin>>s[i];
	}
	for(int i=1;i<=1;i++){
		if(n[1]==n[2]){
			cout<<1;a--;
		}
		else{
			cout<<0;break;
		}
		if((s[1][0]*10)+s[1][1]==(s[2][0]*10)+s[2][1]){
			cout<<1;a--;
		}
		else{
            cout<<0;break;
        }
        if(s[1][2]<=67&&s[2][2]<=67){
    		cout<<1;a--;
		}
		else {
			cout<<0;break;
		}
		if(s[1][2]+1==s[2][2]||s[2][2]+1==s[1][2]){
			cout<<1;a--;
		}
		else{
			cout<<0;break;
		}
	}
	for(int i=1;i<=a;i++){
		cout<<0;
	}
	return 0;
	}
	
