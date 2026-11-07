#include<bits/stdc++.h>
#define int long long
using namespace std;
struct node{
	char a;
	int num;
}np[400000];
int cnt=0;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,len=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>np[i].num>>np[i].a;
	}
	int l=1;
	int r=n;
	while(l!=r){
		if(np[l].a!=np[r].a){
			cnt+=min(np[l].num,np[r].num);
		}
		//cout<<l<<' '<<r<<endl;
		if(np[l].num!=np[r].num){
			if(np[l].num>np[r].num){
				np[l].num-=np[r].num;
				r--;
				continue;
			}
			else{
				np[r].num-=np[l].num;
				l++;
				continue;
			}
		}
		if(l==r-1){
			break;
		}
		l++;
		r--;
	}
	cout<<cnt<<endl;
	return 0;
}
