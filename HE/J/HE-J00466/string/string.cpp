#include<bits/stdc++.h>
using namespace std;

const int MAXN=2e5+5;
char ch[MAXN];
int arr[MAXN];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> arr[i] >> ch[i];
	}
	
	int a=0,b=n-1;
	int la=arr[0],lb=arr[n-1];
	long long ans=0;
	while(a<b){
		if(la<=lb){
			if(ch[a]!=ch[b]){
				ans+=la;
			}
			lb-=la;
			la=arr[++a];
		}else{
			if(ch[a]!=ch[b]){
				ans+=lb;
			}
			la-=lb;
			lb=arr[--b];
		}
	}
	
	cout << ans;
	
	return 0;
}
