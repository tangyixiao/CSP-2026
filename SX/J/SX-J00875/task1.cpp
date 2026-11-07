#include<bits/stdc++.h>
using namespace std;
bool che=0,pai=1,ce=1,lin=1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,s,b,s2;
	cin>>a>>s>>b>>s2;
	for(int i=1;i<=a.size();i++){
		if(a[i]==b[i]) che=1;
		else che=0;
	}
	if(che==1){
		for(int i=1;i<=s.size()-1;i++){
			if(s[i]==s2[i]){
				pai=1;
			}
		}
	}
	if(pai==1){
		if(s[3]>='D'&&s2[3]>='D'){
			ce=1;
		}else if(s[3]<='C'&&s2[3]<='C'){
			ce=1;
		}else{
			ce=0;
		}
	}
	if(pai==1){
		if(s[3]-1==s2[3]||s[3]+1==s2[3]){
			lin=1;
		}else{
			lin=0;
		}
	}
	cout<<che<<pai<<ce<<lin;
 	return 0;
}