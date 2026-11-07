#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	int ans[10]={};
	cin>>c1>>s1>>c2>>s2;
	
	if(c1==c2){
		ans[1]=1;
	}else{
		ans[1]=0;
	}
	int l1,l2,h1,h2;
	l1=10*(s1[0]-'0')+(s1[1]-'0');
	h1=s1[2]-'A'+1;
	l2=10*(s2[0]-'0')+(s2[1]-'0');
	h2=s2[2]-'A'+1;
	//cout<<l1<<h1<<l2<<h2;
	if(ans[1]&&l1==l2){
		ans[2]=1;
	}else{
		ans[2]=0;
	}
	if(ans[1]&&ans[2]&&((h1<=3&&h2<=3)||(h1>=4&&h2>=4))){
		ans[3]=1;
	}else{
		ans[3]=0;
	}
	if(ans[1]&&((h1<=3&&h2<=3)||(h1>=4&&h2>=4))){
		if((h1==h2&&(l1==l2+1||l2==l1-1))||(l1==l2)&&(h1==h2+1||h1==h2-1)){
			ans[4]=1;
		}else{
			ans[4]=0;
		}
	}else{
		ans[4]=0;
	}
	cout<<ans[1]<<ans[2]<<ans[3]<<ans[4]; 
	return 0;
}
