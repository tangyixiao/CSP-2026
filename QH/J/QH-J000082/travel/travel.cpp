#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int ans[6];
int ce1,ce2,lin1,lin2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(s1[2]=='A' or s1[2]=='B' or s1[2]=='C')
		ce1=1;
	if(s2[2]=='A' or s2[2]=='B' or s2[2]=='C')
		ce2=1;
	lin1=s1[2]+'0';lin2=s2[2]+'0';
		
	if(c1==c2){
		ans[1]=1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			ans[2]=1;
			if(ce1==ce2){
				ans[3]=1;
				if(lin1+1==lin2 or lin1-1==lin2)
					ans[4]=1;}}}
	
	for(int i=1;i<=4;i++)
		cout<<ans[i];
	cout<<endl; 
	return 0; 
	fclose(stdin);
	fclose(stdout);
} 
