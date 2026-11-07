#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	long long s=0,h=0,l=0,w=0;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1; 
	} 
	else{
		cout<<0;
		w++;
	}
	for(int i=1;i<s1.size()-1;i++){
		if(s1[i]!=s2[i]){
			s++;
			break;
		}
	}
	if(s==0&&w==0){
		cout<<1;
	}
	else{
		cout<<0;
	}
	for(int i=s1.size()-1;i<s1.size();i++){
		if(s1[i]<='C'&&s1[i]>='A'&&w==0&&s2[i]>='A'&&s2[i]<='C'&&s==0||s1[i]>='D'&&w==0&&s2[i]>='D'&&s1[i]<='F'&&s2[i]<='F'&&s==0){
			cout<<1;
		}
		else{
			cout<<0;
			h++;
			break;
		}
		if(h==0&&s1[i]+1==s2[i]&&w==0||s1[i]-1==s2[i]&&h==0&&w==0){
			cout<<1;
			l++;
		}
	}
	if(l==0){
		cout<<0;
	}
	return 0;
}