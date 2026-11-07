#include<bits/stdc++.h>
#define LL long long
using namespace std;
const LL N = 2e5 + 10;
struct Node{
	LL num;
	char sym;
}str[N];
LL n, sum = 0, tot = 0, pos1, pos2, ans = 0;
stack<Node> st1, st2;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	cin >> n;
	for(LL i = 1; i <= n; i++){
		cin >> str[i].num >> str[i].sym;
		sum += str[i].num;
	}
	for(LL i = 1; i <= n; i++){
		if(tot + str[i].num <= sum / 2)
			tot += str[i].num;
		else{
			pos1 = i;
			pos2 = sum / 2 - tot;
			if(sum % 2)	pos2++;
			break;
		}
	}
	for(LL i = pos1; i; i--){
		if(i == pos1){
			if(pos2 > 1)
				st1.push((Node){pos2, str[i].sym});
			continue;
		}
		else
			st1.push(str[i]);
	}
	for(LL i = pos1; i <= n; i++){
		if(i == pos1)
			st2.push((Node){str[i].num - pos2, str[i].sym});
		else
			st2.push(str[i]);
	}
//	while(!st1.empty()){
//		cout << st1.top().num << ' ' << st1.top().sym << '\n';
//		st1.pop();
//	}
//	cout << '\n';
//	while(!st2.empty()){
//		cout << st2.top().num << ' ' << st2.top().sym << '\n';
//		st2.pop();
//	}
	while(!st1.empty() && !st2.empty()){
		if(st1.top().sym != st2.top().sym)	ans += min(st1.top().num, st2.top().num);
		if(st1.top().num > st2.top().num){
			Node nxt = (Node){st1.top().num - st2.top().num, st1.top().sym};
			st1.pop(), st2.pop(), st1.push(nxt);
		}
		else if(st1.top().num < st2.top().num){
			Node nxt = (Node){st2.top().num - st1.top().num, st2.top().sym};
			st1.pop(), st2.pop(), st2.push(nxt);
		}
		else	st1.pop(), st2.pop();
	}
	cout << ans << '\n';
	return 0;
}
