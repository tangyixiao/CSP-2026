#include <bits/stdc++.h>
using namespace std;
int n,ans;
string s;
int main(){
    freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
//预处理  ↓     
	for(int i=0;i<n;i++){
		int xum=0;
		cin >> xum;
		char axum;
		cin >> axum;
		for(int j=0;j<xum;j++){
			s+=axum;
		}
	}
//预处理↑
	int sl=s.size();
//单数个
	if(sl%2!=0){
		int mid=sl/2;
		int left=mid-1;
		int right=mid+1;
		for(int i=0;i<mid;i++){
			if(s[left--]!=s[right++]) ans++;
		}
	}
//双数
	else if(sl%2==0){
		int mid=sl/2;
		int right=mid;
		int left=mid-1;
		for(int i=0;i<mid;i++){
			if(s[left--]!=s[right++]) ans++;
		}
	}
	cout << ans;
	return 0;
}
