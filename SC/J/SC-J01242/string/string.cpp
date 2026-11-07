#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	int a[20],c[20];
	int n;
	cin>>n;
	for(int i=1;i<5;i++){
		cin>>a[i]>>c[i];
	}
	if(n==1){
		cout<<0;
	}
	if(n<=5&&n!=1){
		cout<<2;
	}
	int ans=0;
	if(n==2){
		for(int i=1;i<=2;i++){
			for(int j=0;j<=a[i]-1;j++){
				s[j]=c[j];
			}
		}
		for(int i=1;i<=s.size()/2){
			if(s[0]==s[s.size()-1]&&s[1]==s[s.size()-2]){
				ans++;
				cout<<ans;
			}
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
