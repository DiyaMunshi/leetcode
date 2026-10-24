int climbStairs(int n) {
    if (n <= 3)
        return n;
    int t1 = 1, t2 = 2, t3 = 0;
    for (int i = 3; i <= n; i++) {
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }
    return t3;
}