#include<bits/stdc++.h>
using namespace std;

long long hwc(string s){
	long long cnt=0;
	for(long long i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-i]){
			cnt++;
		}
	}
	return cnt;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	long long n,m;
	char a;
	string s;
	cin>>n;
	bool flag=1;
	char aaa;
	for(int i=0;i<n;i++){
		cin>>m;
		cin>>a;
		if(i==0){
			aaa=a;
		}else{
			if(aaa!=a){
				flag=0;
			}
		}
		for(long long j=0;j<m;j++){
			s+=a;
		}
	}
	if(flag=1){
		cout<<0;
		return 0;
	}
	cout<<hwc(s);
	return 0;
} 
