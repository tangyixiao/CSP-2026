#include<bits/stdc++.h>
using namespace std;
struct data{
	int num;
	char word;
}s[100005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long ans=0;
	int n;
	cin>>n;
	int l=0,r=n-1;
	for(int i=0;i<n;i++){
		cin>>s[i].num>>s[i].word;
	}
	while(l<=r){
		if(s[l].word==s[r].word){
			if(s[l].num>s[r].num){
				s[l].num-=s[r].num;
				s[r].num=0;
				r--;
			}
			else if(s[l].num==s[r].num ){
				s[l].num=0;
				s[r].num=0;
				r--;
				l++;
			}
			else{
				s[r].num-=s[l].num;
				s[l].num=0;
				l++;
			}
		}
		else{
			if(s[l].num>s[r].num){
				ans+=s[r].num;
				s[l].num-=s[r].num;
				s[r].num=0;
				r--;
			}
			else if(s[l].num==s[r].num ){
				ans+=s[r].num;
				s[l].num=0;
				s[r].num=0;
				r--;
				l++;
			}
			else{
				ans+=s[l].num;
				s[r].num-=s[l].num;
				s[l].num=0;
				l++;
			}
		}
	}
	cout<<ans;
	return 0;
}