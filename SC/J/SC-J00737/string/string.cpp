#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
ll a,l;
char c;
string s[200005];
ll d[200005],p[30];
set <char> m;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a>>c;
		d[i]=a,s[i]=c;
		p[(int)c-96]+=a;
		m.insert(c);
	}
	if (m.size()==1){
		cout<<0;
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	for(int i=1;i<=26;i++){
		if (p[i]!=0)
			l++;
	}
	ll maxn=-1,num;
	int x=0;
	l-=m.size();
	if(l!=m.size()){
		for (int i=1;i<=n;i++){
			if(l==0)
				break;
			if(d[i]==0)
				continue;
			for (int j=i;j<=n;j++){
				if(s[i]==s[j]){
					l--;
					p[i]+=d[j];
					d[j]=0; 
				}
			}
		}
	}
	for (int i=1;i<=26;i++){
		num+=p[i];
		if (p[i]>maxn)
			maxn=p[i],x=i;
	}
	num-=maxn;
	cout<<min(maxn,num);
	fclose(stdin);
	fclose(stdout);
	return 0;
}