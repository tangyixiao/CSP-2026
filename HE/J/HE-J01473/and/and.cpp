#include <bits/stdc++.h>

using namespace std;

struct node {
	int data, idx;
};

int n, m;
int a[200005];
node b[200005];

int get_1(int x){
	int ans = 0;
	while (x > 0) {
		if (x & 1 == 1) ans ++;
		x >>= 1;
	}
	return ans;
}

void sift_down(int start, int end) {
	int parent = start;
	int child = parent * 2;
	while (child <= end) {
		if (child + 1 <= end && b[child + 1].data > b[child].data) child ++;
		if (b[parent].data >= b[child].data) return;
		else {
			swap(b[parent], b[child]);
			parent = child;
			child = parent * 2;
		}
	}
}

void heap_sort() {
	for (int i = n / 2; i >= 1; i--) sift_down(i, n);
	for (int i = n; i > 1; i--) {
		swap(b[i], b[1]);
		sift_down(1, i - 1);
	}
}

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[i].data = get_1(a[i]);
		b[i].idx = i;
	}
	heap_sort();
//	for (int i = 1; i <= n; i++) {
//		cout << b[i].data << ' ';
//	}
//	cout << endl;
	cout << a[b[n - m + 1].idx];
	fclose(stdin);
	fclose(stdout);
	return 0;
}
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int n, m;
//int a[200005];
//int b[200005][25];
//
//void sift_down(int arr[], int start, int end) {
//	int parent = start;
//	int child = parent * 2;
//	while (child <= end) {
//		if (child + 1 <= end && arr[child + 1] > arr[child]) child ++;
//		if (arr[parent] >= arr[child]) return;
//		else {
//			swap(arr[parent], arr[child]);
//			parent = child;
//			child = parent * 2;
//		}
//	}
//}
//
//void heap_sort(int arr[], int len) {
//	for (int i = len / 2; i >= 1; i--) sift_down(arr, i, len);
//	for (int i = len; i > 1; i--) {
//		swap(arr[i], arr[1]);
//		sift_down(arr, 1, i - 1);
//	}
//}
//
//void get_b(int x, int r) {
//	int cnt = 0;
//	while (x > 0) {
//		if (x & 1 == 1){
//			b[0][cnt] ++;
//			b[r][cnt] = 1;
//		}
//		x >>= 1;
//		cnt ++;
//	}
//}
//
//int main()
//{
//	freopen("and3.in", "r", stdin);
//	freopen("and.out", "w", stdout);
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//	}
//	heap_sort(a, n);
//	for (int i = 1; i <= n; i++) {
//		get_b(a[i], i);
//	}
//	for (int i = 20; i >= 0; i--) {
//		cout << b[0][i] << ' ';
//	}
//	cout << endl;
//	for (int i = 1; i <= n; i++) {
//		cout << a[i] << ' ';
//		for (int j = 20; j >= 0; j--) {
//			cout << b[i][j];
//		}
//		cout << endl;
//	}
//	int idx = 20, maxn = -1;
//	for (int i = 20; i >= 0; i--) {
//		if (b[0][i] >= m) {
//			maxn = b[0][i];
//			idx = i;
//			break;
//		}
//	}
//	int cnt = 0;
//	cout << maxn << endl;
//	for (int i = n; i >= 1; i--) {
//		if (b[i][idx] == 1) {
//			cnt ++;
//		}
//		if (cnt == m) {
//			idx = i;
//			break;
//		}
//	}
//	cout << a[n - idx + 1];
//	fclose(stdin);
//	fclose(stdout);
//	return 0;
//}
