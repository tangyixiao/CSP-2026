#include<bits/stdc++.h>
using namespace std;
string s;
string ans;
string st; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int sum=0;
	int cnt=0;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		sum+=a;
		string c;
		cin>>c;
		
		for(int j=0;j<a;j++){
			s+=c;
		}
	}
	for(int i=0;i<sum/2;i++){
		ans+=s[i];
	}
	if(sum%2==0){
		st=ans+ans;
	}
	else{
		st=ans+s[sum/2]+ans;
	}
	for(int i=0;i<st.size();i++){
		if(s[i]!=st[i]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}    
