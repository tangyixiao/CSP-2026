#include<bits/stdc++.h>
using namespace std;
int n,m;,a[200005];
bool cmp(int x,int y){
	return x+y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(,,cmp);
	for(int i=0;i<n;i++){
		m--;
		if(m>0){
			for(int j=0;j<n;i++){
				m--;
			}
		}
	}
	return 0;
}

