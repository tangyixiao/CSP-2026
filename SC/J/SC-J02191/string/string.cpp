#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+5;
int n, ans=0;
struct part{
	int a;
	char c;
} each[N];
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		scanf("%d", &each[i].a);
		cin>>each[i].c;
	}
	int l=1, r=n;
	while(l<r){
		int minue=min(each[l].a, each[r].a);
		if(each[l].c!=each[r].c) ans+=minue;
		each[l].a-=minue; each[r].a-=minue;
		if(!each[l].a) l++;
		if(!each[r].a) r--;
	}
	printf("%d", ans);
	return 0;
}