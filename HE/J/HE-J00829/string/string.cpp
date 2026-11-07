#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
char c[N];
long long sum,s[N],a[N],n,cnt,tag;
vector<pair<int,char> >a1,a2; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%lld %c",&a[i],&c[i]);
		s[i]=s[i-1]+a[i];
	}
	sum=s[n];
	bool f=true;
	for(int i=1;i<=n&&f;i++){
		if(s[i]<=sum/2){
			a1.push_back({a[i],c[i]});
			if(s[i]==sum/2){
				if(sum%2){
					a[i+1]--;
				}
				tag=i+1;
				f=false;
			}
		}
		else{
			f=false;	
			tag=i;
			a1.push_back({a[i]-s[i]+(sum/2),c[i]});
			a[i]-=a[i]-s[i]+(sum/2);
			if(sum%2){a[i]--;}
		}
	}
	for(int i=n;i>=tag;i--){
		a2.push_back({a[i],c[i]});
	}
	int i=0,j=0;
	do{
		int &x=a1[i].first;
		int &y=a2[j].first;	
		char c1=a1[i].second;
		char c2=a2[j].second;
		if(c1!=c2)cnt+=min(x,y);
		if(x>y){
			x-=y;
			y=0;
			j++;
		} 
		else if(x<y){
			y-=x;
			x=0;
			i++;
		} 
		else{
			i++;
			j++;
		}
	}while(i<a1.size());
	cout<<cnt;
	return 0;
}
