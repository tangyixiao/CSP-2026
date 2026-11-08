#include<bits/stdc++.h>
using namespace std;
#define int long long
struct stu{
	int t;
	char k;
};
int same=0;
vector<stu> st;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int nk=n;
	int len=0;
	while(n--){
		int t;
		char a;
		cin>>t>>a;
		st.push_back({t,a});
		len+=t;
	}
	if(len%2==1){
		len++;
		len/=2;
		int sum=0;
		int seat;
		for(seat=0;sum<len;seat++){
			sum+=st[seat].t;
		}
		seat--;
		int tk=sum-len;
		int pre=st[seat].t-tk-1;
		int go=tk;
		vector<stu> ta;
		vector<stu> tb;
		for(int i=0;i<=seat-1;i++){
			ta.push_back({st[i].t,st[i].k});
		}
		if(pre!=0) ta.push_back({pre,st[seat].k});
		for(int i=nk-1;i>=seat+1;i--){
			tb.push_back({st[i].t,st[i].k});
		}
		if(go!=0) tb.push_back({go,st[seat].k});
		int len1=ta.size();
		int len2=tb.size();
		int i=0;
		int j=0;
		while(1){
			char f1=ta[i].k;
			char f2=tb[j].k;
			if(f1==f2){
				same+=min(ta[i].t,tb[j].t);
				if(ta[i].t>tb[j].t){
					ta[i].t-=tb[j].t;
					tb[j].t=0;
				}else if(ta[i].t<tb[j].t){
					tb[j].t-=ta[i].t;
					ta[i].t=0;
				}else{
					ta[i].t=0;
					tb[j].t=0;
				}
			}else{
				if(ta[i].t>tb[j].t){
					ta[i].t-=tb[j].t;
					tb[j].t=0;
				}else if(ta[i].t<tb[j].t){
					tb[j].t-=ta[i].t;
					ta[i].t=0;
				}else{
					ta[i].t=0;
					tb[j].t=0;
				}
			}
			if(i==len1-1&&j==len2-1&&ta[i].t==0&&tb[j].t==0) break;
			if(ta[i].t==0) i++;
			if(tb[j].t==0) j++;
		}
		same+=1;
	}else if(len%2==0){
		len/=2;
		int sum=0;
		int seat;
		for(seat=0;sum<len;seat++){
			sum+=st[seat].t;
		}
		seat--;
		int tk=sum-len;
		int pre=st[seat].t-tk;
		int go=tk;
		vector<stu> ta;
		vector<stu> tb;
		for(int i=0;i<=seat-1;i++){
			ta.push_back({st[i].t,st[i].k});
		}
		if(pre!=0) ta.push_back({pre,st[seat].k});
		for(int i=nk-1;i>=seat+1;i--){
			tb.push_back({st[i].t,st[i].k});
		}
		if(go!=0) tb.push_back({go,st[seat].k});
		int len1=ta.size();
		int len2=tb.size();
		int i=0;
		int j=0;
		while(1){
			char f1=ta[i].k;
			char f2=tb[j].k;
			if(f1==f2){
				same+=min(ta[i].t,tb[j].t);
				if(ta[i].t>tb[j].t){
					ta[i].t-=tb[j].t;
					tb[j].t=0;
				}else if(ta[i].t<tb[j].t){
					tb[j].t-=ta[i].t;
					ta[i].t=0;
				}else{
					ta[i].t=0;
					tb[j].t=0;
				}
			}else{
				if(ta[i].t>tb[j].t){
					ta[i].t-=tb[j].t;
					tb[j].t=0;
				}else if(ta[i].t<tb[j].t){
					tb[j].t-=ta[i].t;
					ta[i].t=0;
				}else{
					ta[i].t=0;
					tb[j].t=0;
				}
			}
			if(i==len1-1&&j==len2-1&&ta[i].t==0&&tb[j].t==0) break;
			if(ta[i].t==0) i++;
			if(tb[j].t==0) j++;
		}
	}
	cout<<len-same;
	return 0;
}
