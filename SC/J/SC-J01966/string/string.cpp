#include<bits/stdc++.h>
using namespace std;
int n;
int a[100005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string text1,text2;
	
	cin>>n;
	for(int i=0;i<n;i++){
		char s;
		cin>>a[i]>>s;
		for(int j=1;j<=a[i];j++){
			text1+=s;
		}
	}
	
	for(int i=text1.size()-1;i>=0;i--){
		text2+=text1[i];
	}
	int ans;
	for(int i=0;i<text1.size()/2;i++){
		if(text1[i]!=text2[i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}