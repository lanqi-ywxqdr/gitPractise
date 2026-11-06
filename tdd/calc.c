#include <stdio.h>
#include <limits.h>

typedef long long ll;
typedef unsigned long long ull;

int add(int a, int b) {
    ll tmp = 1ll*a + 1ll*b;
    if (tmp > INT_MAX) tmp = INT_MAX;
    if (tmp < INT_MIN) tmp = INT_MIN;
    return (int)tmp;
}

int sub(int a, int b) {
    ll tmp = 1ll*a - 1ll*b;
    if (tmp > INT_MAX) tmp = INT_MAX;
    if (tmp < INT_MIN) tmp = INT_MIN;
    return (int)tmp;
}
