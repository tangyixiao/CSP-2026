#include<bits/stdc++.h>
using namespace std;
const int N=2e5+3;
//const int M=1e9+3;
int n,a[N],ans,l1,r1,d1,d2;
long long L;
char c[N];
queue<char> x,y;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	d1=1;
	d2=n;
	while(d2-d1>0){
		if(c[d1]!=c[d2]){
			ans+=min(a[d1],a[d2]);
		}
		int cha=a[d1]>a[d2]?a[d1]-a[d2]:a[d2]-a[d1];
		if(a[d1]>a[d2]){
			for(int i=1;i<=a[d1]-a[d2];i++){
				x.push(c[d1]);
			}
			d1++;
			d2--;
			continue;
		}
		if(a[d1]<a[d2]){
			for(int i=1;i<=a[d2]-a[d1];i++){
				y.push(c[d2]);
			}
			d1++;
			d2--;
			continue;
		}
		
	}
	if(d2-d1==0){
		if(!x.empty()){
			for(int i=1;i<=a[d1];i++){
				y.push(c[d1+1]);
			}
			while(!x.empty()&&!y.empty()){
				if(x.front()!=y.front()){
					ans++;
				}
				x.pop();
				y.pop();
			}
		}
		else{
			for(int i=1;i<=a[d1];i++){
				x.push(c[d1+1]);
			}
			while(!x.empty()&&!y.empty()){
				if(x.front()!=y.front()){
					ans++;
				}
				x.pop();
				y.pop();
			}
		}
	}
	cout<<ans;
	
	return 0;
}