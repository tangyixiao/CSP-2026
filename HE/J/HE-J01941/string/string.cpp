#include<bits/stdc++.h>
using namespace std;
int n;
long long a,ans;
char c;
string L;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			L+=c;
		}
	}
	if(L.size()%2==0){
		int x=(L.size()-1)/2;
		for(int i=1;i<=L.size()/2;i++){
			if(L[x-i+1]!=L[x+i]){
				ans++;
			}
		}
	}else{
		int x=(L.size()-1)/2;
		for(int i=1;i<=L.size()/2;i++){
			if(L[x-i]!=L[x+i]){
				ans++;
			}
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
