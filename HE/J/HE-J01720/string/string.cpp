#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e5+10;
string s;
int a,flag=0;
char b;
char l,r;
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		cin>>a>>b;
		for(int j=0;j<a;j++){
			s+=b;
		}
	}
	if((s.size()-1)%2==0){
		for(int i=s.size()-1;i>=s.size()/2;i--){
			r=s[i];
			l=s[flag];
			if(l!=r)ans++;
			flag++;
			//cout<<r<<" "<<l<<" "; 
		}
	}
	else{
		for(int i=s.size()-1;i>=s.size()/2;i--){
			r=s[i];
			l=s[flag];
			if(l!=r)ans++;
			flag++;
			//cout<<r<<" "<<l<<" "; 
		}
	} 
	cout<<ans;
	return 0;
} 
