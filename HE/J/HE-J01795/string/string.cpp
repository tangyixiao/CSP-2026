#include<bits/stdc++.h>
using namespace std;
string s[1000000];
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","r",stdout);
	int n,m,cnt,k=0;
	cin>>n>>m>>s;
	for(int i=0;i<=s.size();i++){
		s==s[i]*s[i+1];
	}	
	for(int i=0;i<s.size();i++){
		if(s[i]==s[s.size()-1]){
			return 1;
		}else{
			s[s.size()-1]=s[k];
			cnt++;
			k++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
