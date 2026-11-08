#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,x,y;
	cin>>a>>b>>x>>y;
	if (a[0]==x[0]&&a[1]==x[1]){
		if (b[0]==y[0]&&b[1]==y[1]){
			if (b[2]=='D'&&y[2]!='F'||b[2]=='F'&&y[2]!='D'||y[2]=='D'&&b[2]!='F'||y[2]=='F'&&b[2]!='D') cout<<"1100";
			else{
				if (b[2]+1==y[2]||b[2]-1==y[2]) cout<<"1111";
				else cout<<"1110";
			}
		}else cout<<"1000";
		
	}else cout<<"0000";
 	return 0;
}

