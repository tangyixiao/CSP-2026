#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
int n;
struct Node{
	int x;
	char c;
}a[N];
ll sum=0;
ll ans=0;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].c;
		sum+=a[i].x;
	}
	int i=1,j=n;
	while(i<=j){
		if(a[i].c==a[j].c){
			if(a[i].x==a[j].x){
				i++,j--;
				continue;
			}
			else{
				if(a[i].x>a[j].x){
					a[i].x-=a[j].x;
					j--;
					continue;
				}
				else{
					a[j].x-=a[i].x;
					i++;
					continue;
				}
			}
		}
		if(a[i].x>a[j].x){
				a[i].x-=a[j].x;
				ans+=a[j].x;
				j--;
				continue;
			}
			else{
				a[j].x-=a[i].x;
				ans+=a[i].x;
				i++;
				continue;
			}
	}
	cout<<ans;
	return 0;
}