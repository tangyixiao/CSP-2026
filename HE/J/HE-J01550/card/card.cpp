#include<bits/stdc++.h>
using namespace std;
int n,m,Card[500010];
int nuM[300010],Ifcut[300010];//,Ifnum[300010];
queue<int> q;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>Card[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			q.push(Card[j]);
			Ifcut[Card[j]]++;
			if(Ifcut[Card[j]]==2){
				Ifcut[Card[j]]=1;
				for(int k=1;k<q.size();k++){
					
					if(q.front()==Card[j]){
						q.pop();
						while(q.front()!=Card[j]){
							q.pop();
						}
					}
					q.push(q.front());
					q.pop();
					
				}
			}
			
		}
		for(int j=1;j<=q.size();j++){
			nuM[q.front()]++;
			q.push(q.front());
			q.pop();
		}
	}	
	nuM[1]++;
	for(int j=1;j<=m;j++){
		cout<<nuM[j]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
