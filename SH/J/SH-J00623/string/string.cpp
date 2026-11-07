#include<bits/stdc++.h>
using namespace std;
struct Node{
	long long a;
	char c;
}a[200005];
long long ans,nowfin,maxnl,maxnr,curl,curr,m,n;
//m:输入的个数   n:m个段的长度总和 
//ans:已经修改的个数(处理完后输出)
//nowfin:已经处理完的个数，无论是否修改
//maxnl:左侧当前连续段的末尾字符位置   curl:左侧当前段编号 
//maxnr:右侧当前连续段的末尾字符位置   curr:右侧当前段编号 
//每次处理时，选择末尾字符位置较小的一侧
//若左侧末尾小且字符不同，则ans+=maxnl-nowfin 
//当maxnl>=n/2&&maxnr>=n/2时，当前段为最后一段
//若两侧最后一段恰好在n/2位置交界，则可按普通段处理
//因此普通段循环在两侧都>n/2时退出 
//若最后一段的字符不同，则ans+=n/2-nowfin 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
//	freopen("debug.txt","w",stderr);
	cin>>m;
	for(int i=1;i<=m;++i){
		cin>>a[i].a>>a[i].c;
		n+=a[i].a;
	}
	curl=1;curr=m;
	maxnl=a[1].a;maxnr=a[m].a;
	while(maxnl<=n/2||maxnr<=n/2){
//		cerr<<"checking "<<curl<<" "<<curr<<endl;
//		cerr<<"left to "<<maxnl<<" right to "<<maxnr<<" already finish "<<nowfin<<endl; 
		if(maxnl==maxnr){
			if(a[curl].c!=a[curr].c)
				ans+=maxnl-nowfin;
			nowfin=maxnl;
			++curl;--curr;
			maxnl+=a[curl].a;
			maxnr+=a[curr].a;
//			cerr<<"same length ans="<<ans<<endl;
		}
		else if(maxnl<maxnr){
			if(a[curl].c!=a[curr].c)
				ans+=maxnl-nowfin;
			nowfin=maxnl;
			++curl;
			maxnl+=a[curl].a;
//			cerr<<"left small ans="<<ans<<endl;
		}
		else if(maxnl>maxnr){
			if(a[curl].c!=a[curr].c)
				ans+=maxnr-nowfin;
			nowfin=maxnr;
			--curr;
			maxnr+=a[curr].a;
//			cerr<<"right small ans="<<ans<<endl;
		}
	}
//	cerr<<"finish at "<<curl<<' '<<curr<<endl;
//	cerr<<"left to "<<maxnl<<" right to "<<maxnr<<" already finish "<<nowfin<<endl; 
//	cerr<<"before add ans="<<ans<<endl;
	if(a[curl].c!=a[curr].c)
		ans+=n/2-nowfin;
//	cerr<<"finish add ans="<<ans<<endl;
	cout<<ans;
	return 0;
}
