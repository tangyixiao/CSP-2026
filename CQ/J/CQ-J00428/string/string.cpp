#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=1e6+5;
string hw;
ll n,ans=0,qp=0,pq=0,a[N],s1=0,s2,op=0,po=0,s3=0,s4=0;//qp,pq:双指针 s1,s2:当前的数 op,po:累计得数 ans:答案 
char p[N];
int main(){
	ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	s2=n+1;
	for(ll i=1;i<=n;i++){
		cin>>a[i]>>p[i];
		qp+=a[i];
	}
	if(n==1){
		cout<<0;
		return 0;
	}
	while(1){
		if(s2-1<1||s1+1>n){
			break;
		}
		if(s3==0&&s4==0){
			s1++;
			op+=a[s1];
			s3+=a[s1];
			s2--;
			po+=a[s2];
			s4+=a[s2];
			if(p[s1]!=p[s2]){
				if(s3>=s4){
					ans+=s4;
					s3-=s4;
					s4=0;
				}else{
					ans+=s3;
					s4-=s3;
					s3=0;
				}
			}
		}else if(s3==0){
			s1++;
			op+=a[s1];
			s3+=a[s1];
			if(p[s1]!=p[s2]){
				if(s3>=s4){
					ans+=s4;
					s3-=s4;
					s4=0;
				}else{
					ans+=s3;
					s4-=s3;
					s3=0;
				}
			}
		}else{
			s2--;
			po+=a[s2];
			s4+=a[s2];
			if(p[s1]!=p[s2]){
				if(s3>=s4){
					ans+=s4;
					s3-=s4;
					s4=0;
				}else{
					ans+=s3;
					s4-=s3;
					s3=0;
				}
			}
		}
	}
	cout<<ans/2;
	return 0;
}
