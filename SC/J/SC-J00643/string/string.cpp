#include<bits/stdc++.h>
using namespace std;
long long cnt,sum,tot;
string s,s1;
int n,x;
char c,b=' ';
bool flag=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		cin>>x>>c;
		if(b==' ') b=c;
		else if(!flag && c!=b) flag=1;
		for(int i=1;i<=x;i++){
			s+=c;
		}
	}
	if(!flag){
		cout<<"0";
		return 0;
	}
	tot=s.size(),cnt=tot/2;tot--;
	for(int i=0;i<cnt;i++){
		if(s[i]!=s[tot-i]){
			sum++;	
		}
	}
	cout<<sum;
	return 0;
}

