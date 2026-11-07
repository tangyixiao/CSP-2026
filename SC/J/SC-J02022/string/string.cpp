#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,a[N],cnt;
char c[N];
string s1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	if(n==1){
		cout<<0;
		return 0;
	}else if(n==2){
		if(c[1]==c[2]){
			cout<<0;
		}else{
			cout<<min(a[1],a[2]);
		}
		return 0;
	}else{
		for(int i=1;i<=n;i++){
			for(int j=1;j<=a[i];j++){
				s1+=c[i];
			}
		}
		int len=s1.size(),mid=ceil(1.0*len/2);
		s1=" "+s1;
		for(int i=1;i<mid;i++){
			if(s1[i]!=s1[len-i]) cnt++;
		}
		cout<<cnt;
	}
	return 0;
}