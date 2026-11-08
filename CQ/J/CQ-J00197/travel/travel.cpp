#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int C1,Sx1,Sy1,C2,Sx2,Sy2;
bool a[10];
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<2;i++)
		Sy1=Sy1*10+(s1[i]-'0');
	for(int i=0;i<2;i++)
		Sy2=Sy2*10+(s2[i]-'0');
	Sx1=s1[2]-'A'+1;
	Sx2=s2[2]-'A'+1;
	if(c1==c2){
		a[1]=1;
		if(Sy1==Sy2){
			a[2]=1;
			if(Sx1+Sx2==9)
				a[3]=1;
			else if(Sx1+Sx2<=5&&Sx1!=4&&Sx2!=4)
				a[3]=1;	
			
		}
		if(a[2]&&a[3]&&Sx2-Sx1==1)
		   a[4]=1;
	}
	for(int i=1;i<=4;i++)
		cout<<a[i];
	return 0;
} 
