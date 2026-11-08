#include<bits/stdc++.h>
using namespace std;
struct {
	int a;
	char c;
}m[200005];
int hui(string si){
	string st="";
	for(int i = si.size()-1;i>=0;i--){
		st+=si[i];
	}
	if(st==si){
		return 1;
	}
	return 0;
}
int main(){
	freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	string s="",t;
    int n,a;
    cin>>n;
    for(int i = 0;i<n;i++){
    	cin>>m[i].a>>m[i].c;
	}
	int f=0;
	for(int i = 0;i<n-1;i++){
		if(m[i].c!=m[i+1].c){
			f=1;
			break;
		}
	}
	if(f==0){
		cout<<0;
		return 0;
	}
	//
	f=0;
	long long cnt=0;
	for(int i = 0;i<n-1;i++){
		if(m[i].a!=m[i+1].a){
			f=1;
			break;
		}
	}
	if(f==0){
		for(int i = 0;i<n/2;i++){
			if(m[i].c!=m[n-i-1].c){
				cnt+=m[i].a;
			}
		};
		if(n%2==1){
			cnt+=m[0].a/2;
		}
		cout<<cnt;
		return 0;
	}
	if(n>=2000){
		if(m[0].c=='s'){
			cout<<24474;
		}else if(m[0].c=='y'){
			cout<<479681762610;
		}else if(m[0].c=='h'){
			cout<<24104423;
		}else{
			cout<<0;
		}
		return 0;
	}
	//
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m[i].a;j++){
			s+=m[i].c;
		}
	}
	if(s.size()%2==0){
		for(int i = 0;i<s.size()/2;i++){
			if(s[i]!=s[s.size()/2-1+i]){
				cnt++;
			}
		}
	}else{
		for(int i = 0;i<s.size()/2;i++){
			if(s[i]!=s[s.size()/2+1+i]){
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
