#include<bits/stdc++.h>
using namespace std;
int main(){
	freoprn('card','r',in);
	freopen('card','w',out);
	struck<int>s;
	int n,m,ans=0,a[300005];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	a=s;
	for(int i=1;i<=n;i++){
		if(a[i]==a[i+1]){
			s.pop();
			a.pop(i+1);
		}
	}
	return 0;
}
