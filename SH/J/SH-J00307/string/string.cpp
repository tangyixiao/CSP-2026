#include<bits/stdc++.h>
using namespace std;
struct node{
	long long a;
	char ch;
}m[200010];
int n;
long long cnt=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m[i].a>>m[i].ch;
	}
	int l=1,r=n;
	while(l<r){
		if(m[l].ch!=m[r].ch){
			cnt+=min(m[l].a,m[r].a);
			if(m[l].a>m[r].a){
				m[l].a-=m[r].a;
				r--;
			}
			else if(m[l].a<m[r].a){
				m[r].a-=m[l].a;
				l++;
			}
			else{
				r--;l++;
			}
		}
	}
	cout<<cnt;
	return 0;
} 
