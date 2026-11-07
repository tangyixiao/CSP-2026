#include<bits/stdc++.h>
//#define int long long
using namespace std;
int n,m,ac,bc;
string a,b;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n>>a>>m>>b;
	if(n==m){
		ac=int(a[0])*10+int(a[1]);
		bc=int(b[0])*10+int(b[1]);
		if(ac==bc){
			if(a[2]>='D'&&b[2]>='D'||a[2]<'D'&&b[2]<'D'){
				if((int(a[2])+1!=int(b[2]))&&(int(a[2])-1!=int(b[2]))){
					cout<<1110;
				}else cout<<1111;	
			}else cout<<1100;
			
		}else cout<<1000;
		
	}else cout<<"0000";
	return 0;
}
 
