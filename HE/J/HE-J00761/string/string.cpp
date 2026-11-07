#include<bits/stdc++.h>
using namespace std;
struct node{
	long long x;
	string y;
}lis[200100];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>lis[i].x>>lis[i].y;
	}
	int m=n;
	long long cnt=0;
	for(int i=1;i<=n;i++){
		if(lis[i].x==lis[m].x&&lis[i].y==lis[m].y){
			m--;
		}
		else{
			if(lis[i].x!=lis[m].x&&lis[i].y!=lis[m].y){
				cnt+=abs(lis[i].x-lis[m].x);
				m--;
			}
			else if(lis[i].y!=lis[m].y&&lis[i].x==lis[m].x){
				cnt+=lis[i].x;
				m--;
			}
			else{
				cnt+=abs(lis[i].x-lis[m].x);
				m--;
			}
		}
	}
	cout<<cnt;
	return 0;
}
