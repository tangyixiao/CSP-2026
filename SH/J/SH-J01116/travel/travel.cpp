#include<bits/stdc++.h>
using namespace std;
char ca,cb;
int a,b,sa,sb;
bool ans[4]={0,0,0,0};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>sa>>ca>>b>>sb>>cb;
	if(a==b){
		ans[0]=1;
		if(sa==sb){
			ans[1]=1;
			if(ca<='C'&&cb<='C'||ca>='D'&&cb>='D'){
				ans[2]=1;
				if(abs(int(ca)-int(cb))==1){
					ans[3]=1;
				}
			}
		}
	}
	for(int i=0;i<=3;i++){
		cout<<ans[i];
	}
	return 0;
}
