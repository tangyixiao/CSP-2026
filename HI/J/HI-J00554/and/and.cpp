#include<bits/stdc++.h>
using namespace std;
int a[200005],b[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n=0,m=0,MAX=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			int c=a[i];
			b[c]++;
		}
		for(int i=1;i<=200005;i++){
			if(b[i]>=2&&i>MAX){
				MAX=i;
			}
		}
	}
	cout<<MAX;
	return 0;
}
