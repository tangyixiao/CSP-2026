#include <bits/stdc++.h>
using namespace std;
int n;
long long sum=0;
long long cnt[200005],ans;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int n;string x;
		cin>>n>>x;
		for(int j=1;j<=n;j++){
			s+=x;
		}
	}
	if(s.size()%2==0){
		for(int i=0,j=s.size()-1;i<s.size()/2;i++,j--){
			if(s[i]!=s[j]){
				sum++;
			}
		}
	}
	else{
		for(int i=0,j=s.size()-1;i<s.size()/2;i++,j--){
			if(s[i]!=s[j]){
				sum++;
			}
		}
	}
	cout << sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
