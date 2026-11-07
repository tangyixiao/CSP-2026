#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	bool f1=1,f2=1,f3=0,f4=0;
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	for(int i=0;i<s1.size();i++){
		if(s1[i]!=s3[i]){
			f1=0;
			break;
		}
	}
	if(!f1){
		f2=0;
	}else{
		for(int i=0;i<2;i++){
			if(s2[i]!=s4[i]){
				f2=0;
				break;
			}
		}
	}
	if(f2){
		if(s2[2]>='A'&&s2[2]<='C'){
			if(s4[2]>='A'&&s4[2]<='C'){
				f3=1;
				if(abs(s2[2]-s4[2])==1){
					f4=1;
				}
	    	}
		}else{
			if(s4[2]>='D'&&s4[2]<='F'){
				f3=1;
				f4=1;
			}
		}
	}
	cout<<f1<<f2<<f3<<f4; 
	return 0;
} 
