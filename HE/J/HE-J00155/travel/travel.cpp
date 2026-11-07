#include<bits/stdc++.h>
#define int long long
using namespace std;
string c1,s1,c2,s2;
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;	
	if(c1==c2) cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	
	bool f=1;
	for(int i=0;i<=1;i++) if(s1[i]!=s2[i]) f=0;
	if(f) cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	
	int x=abs(s1[2]-s2[2]);
	if(x>2) {
		cout<<"00";
		return 0;
	}
	else{
		if(x==2){
			if((s1[2]=='A'&&s2[2]=='C')||
			   (s1[2]=='C'&&s2[2]=='A')) cout<<1; 
			else {
			    cout<<"00";
			    return 0;
		    }
		}
		else if(x==1){
			if((s1[2]=='C'&&s2[2]=='D')||
			   (s1[2]=='D'&&s2[2]=='C')) {
			   cout<<"00";
			   return 0;
		    }
		    else cout<<1;
		}
	}
	
	if(abs(s1[2]-s2[2])==1) cout<<1;
	else cout<<0;
	return 0;
}
