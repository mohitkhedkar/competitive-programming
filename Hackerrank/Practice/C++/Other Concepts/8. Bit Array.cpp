#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef unsigned long Num;
constexpr Num E = 31;
constexpr Num B = 1 << E;

Num A(Num a, Num P, Num Q)
{
    return (a*P + Q) % B;
}


Num popcount(Num x)
{
    int i, count = 0; Num mask = 1;

    for (i = 0; i < 32; ++i) {
        if (x & mask)
            ++count;

        mask <<= 1;
    }
    return count;
}

Num x_x(Num x)
{
    return x & (~x + 1);
}

Num PE(Num N, Num S, Num P, Num Q)
{
    if (S == 0 && S == 0)
        return 1;
    if (P == 0 && S != Q)
        return 2;

    Num d1 = (P - 1) * S + Q;
    Num numerator = E - popcount(x_x(d1) - 1);
    Num denominator = popcount(x_x(P) - 1);
    Num m = numerator / denominator + (numerator % denominator == 0 ? 1 : 2);
    return min(m, N);
}

Num PO(Num N, Num S, Num P, Num Q)
{
    if (S == 0 && Q == 0)
        return 1;
    if (P == 1)
        return Q == 0 ? 1 : min(N, B / x_x(Q));

    Num m = 1;
    Num d1 = (P - 1) * S + Q;
    Num p_to_m = P;
    Num mask = (B * x_x(P - 1) / x_x(d1)) - 1;

    while (m < N && (p_to_m & mask) != 1) {
        p_to_m = p_to_m * p_to_m;
        m = m * 2;
    }

    return min(m, N);
}

Num Count(Num N, Num S, Num P, Num Q)
{
    return (P % 2 == 0) ? PE(N, S, P, Q) : PO(N, S, P, Q);
}

Num Floyd(Num N, Num S, Num P, Num Q)
{
    Num a0 = S % B;
    Num m = 0, l = 1, k = 1;
    Num t = A(a0, P, Q), h = A(t, P, Q);

    while (t != h && ++k < N)
    {
        t = A(t, P, Q);
        h = A(A(h, P, Q), P, Q);
    }
    if (k == N)
        return N;

    t = a0;
    while (t != h)
    {
        t = A(t, P, Q);
        h = A(h, P, Q);
        ++m;
    }

    h = A(t, P, Q);
    while (t != h)
    {
        h = A(h, P, Q);
        ++l;
    }

    return m + l;
}

Num Brent(Num N, Num S, Num P, Num Q)
{
    Num a0 = S % B;
    Num m = 0, l = 1, p = 1;
    Num t = a0, h = A(a0, P, Q);

    while (t != h)
    {
        if (p == l)
        {
            t = h;
            p *= 2;
            l = 0;
        }
        h = A(h, P, Q);
        if (++l == N)
            return N;
    }

    t = h = a0;
    for (Num i = 0; i < l; ++i)
        h = A(h, P, Q);

    while (t != h)
    {
        t = A(t, P, Q);
        h = A(h, P, Q);
        ++m;
    }
    return m + l;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned long N, S, P, Q;
    cin >> N >> S >> P >> Q;

    cout << Count(N, S, P, Q);
    
    return 0;
}