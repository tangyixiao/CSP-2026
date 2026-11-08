#include<bits/stdc++.h>
using namespace std;
int n;
long long a;
long long len=1;
long long j,k;
bool f;
char b;
long long ans;
struct l{
	long long left;
	long long right;
	char c;
} line[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		line[i].left=len;
		len+=a;
		line[i].right=len-1;
		line[i].c=b;
	}
	j=1;
	k=n;
	while(!f||j+1<=k){
		if(line[j].right>=len/2){
			f=1;
		}
		if(line[k].left<=len/2){
			f=1;
		}
		if(line[j].c!=line[k].c){
			ans+=min(len-line[k].left,line[j].right)-max(len-line[k].right,line[j].left)+1;
		}
		if(len-line[k].right<=line[j].right&&len-line[k].left>=line[j].right){
			if(!f||line[j].right<=len/2) j++;
		}
		else{
			if(!f||line[k].left>=len/2) k--;
		}
	}
	cout<<ans;
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
