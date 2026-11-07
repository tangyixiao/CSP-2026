#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,mid;
int cnt1,cnt2;
string s,s2;
signed main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		char a;
		cin>>x>>a;
		for(int j=1;j<=x;j++){
			s+=a;
			s2+=a;
		}
	}
	//cout<<s<<endl<<s2<<endl;
	int k=s.length();
	if(k%2==1){
		mid=(k+1)/2;
	}
	else{
		mid=k/2;
	}
	for(int i=0;i<mid;i++){
		if(s[i]==s[k-i-1]){
			continue;
		}
		s[i]=s[k-i-1];
		//cout<<s[i]<<" "<<s[k-i+1]<<" "<<cnt1<<endl;
		//cout<<i<<" "<<cnt1<<endl;
		cnt1++;
	}
	//cout<<endl;
	for(int i=0;i<mid;i++){
		if(s2[k-i-1]==s2[i]){
			continue; 
		}
		s2[k-i-1]=s2[i];
		//cout<<s2[k-i+1]<<" "<<s2[i]<<" "<<cnt2<<endl;
		//cout<<i<<" "<<cnt2<<endl;
		cnt2++;
	}
	cout<<min(cnt1,cnt2);
	return 0;
}
