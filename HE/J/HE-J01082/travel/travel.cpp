#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen(travel.in,"r",stdin);
	freopen(travel.out,"w",stdout);
	string v[4];
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	  v[0]='1';
	else{	
	v[0]='0';v[1]='0';v[2]='0';v[3]='0';
	for(int i=0;i<4;i++)
      cout<<v[i];
    return 0;
    fclose(stdin);fclose(stdout);
	}
	for(int i=0;i<s1.size()-1;i++)
	{
	  if(s1[i]!=s2[i]){
	  v[1]='0';v[2]='0';v[3]='0';
	  for(int i=0;i<4;i++)
        cout<<v[i];
      return 0;
      fclose(stdin);fclose(stdout);
	  }
	  else
	    v[1]='1';
    }
	for(int i=0;i<s1.size();i++){
	  if(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C'||s1[2]<='D'&&s1[2]>='F'&&s1[2]!='E'&&s2[2]<='D'&&s2[2]>='F'&&s2[2]!='E')
	    v[2]='1';
	  else v[2]='0';  
	  if(s1[2]=='D'&&s2[2]=='F'||s1[2]=='F'&&s2[2]=='D')
	  {
	  	v[3]='1';
	  }
	  else if(s1[2]=='A'&&s2[2]=='B'||s1[2]=='B'&&s2[2]=='A'||s1[2]=='B'&&s2[2]=='C'||s1[2]=='C'&&s2[2]=='B')
        v[3]='1';
      else v[3]='0'; 
    }
    for(int i=0;i<4;i++)
      cout<<v[i];
    return 0;
    fclose(stdin);fclose(stdout);
} 
