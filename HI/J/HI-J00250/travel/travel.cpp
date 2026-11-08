#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a;
	string b;
	string c;
	string d;
	cin>>a>>b>>c>>d;
	if(a==c)
	{
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	
	for(int i=0,j=0;i<b.size(),j<d.size();)
	{
	if(b[i]==d[j]&&d[j+1]==b[i+1])
	{
		cout<<"1";
	}else{
		cout<<"000";
			return 0;
	}
	if(b[i]==d[j]&&d[j+1]==b[i+1]){
		
		if((b[i+2]=='A' || b[i+2]=='B' || b[i+2]=='C' )&&(d[i+2]=='A' || d[i+2]=='B' || d[i+2]=='C' )){
			cout<<"1";
		}else if((b[i+2]=='D' || b[i+2]=='F')&&(d[i+2]=='D' || d[i+2]=='F')){
			cout<<"1";
		}else{
			cout<<"0";
		
		}
	}
	
	break;
	}
	
	for(int i=0,j=0;i<b.size(),j<d.size();){
		if(b[i+2]=='A')
	{
		if(d[j+2]=='B')
		{
			cout<<"1";
		}else{
			cout<<"0";
		}	
		break;
	}else if(b[i+2]=='B'){
		if(d[j+2]=='A' || d[j+2]=='C' )
		{
			cout<<"1";
		}else{
			cout<<"0";
		}	
		break;
	}else if(b[i+2]=='C')
	{
		if(d[j+2]=='B')
		{
			cout<<"1";
		}else{
			cout<<"0";
		}	
		break;
	}else if(b[i+2]=='D')
	{
		if(d[j+2]=='F')
		{
			cout<<"1";
		}else{
			cout<<"0";
		}	
		break;
	}else if(b[i+2]=='F')
	{
		if(d[j+2]=='D')
		{
			cout<<"1";
		}else{
			cout<<"0";
		}	
		break;
	}
	break;
	}
	
	return 0;
}
