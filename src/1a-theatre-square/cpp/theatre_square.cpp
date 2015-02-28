/*
 * @file theatre_square.cpp
 * @author Akagi201
 * @date 2015/02/28
 *
 * http://codeforces.com/problemset/problem/1/A
 */

#include <cstdio>

using namespace std;

int main(void) {

    long long m = 0;
    long long n = 0;
    long long a = 0;

    scanf("%I64d%I64d%I64d", &n, &m, &a);
    printf("%I64d\n", ((m + a - 1) / a) * ((n + a - 1) / a));
    return 0;
}
