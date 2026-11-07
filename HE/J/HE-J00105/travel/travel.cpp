#include<bits/stdc++.h>
using namespace std;
string a,b;
long long n,m;
int f1=0,f2=0,f3=0,f4=0;
int main(){
	freopen("travel.in","r",stdin);	
	freopen("travel.out","w",stdout);
	cin>>n>>a>>m>>b;
	if(n==m){
		f1=1;
		if(a[0]==b[0]&&a[1]==b[1]){
			f2=1;
			if(((a[2]>='A'&&a[2]<='C')&&(b[2]>='A'&&b[2]<='C'))||((a[2]=='D'||a[2]=='F')&&(b[2]=='D'||b[2]=='F'))){
				f3=1;
				if(((a[2]-b[2]==1||b[2]-a[2]==1)&&!((a[2]=='C'&&b[2]=='D')||(b[2]=='C'&&a[2]=='D')))||(a[2]=='D'&&b[2]=='F')||(b[2]=='D'&&a[2]=='F')){
					f4=1;
				}else{
					f4=0;
				}
			}else{
				f3=0;f4=0;
			}
		}else{
			f2=0;f3=0;f4=0;
		}
	}
	else{
		f1=0;f2=0;f3=0;f4=0;
	} 
	
	cout<<f1<<f2<<f3<<f4;
	
	
	return 0;
}
