#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5;
int n;
ll ans;
struct Node{
	int a;
	char c;
};
vector<Node> s;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		s.push_back((Node){a,c});
	} 
	int j=n-1;
	for(int i=0;i<n;i++){
		int len=s[i].a;
		while(s[j].a<=len&&i<j){
			len-=s[j].a;
			if(s[j].c!=s[i].c){
				ans+=s[j].a;
			}
			j--;
		}
		if(j==i){
			break;
		}
		if(len>0){
			s[j].a-=len;
			if(s[j].c!=s[i].c){
				ans+=len;
			}
		}
	}
	cout<<ans;
	return 0;
} 
