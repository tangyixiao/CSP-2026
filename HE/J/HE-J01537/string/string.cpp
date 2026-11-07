#include<bits/stdc++.h>//未完成大样例 
using namespace std;

long long n,num[200000],ans=0,j=0;
char ch[200000];
string s1,s2;


string hw(string s3){
	string s4="";
	for(int i=0;i<s3.size();i++){
		s4+=s3[s3.size()-1-i];
	}
	return s4;
}


main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)cin>>num[i]>>ch[i];
	for(int i=0;i<n;i++)for(;num[i];j++){
		s1+=ch[i];
		num[i]--;
	}
	
	
	for(int i=s1.size()-1;i>=0;i--)s2+=s1[i];
	for(int i=0;i<s1.size()-1;i++){
		if(s1[i]!=s2[i]){
			s2[i]=s1[i];
			ans++;
			//cout<<s2<<' '<<hw(s2)<<endl;
			if(s2==hw(s2))break;
		}
	}
	
	cout<<ans;
	return 0;
}
