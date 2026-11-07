#include<bits/stdc++.h>
using namespace std;
vector<pair<long long,char>> chuan;
pair<long long,long long> getafter(pair<long long,long long> l){//位置+1 返回chuan下标+位置 
	long long xiabiao=l.first,weizhi=l.second;
	pair<long long,char> tmp=chuan[xiabiao];
	if(weizhi+1<=tmp.first) return make_pair(xiabiao,weizhi+1);
	return make_pair(xiabiao+1,1);
}
pair<long long,long long> getbefore(pair<long long,long long> l){//位置-1 返回chuan下标+位置 
	long long xiabiao=l.first,weizhi=l.second;
	pair<long long,char> tmp=chuan[xiabiao];
	if(weizhi-1>=1) return make_pair(xiabiao,weizhi-1);
	return make_pair(xiabiao-1,chuan[xiabiao-1].first);
}
char getthechar(long long xiabiao){
	return chuan[xiabiao].second;
}
pair<long long,long long> jumpbefore(pair<long long,long long> l,int jump){//位置-1 返回chuan下标+位置 
	long long xiabiao=l.first,weizhi=l.second;
	if(weizhi-jump>=1) return make_pair(xiabiao,weizhi-jump);
	xiabiao--;
	jump-=weizhi;
	weizhi=chuan[xiabiao].first;
	while(jump-chuan[xiabiao].first>=0){
		xiabiao--;
		jump-=weizhi;
		weizhi=chuan[xiabiao].first;
	}
	if(jump!=0) weizhi-=jump;
	return make_pair(xiabiao,weizhi);
}
pair<long long,long long> jumpafter(pair<long long,long long> l,int jump){//位置-1 返回chuan下标+位置 
	long long xiabiao=l.first,weizhi=l.second;
	if(weizhi+jump<=chuan[xiabiao].first) return make_pair(xiabiao,weizhi+jump);
	jump-=(chuan[xiabiao].first-weizhi);
	xiabiao++;
	weizhi=1;
	while(jump-chuan[xiabiao].first>=0){
//		cout<<"2";
		jump-=chuan[xiabiao].first;
		xiabiao++;
	}
	if(jump!=0) weizhi+=jump;
	return make_pair(xiabiao,weizhi);
}
long long solve(long long total,long long n){
	long long ans=0;
	pair<long long,long long> l={1,1},r={n,chuan[n].first};
	long long pl=1,pr=total;
	for(;pl<=total/2+1;){
		long long lc=getthechar(l.first),rc=getthechar(r.first);
		long long minn=min(chuan[l.first].first,chuan[r.first].first);
		if(lc!=rc) ans+=minn;
		l=jumpafter(l,minn);
		r=jumpbefore(r,minn);
//		cout<<"3";
		pl+=minn,pr-=minn;
//		l=getafter(l);
//		r=getbefore(r);
	}
	return ans;
}
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    long long n;
    cin>>n;
    long long cnt=0;
    for(long long i=1;i<=n;i++){
    	long long tmp;
    	char t;
    	cin>>tmp>>t;
    	chuan.push_back({tmp,t});
    	cnt+=1ULL*tmp;
	}
	if(n==1){
		cout<<0;
		return 0;
	}
	cout<<solve(cnt,n);
    return 0;
}
