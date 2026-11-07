#include<bits/stdc++.h>
using namespace std;
int huiwen(string a){
	string rea;
	int p=0;
	for(int i=a.size()-1;i>=0;i--){
		rea[p]=a[i];
		p++;
	}
	int c=0;
	for(int i=0;i<a.size();i++){
		if(a[i]==rea[i]){
			c++;
		}
	}
	if(c==a.size()){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	long long t;
	cin>>t;
	long long cnt=0;
	for(long long i=1;i<=t;i++){
		long long x;
		cin>>x;
		char a;
		cin>>a;
		for(int i=1;i<=x;i++){
			s+=a;
		}
	}
	long long wei=s.size();
	if(huiwen(s)==1){
		cout<<0;
		return 0;
	}
	if(wei%2!=0){
		string cmp1,cmp2;
		for(int i=0;i<wei/2;i++){
			cmp1+=s[i];
		}
		for(int i=wei/2+1;i<wei;i++){
			cmp2+=s[i];
		}
		for(int i=0;i<cmp1.size();i++){
			if(cmp1[i]!=cmp1[0]){
				
				cmp1[i]=cmp1[0];
				cnt++;
			}
		}
		for(int i=0;i<=cmp1.size();i++){
			if(cmp1[i]!=cmp2[i]){
				cnt++;
			}
		}
		cout<<cnt;
		return 0;
	}
	cnt=0;

	if(wei%2==0){
		string cmp3,cmp4;
		for(int i=0;i<wei/2-1;i++){
			cmp3+=s[i];
		}
		for(int i=wei/2+1;i<wei;i++){
			cmp4+=s[i];
		}
		if(s[wei/2]!=s[wei/2-1]){
			cnt+=1;
		}
		for(int i=1;i<cmp3.size();i++){
			if(cmp3[i]!=cmp3[0]){
				cmp3[i]=cmp3[0];
				cnt++;
			}
		}
		for(int i=0;i<=cmp3.size();i++){
			if(cmp3[i]!=cmp4[i]){
				cnt++;
			}
		}
		cout<<cnt;
		return 0;
	}
	return 0;
}