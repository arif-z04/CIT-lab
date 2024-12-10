#include <stdio.h>



int main()
{
    int n;
    scanf("%d", &n);
    int digit_sum = 0;
    for(int i = 0; i <= n; i++){
        int mod_n = n % 10;
        digit_sum = mod_n + digit_sum;
        n = n / 10;
    }
    printf("%d\n", digit_sum);
    return 0;
}
