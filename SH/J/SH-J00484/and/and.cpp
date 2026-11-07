#include<bits/stdc++.h>
using namespace std;
string to_(int a){
	string s;
	int j=0;
	for(int i=0;i<31;i++)s=s+'0';
	for(int i=2;a>0;i*=2){
		if(a%i==0){
			s[j]='0';
		}
		else{
			s[j]='1';
			a=a-i/2;
		}
		j++;
	}
	return s;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n,m,ans=0;
	vector<int> a(n+1,0);
	vector<string> s;
	vector<bool> b(n+1,0);
	vector<bool> ou(n+1,0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		s.push_back(to_(a[i]));
	}
	for(int i=30;i>=0;i--){
		int sum=0;
		for(int j=0;j<n;j++){
			if(ou[j])continue;
			if(s[j][i]=='1'){
				sum++;
				b[j]=1;
			}
		}
		if(sum>=m){
			for(int j=0;j<n;j++){
				if(!b[j])ou[j]=1;
			}
			ans+=pow(2,i);
		}
		b=vector<bool>(n+1,0);
	}
	cout<<ans;
	return 0;
}
