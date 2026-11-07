#include<bits/stdc++.h>
using namespace std;
struct Seg{
	char c;
	int l;
}all[200010];
vector<Seg> a,b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;string s;long long cnt=0,l=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>all[i].l>>all[i].c;
		l+=all[i].l;
	}
	long long cur=0;
	for(int i=1;i<=n;i++){
		if(cur+all[i].l<=l/2)a.push_back(all[i]);
		else if(cur>l/2)b.push_back(all[i]);
		else{
			if(l/2-cur)a.push_back({all[i].c,l/2-cur});
			b.push_back({all[i].c,cur+all[i].l-(l+1)/2});
		}
		cur+=all[i].l;
	}
	reverse(b.begin(),b.end());
	for(int i=0,j=0;i<a.size()&&j<b.size();){
		if(a[i].l<b[j].l){
			if(a[i].c!=b[j].c)cnt+=a[i].l;
			b[j].l-=a[i].l;
			i++;
		}else if(a[i].l>b[j].l){
			if(a[i].c!=b[j].c)cnt+=b[j].l;
			a[i].l-=b[j].l;
			j++;
		}else{
			if(a[i].c!=b[j].c)cnt+=a[i].l;
			i++;j++;
		}
	}
	cout<<cnt;
	return 0; 
}
