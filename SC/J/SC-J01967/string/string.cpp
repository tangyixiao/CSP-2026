#include<bits/stdc++.h>
using namespace std;
int n;
string s;
bool pd(string x){
	string a;
	int xb=x.size()-1;
	while(xb<0){
		a+=x[xb];
		xb--;
	}
	return x==a; 
}
void cf(string x){
	int cd=x.size();
	int cnt=0;
	string l,r;
	if(cd%2==0){
		for(int i=0;i<cd/2;i++){
			l+=x[i];
		}
		for(int i=cd/2;i<cd;i++){
			r+=x[i];
		}
		for(int i=0;i<cd/2;i++){
			if(l[i]!=r[i]) cnt++;
		}
	}
	else{
		for(int i=0;i<cd/2;i++){
			l+=x[i];
		}
		for(int i=cd/2+1;i<cd;i++){
			r+=x[i];
		}
		for(int i=0;i<cd/2;i++){
			if(l[i]!=r[i]) cnt++;
		}
	}
	cout<<cnt;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","W",stdout);
	cin>>n;
	while(n--){
		int a;
		char c;
		cin>>a>>c;
		for(int i=1;i<=a;i++){
			s+=c;
		}
	}
	int ans=0;
	if(pd(s)) cout<<"0";
	else cf(s);
    return 0;
}