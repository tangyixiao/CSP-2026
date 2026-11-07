#include<bits/stdc++.h>
using namespace std;
int n,m,t,y,ans=0;
char a[3],b[3],A,B;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);cin.tie(0);
	cin>>n;
	for(int i=1;i<=3;i++){
		cin>>a[i];
		if(i==3)  A=a[i];
	}
	cin>>m;
	for(int i=1;i<=3;i++){
		cin>>b[i];
		 
		if(i==3) B=b[i];
	}

	if(n==m)cout<<"1";//同一节 
	else cout<<"0";
	if(a[2]==b[2]&&n==m) cout<<"1"; //同一排 
	else cout<<"0";
	if(abs(A-B)==0&&a[2]-b[2]==0||b[2]-a[2]==0&&a[1]==b[1]){
		if(A!='C'&&B!='D'||A!='D'&&B!='C') 
		{
			if(n==m)cout<<"1";//列是否相邻
			else cout<<"0";
		}
			
		
	}
	if(A=='A'&&B=='B'||B=='A'&&A=='B'||A=='B'&&B=='C'||B=='B'&&A=='C'||A=='D'&&B=='F'||A=='F'&&B=='D')cout<<"1";//是否相邻 
	else cout<<"0";
	
	return 0; 
} 