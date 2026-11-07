#include<bits/stdc++.h>
using namespace std;
struct sb{
	int js=0;
	int id=0;
};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	deque<int>s,k;
	sb sj[m+1];
	int a[n];
	int sp[m+1]={0};
	for(int i=0;i<n;i++)cin>>a[i];
	int b=0;
	int afd=n;
	while(afd--){
		while(s.size()>0)s.pop_back();
		for(int i=b;i<n;i++)s.push_back(a[i]);
		b++;
		while(s.size()>0){
		    sj[s[0]].js++;
			if(sj[s[0]].js>1){
			    while(k.size()>=sj[s[0]].id){
			    	sj[k[0]].js=0;
			    	sj[k[0]].id=0;
				    k.pop_back();
				}
			    sj[s[0]].js=1; 
			}
			if(sj[s[0]].js==1){
			    sj[s[0]].id=(k.size()+1);
			}
			k.push_back(s[0]);
			s.pop_front();
		}
		
		for(int i=0;i<k.size();i++){
			if(k[i]==b+1)sp[i]++;
		}
		while(k.size()>0)k.pop_back();
		for(int i=0;i<m+1;i++){
			sj[i].id=0;
			sj[i].js=0;
		}
	}
    for(int i=0;i<m;i++)cout<<sp[i]<<' ';
	return 0;
}