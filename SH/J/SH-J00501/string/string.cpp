#include<cstdio>
#include<iostream>
using namespace std;
struct blk{
	char c;
	long long len;
}blks[300000];
int cblk;
int n;
long long cnt;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 1;i <= n;i++){
		char c;
		long long l;
		cin>>l>>c;
		if(c==blks[cblk].c){
			blks[cblk].len+=l;
		}else{
			blks[++cblk]={c,l};
		}
	}
	int curl = 1,curr = cblk;
	long long lenl = 0,lenr = 0;
	long long last = 0;
	while(curl<n||curr>0){
		if(curl>=n||(curr>0&&lenl+blks[curl].len>=lenr+blks[curr].len)){
			lenr+=blks[curr].len;
			cnt += (lenr-last)*(blks[curr].c!=blks[curl].c);
			last = lenr;
			--curr;
		}else{
			lenl+=blks[curl].len;
			cnt += (lenl-last)*(blks[curl].c!=blks[curr].c);
			last = lenl;
			++curl;
		}
	}
	cout<<cnt/2<<'\n';
	return 0;
}
