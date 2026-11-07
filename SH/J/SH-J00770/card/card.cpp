#include <bits/stdc++.h>
using namespace std;
int n,m;
const int N=5e5+7;
int st[N];
queue <int>q;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		cin >> st[i];
//		queue tmp;
		int tmp=q.size();
		if (i==1) q.push(st[i]);
		queue <int> t;
		while (tmp){
			
			if (q.front()==st[i]){
				while (!t.empty()){
					t.pop();
				}
				q.pop();
			}
			else {
				t.push(q.front());
				q.pop();
			}
			tmp--;
		}
		while (!t.empty()){
			q.push (t.front());
			t.pop();
		}
		q.push(st[i]);
	}
//	while (!q.empty()){
//			cout << q.front() << " ";
//			q.pop();
//		}
//		cout << endl;
	for (int i=1;i<=m;i++){
//		queue tmp;
		for (int j=i;j<=n;j++){
			int tmp=q.size();
			queue<int>t;
			while (tmp){
//				queue <int> t;
				if (q.front()==j){
					while (!t.empty()){
						t.pop();
					}
				}
				else {
					t.push(q.front());
					q.pop();
				}
				tmp--;
			}
			while (!t.empty()){
				q.push (t.front());
				t.pop();
			}
//			q.push(st[i]);
			q.push(j);
		}
//		while (!q.empty()){
//			cout << q.front() << " ";
//			q.pop();
//		}
//		cout << endl;
	}
	while (!q.empty()){
		cout << q.front() << " ";
		q.pop();
	}
	return 0; 
} 








//yangshuangyinigedogkengwonitamabushibulaikaoma??
