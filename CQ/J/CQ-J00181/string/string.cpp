#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//freopen("string.in","r",stdin);
    //freopen("string.out","w",stdout);
	string s,s1;
	long long n,x;
	cin>>n;
	char c;
	for(int i=1;i<=n;i++){
		cin>>x>>c;
		for(int i=1;i<=x;i++){
			s+=c;
		}
	}
	for(int i=s.size()-1;i>=0;i--) s1+=s[i];
	long long sum=0;
	for(int i=0;i<(s.size()+1)/2;i++){
		if(s[i]!=s1[i]){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}

