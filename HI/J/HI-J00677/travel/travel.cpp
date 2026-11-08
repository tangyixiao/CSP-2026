#include<bits/stdc++.h>
using namespace std;
int main(){
//	freopen("travel.in","r",stdin);
//	freopen("travel.out","w",stdout);
	string c,s,v,d;int ans[10];
	cin>>c>>s>>v>>d;
	if(c==v){
		ans[0]=1;
		string a,b;
	for(int i=0;i<2;i++){
		a+=s[i];
		b+=d[i];
	}
	if(a==b){
		ans[1]=1;
		char g=s[2],h=d[2];
		if(g>='A'&&g<='C'){
			if(h>='A'&&h<='C'){
				ans[2]=1;
				if(g+1==h||g-1==h){
					ans[3]=1;
				}else{
					ans[3]=0;
				}
			}else{
				ans[2]=0;
				ans[3]=0;
			}
		}else{
			if(h>='D'&&h<='F'){
				ans[2]=1;
				ans[3]=1;
			}else{
				ans[2]=0;
				ans[3]=0;
			}
		}
	}else{
		ans[1]=0;
		ans[2]=0;
		ans[3]=0;
	}
	}else{
		ans[0]=0;ans[1]=0;ans[2]=0;ans[3]=0;
	}
	for(int i=0;i<4;i++){
		cout<<ans[i];
	}
	return 0;
}
