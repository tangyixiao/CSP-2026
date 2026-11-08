#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char b[200005];
long long Q(string r,string s){
	int c=s.size()/2;
	int cnt=0;
	for(int i=0;i<c;i++){
		if(r[i]!=s[i]){
			cnt++;
		}
	}
	return cnt;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s; 
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		for(int j=1;j<=a[i];j++){
			s+=b[i];
		}
	}
	string r=s;
	reverse(s.begin(),s.end());
	if(r==s){
		cout<<0;
	}
	else{
		cout<<Q(r,s);
	}
	return 0;
} 
