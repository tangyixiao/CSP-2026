#include <bits/stdc++.h>
using namespace std;
int a[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string x,y,m,n;
	cin>>x>>m>>y>>n;
	if(x[0]==y[0] and x[1]==y[1]){
		a[1]=1;		
	}
	if(a[1]==1){
		if(m[0]==n[0] and m[1]==n[1]){
			a[2]=1;
			if(m[2]=='A' or 'B' or 'C' and n[2]=='A' or 'B' or 'C' and m[2]!=n[2]){
				a[3]=1;
				if(m[2]=='D' or 'F' and n[2]=='D' or 'F' and m[2]!=n[2]){
					a[3]=1;
				}
				if(m[2]=='A' or 'B' and n[2]=='B' or 'A' and m[2]!=n[2]){
					a[4]=1;
				}
				if(m[2]=='B' or 'C' and n[2]=='C' or 'B' and m[2]!=n[2]){
					a[4]=1;
				}
				if(m[2]=='D' or 'F' and n[2]=='F' or 'D' and m[2]!=n[2]){
					a[4]=1;
				}	
			}
				
		}
		
	}
	for(int i=1;i<=4;i++){
		cout<<a[i];
	}
	
	return 0;
	fclose(stdin);
	fclose(stdout);
}
