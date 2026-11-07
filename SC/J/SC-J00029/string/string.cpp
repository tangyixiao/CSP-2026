#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long js=0;
	cin>>n;
	pair<int,char>s[n+1];
	for(int i=0;i<n;i++){
		int a;char b;
		cin>>a>>b;
		s[i].first=a;
		s[i].second=b;
		js+=a;
	}
	int sum=0,gs=0;
	int i=0,j=n-1;
	while(sum<=js/2){
		if(sum>=js/2)break;
		if(s[i].second!=s[j].second){
			if(sum+min(s[i].first,s[j].first) <=js/2){
				gs+=min(s[i].first,s[j].first);
				if(s[i].first==min(s[i].first,s[j].first)){
					s[j].first-=s[i].first;
					sum+=s[i].first;
					i++;
				}else{
					s[i].first-=s[j].first;
					sum+=s[j].first;
					j--;
				}
			}else{
				gs+=(js/2)-sum;
				sum=js/2;
				break;
			}
		}else{
			sum+=s[i].first;
			int id=s[i].first;
			while(1){
				if(id <s[j].second ){
					s[j].second-=id;
					id=0;
					break;
				}else{
					id-=s[j].second;
					j--;
				}
			}
			i++;
		}
	}
	cout<<gs;
	gs=0;
	i=0;
	j=0;
	js=0;
	sum=0;
	n=0;
	return 0;
}