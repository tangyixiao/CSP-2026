#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	string s;
	int sum=0;
	for(int i=1;i<=n;i++){
		char t;int len;
		cin>>len>>t;
		for(int j=1;j<=len;j++)s+=t;
		sum+=len;
	}
	int cnt_ans=0;
	if(sum%2==1){
		int mid=sum/2;
		for(int i=1;i<=mid;i++){
			if(s[mid-i]!=s[mid+i])cnt_ans++;
		}
		cout<<cnt_ans;
		return 0;
	}
	else{
		int mid=sum/2;
		for(int i=1;i<=mid;i++){
			if(s[mid-i]!=s[mid+i+1])cnt_ans++;
		}
		cout<<cnt_ans;
		return 0;
	}
	return 0;
}