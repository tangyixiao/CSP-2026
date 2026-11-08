#include<bits/stdc++.h>
using namespace std;
string cr,sr,cx,sx,ans="0000";
bool a,b,c,d,pr,px;
bool pd(string s,int x){
	if(s[2]<='C'){
		if(x==0)pr=1;
		else px=1;
		return 1;
	}
	else{
		if(x==0)pr=0;
		else px=0;
		return 0;
	} 
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	cin>>cr>>sr>>cx>>sx;
	if(cr==cx){
		a=1;
		if(sr[1]==sx[1] and sr[0]==sx[0]){
			b=1;
			if(pd(sr,0)==pd(sx,1)){
				c=1;
				if((pr==1 and px==0)or(pr==0 and px==1)){
					
				}
				else{
					if(pr==0){
						if(abs(sr[2]-sx[2])==2){
							d=1;
						}
					}
					else{
						if(abs(sr[2]-sx[2])==1){
							d=1;
						}
					}
				}
			}
		}
	}
	if(a==1)ans[0]='1';
	if(b==1)ans[1]='1';
	if(c==1)ans[2]='1';
	if(d==1)ans[3]='1';
	cout<<ans;
	return 0;
}
