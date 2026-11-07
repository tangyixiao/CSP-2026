#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c_1,s_1,c_2,s_2;
	string a,b;//a是s_1的数字部分，b是s2的数字部分 
	char c,d;//c是s_1的字母部分，d是s2的字母部分
	cin>>c_1>>s_1>>c_2>>s_2;
	
	if(c_1==c_2) cout<<1;//同一车厢 
	else cout<<0000;
	
	for(int i=0;i<s_1.size();i++){
		if(s_1[i]<='9' && s_1[i]>='0') a+=s_1[i];
		else c=s_1[i];
	}
	for(int i=0;i<s_2.size();i++){
		if(s_2[i]<='9' && s_2[i]>='0') b+=s_2[i];
		else d=s_2[i];
	}
	
	if(a==b) cout<<1;//同一排 
	else cout<<000;
	
	
	if(c_1==c_2){
		if(a==b){
			if(c=='A'||c=='B'||c=='C') {
				if(d=='A'||d=='B'||d=='C'){
					cout<<1;
					if(d+1==int(c) || c+1==int(d)){ 
						cout<<1;
					}else {
						cout<<0;
					}
					
				}else cout<<00;
			}
			else {
					if(d=='D'|| d=='E'){
						cout<<11;
					}else cout<<00;
			}
	    }
   }
	return 0;
} 
