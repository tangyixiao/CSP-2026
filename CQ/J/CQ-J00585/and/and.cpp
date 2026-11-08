#include<bits/stdc++.h>

using namespace std;

int n,m;
int a[200005];

bool cmp(int x,int y){
	return x>y;
}
bool book[200005];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	for(int wei = 30;wei>=0;wei--){
		int x = (1<<wei),cnt = 0;
		for(int i = 0;i<n;i++){
			if(book[i]){continue;}
			if(a[i]-x==(a[i]^x)){
				cnt++;
			}
		}
		if(cnt>=m){
			for(int i = 0;i<n;i++){
				if(book[i]){continue;}
				if(a[i]-x!=(a[i]^x)){
					book[i] = true;
				}
			}
		}
	}
	int ans = (1<<30)-1;
	for(int i = 0;i<n;i++){
		if(!book[i]){
			ans&=a[i];
		}
	}
	cout<<ans<<endl;
	return 0;
}
//ypy is so cute 
