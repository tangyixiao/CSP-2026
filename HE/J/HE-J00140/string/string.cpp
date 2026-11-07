#include<bits/stdc++.h>
using namespace std;
char c;
string s;
long long n,a,cnt,siz,mid;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	cin>>n;
	while(n--){
		cin>>a>>c;
		while(a--){
			s+=c;
		}
	}
	siz=s.size(),mid=s.size()/2;
	for(int i=0;i<mid;i++){
		if(s[i]!=s[siz-i-1]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
