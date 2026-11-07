#include<bits/stdc++.h>
using namespace std;

const int N=2e5+5;
int n;
char c;
string s1,s2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		long long a;
		cin>>a;
		cin>>c;
		while(a--){
			s1+=c;
		}
	}
	int slen=s1.size();
	for(int i=slen-1;i>=0;i--){
		s2+=s1[i];
	}
	int cnt=0;
	int slen1=slen/2;
	for(int i=0;i<=slen1;i++){
		if(s1[i]!=s2[i]){
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
