#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int t;
	cin>>t;
	pair<int,char> pic[200005];
	for(int i=1;i<=t;i++){
		int a;
		char c;
		cin>>a>>c;
		pic[i]={a,c};
	}
	int i=1,j=t,sum=0;
	while(1){
		int len1=pic[i].first;
		int len2=pic[j].first;
		char ch1=pic[i].second;
		char ch2=pic[j].second;
		if(ch1!=ch2){			
			sum+=min(len1,len2);
			if(len1<len2){
				i++,pic[j].first-=len1;
			}
			else if(len1>len2){
				j--,pic[i].first-=len2;
			}
			else{
				i++,j--;
			}
		}
		else{
			if(len1<len2){
				i++,pic[j].first-=len1;
			}
			else if(len1>len2){
				j--,pic[i].first-=len2;
			}
			else{
				i++,j--;
			}
		}
		
		if(i>=j)break;
	}
	cout<<sum;
	return 0;
}

