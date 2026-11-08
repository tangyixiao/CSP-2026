#include<bits/stdc++.h>
using namespace std;
long long a,s,d[100005],ans;
int main(){
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>a>>s;
	for(int i=1;i<=a;i++){
		cin>>d[i];
	}
	for(int i=1;i<=a;i++){
		for(int j=1;j<i;j++){
			if(ans<(d[i]&d[j])){
				ans=(d[i]&d[j]);
			}
		}
	}
	cout<<ans;
}
