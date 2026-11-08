#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
	string c1;
	string c2;
	string s1;
	string s2;
	cin>>c1>>s1>>c2>>s2;
	bool sj=true;
	bool d=true;
	bool w=true;
	int sum=0;
	int x=0;
	for (int i=0;i<c1.size();i++)
	{
		for (int j=0;j<c2.size();j++)
		{
			if (i!=j){
				continue;
			}
			if (c1[i]==c2[j]){
				break;
			} 
			else if(c1[i]!=c2[j]){
				sj=false;
			}
		}
	}
	if (sj==true){
		cout<<"1";
	}
	else {
		cout<<"0";
	}
	
	 for (int i=0;i<s1.size();i++)
	 {
	    for (int j=0;j<s2.size();j++)
	    {
	    	if (sj==false){
	    	cout<<"0"<<"0"<<"0";
	    	return 0;
			}
		  else if (sj==true &&s1[0]==s2[0]&&s1[1]==s2[1]){
		   	  d=false;
		   }
		   else if (s1[0]!=s2[0]||s1[1]!=s2[1]){
		   	d=true;
		   }
		   
		   if(d==false&&s1[2]=='A'||s1[2]=='B'||s1[2]=='C'&&s2[2]=='A'||s2[2]=='B'||s2[2]=='C'){
		   	sum++;
		   }
		   else if (d==false&&s1[2]=='D'||s1[2]=='F'&&s2[2]=='D'||s2[2]=='F'){
		   	sum++;
		   }
		   else {
		   	sum=0;
		   }
		  if (sum!=0&&s1[2]=='A'&&s2[2]=='B'||s1[2]=='B'&&s2[2]=='C'||s1[2]=='D'&&s2[2]=='F'){
		  	  x++;
		  }
		  else {
		  	x=0;
		  }
		}
	 }
	 if(d==false)
	 cout<<"1";
	 else 
	 cout<<"0";
	 if (sum>0)
	 cout<<"1";
	 else 
	 cout<<"0";
	 if(x>0)
	 cout<<"1";
	 else cout<<"0";
	 
	
	return 0;
}
