#include<bits/stdc++.h>
using namespace std;
int n,m;
int k;
int a[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	for(int i=0;i<n;++i){
		cin>>a[i];
		v.push(a[i]); 
		if(v.end()==a[i]){
			v.pop(i-1);
			v.push(a[i]);
			for(int i=0;i<v.size();++i){
				v.pop();
				if(v.top()==a[i]){
					ans++;
				}
			}
		}
		cout<<ans;
	}
	
}
