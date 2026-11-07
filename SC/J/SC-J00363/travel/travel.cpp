#include <bits/stdc++.h>
using namespace std;
int f(char a){
	return a-'0';
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	int ans1=0,ans2=0,ans3=0,ans4=0;
	string an;
	string bn;
	
	char am[3],bm[3];
	
	cin>>an;
	for(int i=0;i<=2;i++){
		cin>>am[i];
	} 
	
	cin>>bn;
	for(int i=0;i<=2;i++){
		cin>>bm[i];
	} 
	
	if(an==bn){
		ans1=1;
		//-
		if(am[0]==bm[0]&&am[1]==bm[1]){
			ans2=1;
			//--
			int ans=0;
			if(17<=f(am[2])&&f(am[2])<=19){
				if(17<=f(bm[2])&&f(bm[2])<=19){
					ans3=1;
				}
			}else if(f(am[2])==20||f(am[2])==22){
				if(f(bm[2])==20||f(bm[2])==22){
					ans3=1;
				}
			}
			//---
			
			int q=f(am[2]);
			int w=f(bm[2]);
				
			if(max(q,w)-min(q,w)==1){
				ans4=1;
			}
			
		}
	}
	
	cout<<ans1<<ans2<<ans3<<ans4;
	
	
	 
	fclose(stdin);
	fclose(stdout);
	return 0;
}