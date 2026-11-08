#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	vector<pair<int,char>> s(n+1);
	for(int i=1;i<=n;i++)
		cin>>s[i].first>>s[i].second;
	
	int i=1,j=n;
	long long cnt=0;
	while(i<j){
		if(s[i].second!=s[j].second){
			if(s[i].first>s[j].first){
				cnt+=s[i].first-s[j].first;
				s[i].first-=s[j].first;
				j--;
			}
			else if(s[i].first<s[j].first){
				cnt+=s[j].first-s[i].first;
				s[j].first-=s[i].first;
				i++;
			}
			else{
				cnt+=s[i].first;
				s[i].first-=s[j].first;
				s[j].first-=s[i].first;
				i++;
				j--;
			}
		}
		else{
			i++;j--;
		}
	}
	cout<<cnt;
	return 0;
 } 
