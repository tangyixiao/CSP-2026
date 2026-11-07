#include<bits/stdc++.h>
using namespace std;
int w[20000];
int s[20000];
int a[20000];
bool z[20000];
int bj(int start,int end) {
	for(int i=start; i<=end-1; i++)
		z[i]=true;
	return 0;
}

int main(void) {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1; i<=n; i++)
		cin>>s[i];//读入
	for(int i=1; i<=n; i++) {
		for(int j=i; j<=n; j++) {
			if(w[s[j]]==0||z[w[s[j]]]==true) {
				w[s[j]]=j;
			} else if(s[j]==s[w[s[j]]]&&w[s[j]]!=0&&z[w[s[j]]]!=true&&w[s[j]]!=j)
				bj(w[s[j]],j);
		}
		for(int k=i; k<=n; k++) {
			if(z[k]!=true)
				a[s[k]]++;
		}
		for(int i=1; i<=n; i++)
			z[i]=false;
		for(int i=1; i<=m; i++)
			w[i]=0;
	}
	for(int i=1; i<=m; i++)
		cout<<a[i]<<" ";
	fclose(stdin);
	fclose(stdout);
	return 0;
}