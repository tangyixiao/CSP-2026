#include<bits/stdc++.h>
using namespace std;
struct num{
	long long a;
	char c;
}b[200005];
int n;
long long s=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b[i].a>>b[i].c;
	}
	int l=1,r=n;
	while(l<r){
		if(b[l].c!=b[r].c){
			s+=min(b[l].a,b[r].a);
		}
		if(b[l].a<b[r].a){
			b[r].a-=b[l].a;
			l++;
		}else if(b[l].a>b[r].a){
			b[l].a-=b[r].a;
			r--;
		}else{
			l++;
			r--;
		}
	}
	cout<<s;
	return 0;
}
/*
3
2 a
2 b
1 c
*/