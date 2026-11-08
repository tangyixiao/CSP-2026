#include<bits/stdc++.h>
using namespace std;
string S;
bool Find(string a){
	string c="";
	int l=a.size()-1;
	while(l>=0){
		c=c+a[l];
		l--;
	}
	if(c==a){
		return true;
	} 
	else{
		return false;
	}
}
int main(){
	freopen("string.in","w",stdin);
	freopen("string.out","r",stdout);
	int n;
	int a;
	string b;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		for(int i=1;i<=a;i++){
			S+=b;
		}
	}
	long long Long=S.size();
	long long cnt=0;
	if(Find(S)){
		cout<<0;
		return 0;
	}
	for(int i=0;i<Long;i++){
		if(Find(S)){
			cout<<cnt;
			break;
		} 
		else{
			if(S[i]!=S[Long-i]&&Long%2==0){
				S[i]=S[Long-i];
				cnt++;
			} 
			else if(S[i]!=S[Long-i]&&Long%2+1!=i){
				S[i]=S[Long-i];
				cnt++;
			}
			else continue;
		} 
	}
	if(Long&2==0) cout<<cnt;
	else cout<<cnt-1;
	return 0;
} 
