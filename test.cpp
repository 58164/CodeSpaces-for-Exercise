#include <bits/stdc++.h>

// #define DEBUG

using u32 = unsigned;
using i64 = long long;
using u64 = unsigned long long;

constexpr int inf32 = 1E9 + 7;
constexpr i64 inf64 = 1E18 + 7;

void solve() {
    std::cout << "ICPC exercise" << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

#ifdef DEBUG
    int START = clock();
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    int t = 1;
    // std::cin >> t;

    while (t --) {
        solve();
    }
#ifdef DEBUG
    std::cerr << "run-time: " << clock() - START << '\n';
#endif
    return 0;
}