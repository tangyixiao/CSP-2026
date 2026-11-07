#include <bits/stdc++.h>
using namespace std;
string s1,s2,c1,c2;
int k=0;
bool n[5];
int main(){
   freopen("travel.in","r",stdin);
   freopen("travel.out","w",stdout);  
	cin>>c1>>s1>>c2>>s2;
    for(int i=0;i<=1;i++){
    	if(c1[i]==c2[i]) k++;
	}
	if(k==2) n[0]=1;
	else {
	cout<<0<<0<<0<<0;
	return 0;
	}
	int k=0;
	for(int i=0;i<=2;i++){
		if(s1[i]==s2[i]) k++;
		if(k==2) n[1]=1;
        else {
		n[1]=0;
		n[2]=0;
		}
		if(s1[i]>='D'&&s2[i]>='D'&&n[1]!=0) k++;
		if(s1[i]>='C'&&s2[i]<='C'&&n[1]!=0) k++;
		if(k==3) n[2]=1;
		}
    if(fabs(s2[2]-s1[2])==1&&n[2]!=0) n[3]=1;
    if(fabs(s2[2]-s1[2])==2&&s1[2]=='D'||s2[1]=='F'&&n[2]!=0) n[3]=1;
	for(int i=0;i<=3;i++){
		cout<<n[i];
	}
	return 0;
}