#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long l=0;
	vector<pair<int,char> > a(n);
	for(int i=0;i<n;i++){
		cin>>a[i].first>>a[i].second;
		l+=a[i].first;
	}
	vector<pair<int,char> > b=a;
	reverse(b.begin(),b.end());
	long long ans=0,t=0;
	
	for(int i=0,j=0;t<l/2;){
		if(a[i].first>b[j].first){
			t+=b[j].first;
			a[i].first-=b[j].first;
			if(a[i].second!=b[j].second){
				ans+=b[j].first;
			}
			j++;
		}else if(a[i].first<b[j].first){
			t+=a[i].first;
			b[j].first-=a[i].first;
			if(a[i].second!=b[j].second){
				ans+=a[i].first;
			}
			i++;
		}else if(a[i].first==b[j].first){
			t+=a[i].first;
			if(a[i].second!=b[j].second){
				ans+=a[i].first;
			}
			i++;
			j++;
			
		}
	}
	cout<<ans;
}