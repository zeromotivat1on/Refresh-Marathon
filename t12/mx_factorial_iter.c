int mx_factorial_iter(int n){
    if(n < 0 || n > 12) return 0;
    int fact = 1;
    for (int i = 1; i <= n; ++i) fact *= i;
    return fact;
}
