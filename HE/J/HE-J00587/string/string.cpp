#include<bits/stdc++.h>
using namespace std;
long long int n,a[100005],ans;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		string c;
		cin>>a[i]>>c;
		for(int j=0;j<a[i];j++){
			s=s+c;
		}
	}
	int mid=s.size()/2;
	int k=0;
	for(int i=s.size()-1;i>=mid;i--){
		if(s[i]!=s[k]){
			ans++;
		}
		k++;
	}
	cout<<ans;
};
