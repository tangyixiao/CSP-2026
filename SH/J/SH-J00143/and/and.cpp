#include <stdio.h>
template<typename _Tp> struct vector {
    _Tp data[200001];
    int size;
    vector(): size(0) {}
    inline void push_back(_Tp x) noexcept {
        data[size++] = x;
    }
    inline _Tp& operator[](int x) noexcept {
        return data[x];
    }
};
unsigned int a[200001];
int main(void) {
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; ++i) scanf("%u", &a[i]);
    unsigned int mask;
    vector<unsigned int> *now = new vector<unsigned int>, *next = new vector<unsigned int>, *swap;
    for (int i = 0; i < n; ++i) now->push_back(a[i]);
    for (int x = 29; x >= 0; --x) {
        mask = 1u << x;
        for (int i = 0; i < now->size; ++i) {
            if ((*now)[i] & mask) {
                next->push_back((*now)[i]);
            }
        }
        if (next->size >= m) {
            swap = now;
            now = next;
            next = swap;
        }
        next->size = 0;
    }
    unsigned int ans = (1 << 30) - 1;
    for (int i = 0; i < m; ++i) {
        ans &= (*now)[i];
    }
    printf("%u\n", ans);
    return 0;
}