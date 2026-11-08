#include<bits/stdc++.h>
using namespace std;
long long n,m;
string a,b;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n>>a>>m>>b;
	double a1[7]={};
	if(n==m){
		a1[1]=1;
		if(a[0]==b[0] and a[1]==b[1]){
			a1[2]=1;
			if(a[2]=='A' || a[2]=='B' || a[2]=='C'){
				if(b[2]=='A' || b[2]=='B' || b[2]=='C'){
					a1[3]=1;
					if(a[2]=='D' and b[2]=='F') a1[4]=1;
					if(a[2]=='F' and b[2]=='D') a1[4]=1;
					if(a[2]=='A' and b[2]=='B') a1[4]=1;
					if(a[2]=='B' and b[2]=='A') a1[4]=1;
					if(a[2]=='B' and b[2]=='C') a1[4]=1;
					if(a[2]=='C' and b[2]=='B') a1[4]=1;
				}
			}
		}
	}
	for(int i=1;i<=4;i++){
		cout<<a1[i];
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
