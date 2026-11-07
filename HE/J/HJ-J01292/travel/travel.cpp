#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("trave.in","r",stdin);
	freopen("trave.out","w",stdout);
	string c1,s1,c2,s2;
	int b[19][6]={0};
	cin>>c1>>s1>>c2>>s2;
	int p1,q1,p2,q2;
	p1=(s1[0]-'0')*10+(s1[1]-'0');
	q1=s1[2]-'A'+1;
	p2=(s2[0]-'0')*10+(s2[1]-'0');
	q2=s2[2]-'A'+1;
	b[p1][q1]=1;
	b[p2][q2]=1;
	int a[5]={0};
	if(c1==c2){
		a[1]=1;
		if(s1[0]==s2[0] && s1[1]==s2[1]){
		a[2]=1;
		}
		if(s2[2]=='A' || s2[2]=='B' || s2[2]=='C'){
		
			if(s1[2]=='A' || s1[2]=='B' || s1[2]=='C'){
				a[3]=1;
			}
		}else{
			if(s2[2]=='D' || s2[2]=='F'){
				if(s1[2]=='D' || s1[2]=='F'){
					a[3]=1;
				}
			}
		}	
	}
	if(b[p1][q2]==b[p1+1][q1] || b[p1][q2]==b[p1][q1+1] || b[p1][q2]==b[p1-1][q1] || b[p1][q2]==b[p1][q1-1]){
		a[4]=1;
	}
	for(int i=1;i<=4;i++){
		cout<<a[i];
	}
	return 0; 
} 
