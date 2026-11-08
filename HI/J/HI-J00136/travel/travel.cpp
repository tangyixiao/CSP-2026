#include<bits/stdc++.h>
using namespace std;
bool o,l;
string s;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,a1;
	string b,b1;
	cin>>a>>a1>>b>>b1;
	int sum=0,cnt=0;
	for(int i=0;i<a.size();i++){
		sum+=a[i];
	}
	for(int i=0;i<b.size();i++){
		cnt+=b[i];
	}
	if(sum==cnt){
		s[0]='1';
		o=1;
	}
	else{
		o=0;
	}
	if(o==0){
		s[0]='0';
		s[1]='0';
		s[2]='0';
		s[3]='0';
		cout<<s[0]<<s[1]<<s[2]<<s[3];
		return 0;
	}
	sum=0;
	cnt=0;
	for(int i=0;i<a1.size();i++){
		if(a1[i]=='0'||a1[i]=='1'||a1[i]=='2'||a1[i]=='3'||a1[i]=='4'||a1[i]=='5'||a1[i]=='6'||a1[i]=='7'||a1[i]=='8'||a1[i]=='9'){
			sum+=a1[i];
		}
	}
	for(int i=0;i<b1.size();i++){
		if(b1[i]=='0'||b1[i]=='1'||b1[i]=='2'||b1[i]=='3'||b1[i]=='4'||b1[i]=='5'||b1[i]=='6'||b1[i]=='7'||b1[i]=='8'||b1[i]=='9'){
			cnt+=b1[i];
		}
	}
	if(sum==cnt){
		s[1]='1';
	}
	else{
		s[1]='0';
	}
		if(sum==cnt&&a1[2]<='C'&&b1[2]<='C'||sum==cnt&&a1[2]>='D'&&b1[2]>='D'){
			s[2]='1';
			l=1;
		}
		else{
			s[2]='0';
			s[3]='0';
			cout<<s[0]<<s[1]<<s[2]<<s[3];
			return 0;
		}
		if(sum==cnt&&a1[2]-b1[2]==1&&l==1||sum==cnt&&b1[2]-a1[2]==1&&l==1){
			s[3]='1';
		}
		else{
			s[3]='0';
		}
		cout<<s[0]<<s[1]<<s[2]<<s[3];
	return 0;
}
