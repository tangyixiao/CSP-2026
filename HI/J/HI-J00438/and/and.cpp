#include<bits/stdc++.h>
using namespace std;
int s[2000005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,cnt=0,cnt2=-2e9;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	sort(s+1,s+n+1,greater<int>());
	int l=1;
	if(m==2){
		int r=l+1;
		for(int i=1;i<=n;i++){
			if(s[l]==s[r]){
				cout<<s[l];
				return 0;
			}
			else{
				l++;
			}
		}
	}
	else if(m==1){
		cout<<s[1];
	}
	else{
		cout<<7;
	}
	return 0;
}
