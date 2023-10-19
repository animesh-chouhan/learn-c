#include <stdio.h>
#include <math.h>

int main()
{
    int a = 21;
    printf("%d\n", a);
    printf("%lu\n", sizeof(a));
    // int n_bits_a = sizeof(a) * 8;
    // long int possible_val_a = pow(2, n_bits_a);
    // int max_a = pow(2, n_bits_a - 1) - 1;
    // int min_a = -(max_a + 1);
    // printf("%ld\n", possible_val_a);
    // printf("%d, ", min_a);
    // printf("%d\n", max_a);

    long int b = 33;
    printf("%ld\n", b);
    printf("%lu\n", sizeof(b));
    // int n_bits_b = sizeof(b) * 8;
    // double possible_val_b = pow(2, n_bits_b);
    // double max_b = pow(2, n_bits_b - 1) - 1;
    // double min_b = -(max_b + 1);
    // printf("%f\n", possible_val_b);
    // printf("%f, ", min_b);
    // printf("%f\n", max_b);

    char c = 'a';
    printf("%c\n", c);
    printf("%d\n", c);
    printf("%lu\n", sizeof(c));
    printf("%c\n", c + ('A' - 'a'));

    long double d = 45.026f;
    printf("%Lf\n", d);
    printf("%lu\n", sizeof(d));

    return 0;
}