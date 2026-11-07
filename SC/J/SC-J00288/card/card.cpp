#include <bits/stdc++.h>
freopen("card.in",r,stdin);
freopen("card.out",w,stdout);

using namespace std;
int n,m,c[500],a[500],b[300];
deque<int> q;
int main(){
	cin>>n>>m;
	int r=0;
	for(int i=1;i<=n;i++)cin>>c[i];
	
	for(int o=0;o<n;o++){
		for(int k=1;k<=m;k++)a[k]=0;
	for(int i=1;i+o<=n;i++){
		
		if(a[c[i+o]]>=1){
		
		while(q.back()!=c[i+o]){
		
			a[q.back()]--;
			q.pop_back();
		}}
		else {
		
		q.push_back(c[i+o]);
		a[c[i+o]]++;
	}
	
	}
	
	while(q.size()){
	
	q.pop_back();
	}
	
	for(int j=1;j<=m;j++)if(a[j]==1)b[j]++;
	
	}
	
	for(int j=1;j<=m;j++)cout<<b[j]<<" ";
	
	
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}