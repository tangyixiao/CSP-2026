#include <bits/stdc++.h> 
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout)
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	string c="ABCDF";
	bool d=0;
	if(c1==c2){
		cout<<1;
	}else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	int l=s1.size();
	int l2=s2.size();
	int a=0;
	int b=0; 
	for(int i=0;i<l-1;i++){
		a+=a*10+s1[i]-'0';
	}for(int i=0;i<l2-1;i++){
		b+=b*10+s2[i]-'0';
	}
	if(a==b){
		cout<<1;
	}else{
		cout<<0<<0<<0;
		return 0;
	}
	for(int i=0;i<3;i++){
		if(s1[l]==c[i]&&s2[l2]==c[i]||s2[l2]==c[i-1]||s2[l2]==c[i+1]){
			cout<<1;
			d=1;
			break;
		}
	}
	if(d!=1){
		for(int i=3;i<5;i++){
			if(s1[l]==c[i]&&s2[l2]==c[i]||s2[l2]==c[i-1]||s2[l2]==c[i+1]){
				cout<<1;
				d=1;
				break;
			}
		}
		
	}

	if(d!=1){
		cout<<0<<0;
		return 0;
	} 
	for(int i=0;i<=4;i++){
		if(s1[l]==c[i]&&s2[l2]==c[i-1]||s2[l2]==c[i+1]){
			cout<<1;
			return 0;
		}
	}
	cout<<0; 
	return 0;
}