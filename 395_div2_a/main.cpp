// http://codeforces.com/contest/764

// #include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <map>
#include <cstdio>
#include <cstdlib>
#include <cassert>

using namespace std;

#define REP(i,n) for((i)=0;(i)<(int)(n);(i)++)
#define CHECK(x) if (!(x)) { assert(x); abort(); }

typedef long long ll;


int main() {
    int n, m, z;
    int count = 0;

    CHECK(scanf("%d %d %d", &n, &m, &z) == 3);

    for (int i = 1; i <= z; ++i) {
        if (((i % n) == 0) && ((i % m) == 0))
            count++;
    }

    printf("%d\n", count);
}
