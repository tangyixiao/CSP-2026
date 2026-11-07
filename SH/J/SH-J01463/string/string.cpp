#include <bits/stdc++.h>
using namespace std;
const int N=2*1e5+5;
bool vis[N][30],vis1[30];
long long ans;
string s,s1,word;
struct node{
	string str;
	int step;
};
queue <node> q;
bool check(string st){
	int len=st.size();
	for(int i=0,j=len-1;i<=j;i++,j--){
		if(st[i]!=st[j])return false;
	}
	return true;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a;
	char c;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d %c",&a,&c);
		for(int i=1;i<=a;i++)s+=c;
		if(!vis1[(int)(c-'a')])word+=c;
		vis1[(int)(c-'a')]=1;
	}
//	cout<<"s="<<s<<'\n';
	if(n==1){
		cout<<0;
	}else{
		q.push({s,0});
		while(!q.empty()){
			node f=q.front();
			q.pop();
			string st=f.str;
			int step=f.step;
			if(check(st)){
				ans=step;
			//	cout<<"ans="<<st<<' '<<step<<'\n';
				break; 
			}
			int len=word.size();
			for(int i=0;i<st.size();i++){
				string str=st;
				for(int j=0;j<len;j++){
					if(str[i]!=word[j]&&!vis[i][(int)(word[j]-'a')])str[i]=word[j];
					else continue;
				//	cout<<++k<<' '<<str<<'\n';
					vis[i][(int)(word[j]-'a')]=1;
					q.push({str,step+1});
					vis[i][(int)(word[j]-'a')]=0;
				}
			}
		}
		printf("%lld",ans);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
