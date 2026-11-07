#include<bits/stdc++.h>
using namespace std;
#define ll long long
pair<ll,char>s[200005];
ll cnt;
ll n;
ll t1,len;
char t2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(0);
	cin>>n;
	for(ll i=0;i<n;i++) cin>>t1>>t2,s[i]={t1,t2},len+=t1;
	ll l=1,r=len;
	ll i=0,j=n-1;
	ll h=(len+1)/2;//half
	//直接双指针（笑
	//好珂朵莉的风味 
	for(;l<=len;){
		//cout<<l<<" "<<r<<" "<<i<<" "<<j<<" "<<cnt<<endl;//缩段没有问题  
		if(l>=len/2||r<=len/2) break;
		if(i==j) break;
		if(l+min(s[i].first,s[j].first)>=h||r-min(s[i].first,s[j].first)<=h){
			if(len%2==0) cnt++;//虚拟轴，懒得切分了所以特判断 
			if(s[i].first<s[j].first) i++;
			else if(s[i].first==s[j].first)i++,j--;
			else j--;
			if(s[i].second!=s[j].second)cnt+=min(h-l,r-h);
			//	cout<<min(h-l,r-h)<<endl;测试用 
				break;
			}//先判断是不是一步到位，一步到位就按照新的跑 
		if(s[i].second==s[j].second){
			if(l+min(s[i].first,s[j].first)>=h||r-min(s[i].first,s[j].first)<=h){
			//wrong:这都配上了还加啥 
				break;
			}
			l+=min(s[i].first,s[j].first),r-=min(s[i].first,s[j].first);
			if(s[i].first<s[j].first) s[j].first-=min(s[i].first,s[j].first),i++;
			else if(s[i].first==s[j].first)i++,j--;
			else s[i].first-=min(s[i].first,s[j].first),j--;
		}
		else{
			if(l+min(s[i].first,s[j].first)>=h||r-min(s[i].first,s[j].first)<=h){
				if(n%2==0) cnt++;//虚拟轴，懒得切分了所以特判断 
				cnt+=min(h-l,r-h);
			//	cout<<min(h-l,r-h)<<endl;测试用 
				break;
			}
			//cout<<i<<" "<<j<<endl;测试用 
			cnt+=min(s[i].first,s[j].first);
			l+=min(s[i].first,s[j].first),r-=min(s[i].first,s[j].first);
			if(s[i].first<s[j].first) s[j].first-=min(s[i].first,s[j].first),i++;
			else if(s[i].first==s[j].first)i++,j--;
			else s[i].first-=min(s[i].first,s[j].first),j--;
		}
	} //as well we correctly pass text 1-6!!!
	cout<<cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
