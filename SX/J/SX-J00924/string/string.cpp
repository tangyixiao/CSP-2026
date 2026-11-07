#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
struct node{
	int a;
	char c;
}nd[N],l[N],r[N],tmpl,tmpr;
deque<node>lq,rq;

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	scanf("%lld",&n);
	int idx=0;
	int L=0;
	for(int i=1;i<=n;i++){
		scanf("%lld",&nd[++idx].a);
		L+=nd[idx].a;
		cin>>nd[idx].c;
		if(nd[idx].c==nd[idx-1].c){ // 这里应该是出题人给挖的坑，会有很多人因此TLE
			nd[idx-1].a+=nd[idx].a;
			idx--;
		}
	}
	// 现在要做的就是把给定的字符串切割成两半
	// 然后看两半中不一样的字符数即可

	// 更加精细化地，现在要找出中间的字符在哪里
	int pos=-1,sumnow=0,lst;
	// 可能需要奇偶分情况讨论
	// 则对于奇数，仅需看除了最中间那个字母的即可
	bool flag=0;
	if(L%2==1){
		L--;
		flag=1;
	}
	int idxl=0;
	for(int i=1;i<=n;i++){
		sumnow+=nd[i].a;
		if(sumnow>=L/2){
			l[++idxl].a=L/2-(sumnow-nd[i].a);
			l[idxl].c=nd[i].c;
			break;
		}
		l[++idxl].a=nd[i].a;
		l[idxl].c=nd[i].c;
	}
	int idxr=0;
	sumnow=0;
	for(int i=n;i>=1;i--){
		sumnow+=nd[i].a;
		if(sumnow>=L/2){
			r[++idxr].a=L/2-(sumnow-nd[i].a);
			r[idxr].c=nd[i].c;
			break;
		}
		r[++idxr].a=nd[i].a;
		r[idxr].c=nd[i].c;
	}
	// OKOK，非常棒，现在已经写完了切分的代码，接下来思考怎么实现判断
	// 先奖励自己吃一块巧克力~~~
	// 虽然不知道双指针是啥，但想到了一个很类似于双指针的写法
//	for(int i=1;i<=idxl;i++){
//		cout<<l[i].a<<' '<<l[i].c<<endl;
//	}
//	cout<<endl;
//	for(int i=1;i<=idxr;i++){
//		cout<<r[i].a<<' '<<r[i].c<<endl;
//	}
    // 如果范围小点应该很好实现的。。。
    // 对于到现在为止的较小者，看和较大者的不同就好了嘛。。
    int lpos=1,rpos=1;
    int lsum=0,rsum=0;
    int ans=0;
    while(lpos<=idxl||rpos<=idxr){
    	if(lpos<=idxl) lq.push_back({l[lpos].a,l[lpos].c});
    	if(rpos<=idxr) rq.push_back({r[rpos].a,r[rpos].c});
		// 此时，只要配对即可
		// 它们前面的位数肯定相等咯
		while(!(lq.empty())&&!(rq.empty())){
			tmpl=lq.front();
			tmpr=rq.front();
        	lq.pop_front();
        	rq.pop_front();
//        	cout<<tmpl.a<<' '<<tmpl.c<<endl;
//        	cout<<tmpr.a<<' '<<tmpr.c<<endl;
        	if(tmpl.c==tmpr.c){ // 本身就是符合回文条件的
        		if(tmpl.a==tmpr.a){
        			continue; // 无事发生，平安夜
				}else if(tmpl.a<tmpr.a){ // tmpr.a大
					rq.push_front({tmpr.a-tmpl.a,tmpr.c});
				}else{ // tmpl.a大
					lq.push_front({tmpl.a-tmpr.a,tmpl.c});
				}
			}else{ // 答案要开始变大咯~
				if(tmpl.a==tmpr.a){
					ans+=tmpl.a;
        			continue;
				}else if(tmpl.a<tmpr.a){ // tmpr.a大
					rq.push_front({tmpr.a-tmpl.a,tmpr.c});
					ans+=tmpl.a;
				}else{ // tmpl.a大
					lq.push_front({tmpl.a-tmpr.a,tmpl.c});
					ans+=tmpr.a;
				}
			}
		}
		lpos++;rpos++;
	}
//	while(!lq.empty()){
//		tmpr=lq.front();
//		cout<<tmpr.a<<' '<<tmpr.c<<endl;
//		lq.pop_front();
//	}
	cout<<ans<<endl;
	// 大样例全过！！！！！加鸡腿~~~
	return 0;
}
/*
5
3 a
4 b
5 c
6 d
7 e
*/