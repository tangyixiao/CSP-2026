#include<bits/stdc++.h>
using namespace std;
long long n,a,ans=0;
string s;
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	int l=0;
	while(n--){
		cin >> a >> c;
		l+=a;
		while(a--){
			s.push_back(c);
		}
	}
	string x=s;
	reverse(s.begin(),s.end());
	if(x==s){
		cout << 0;
	}else{
		int mid=l/2;
		int j=mid;
		for(int i=0;i<mid;i++){
			if(x[i]!=x[j]&&j<=l){
				ans++;
			}
			j++;
		}
		cout << ans;
	}
	return 0;
}
