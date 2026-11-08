#include<bits/stdc++.h>
using namespace std;
long long cnt=0;
int rev(string s){
	bool flag=true;
	long long n=s.size();
	string v;
	for(int i=n-1;i>=0;i--){
		v+=s[i];
	}
	for(int i=0;i<n;i++){
		if(v[i]!=s[i]){
			flag=false;
		}
	}
	if(flag==false){
		return 0;
	}
	if(flag==true){
		return 1;
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int tmp;
	string a,s;
	for(int i=1;i<=n;i++){
		cin>>tmp;
		cin>>a;
		for(int j=1;j<=tmp;j++){
			s+=a;
		}
	}
	if(rev(s)==1){
		cout<<0;
		return 0;
	}
	else{
		long long n=s.size();
		string v;
		for(int i=n-1;i>=0;i--){
			v+=s[i];
		}
		for(int i=0;i<n;i++){
			if(v[i]!=s[i]){
				cnt++;
			}
		}
		cout<<cnt/2;
		return 0;
	}
	return 0;
} 
