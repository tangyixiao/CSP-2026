#include <bits/stdc++.h>
using namespace std;
long long a[200050];
char c[200050];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s = "";
	for (int i = 1;i<=n;i++){
		cin>>a[i]>>c[i];
		for (int j = 1;j<=a[i];j++){
			s+=c[i];
		}
	}
	//cout<<s<<endl;
	//n=5 i=2 j=4
	//n=6 i=3 j=4
	long long ss = s.size();
	long long ans = 0;
	if (ss%2 == 1){
		for (long long i = 1;i < ss/2+1;i++){
			for (long long j = ss-1;j > ss/2+1;j--){
				if (s[i] != s[j]){
					ans++;
					//cout<<s[i]<<" "<<s[j]<<endl;
				}
			}
		}
	}else{
		for (long long i = 1;i<=ss/2;i++){
			for (long long j = ss-1;j>=ss/2+1;j--){
				if (s[i] != s[j]){
					ans++;
					//cout<<s[i]<<" "<<s[j]<<endl;
				}
			}
		} 
	} 
	cout<<ans;
	
}
