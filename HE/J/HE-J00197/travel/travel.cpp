#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	int a[2];
	string s1,s2;
	int ans=0;
	cin>>a[0];
	for(int i=0;i<3;i++){
		cin>>s1[i];
	}
	cin>>a[1];
	for(int i=0;i<3;i++){
		cin>>s2[i];
	}
	if(a[0]==a[1]){
		ans+=1000;
	} 
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		ans+=100;
		if(s1[2]=='A'){
			if(s2[2]=='B'){	
				ans+=11;	
			}
			else if(s2[2]=='C'){
				ans+=10;	
			}
		}
		if(s1[2]=='B'){
			if(s2[2]=='A'||s2[2]=='C'){	
				ans+=11;	
			}
		}
		if(s1[2]=='C'){
			if(s2[2]=='B'){	
				ans+=11;	
			}
			else if(s2[2]=='A'){
				ans+=10;
			}
		}
		if(s1[2]=='D'&&s2[2]=='F'){
			ans+=11;
		}
		if(s1[2]=='F'&&s2[2]=='D'){
			ans+=11;
		}
	}
	cout<<ans;
	return 0;
}
