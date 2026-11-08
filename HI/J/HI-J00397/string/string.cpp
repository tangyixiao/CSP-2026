#include<bits/stdc++.h>
using namespace std;
string all="";
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++){
    	int a;
    	char c;
    	cin>>a>>c;
    	for(int j=1;j<=a;j++) all+=c;
	}
	for(int i=0;i<=all.size()/2;i++){
		int l=all.size()-1;
		if(all[l-i]!=all[i]) ans++;
	}
	cout<<ans;
    return 0;
}
