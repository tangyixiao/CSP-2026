#include<bits/stdc++.h>
using namespace std;
string S;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int l,cnt=0;
	cin>>l;
	for(int i=0;i<l;++i){
		int m;
		char c;
		cin>>m>>c;
		for(int j=0;j<m;++j){
			S+=c;
		}
	}
	int len=(S.size()%2==0?S.size()/2:S.size()/2+1);
	for(int i=0;i<len;++i){
		char a=S[i],b=S[S.size()-i-1];
		if(a!=b)++cnt;
	}
	cout<<cnt;
	return 0;
}
