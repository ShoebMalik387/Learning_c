#include <stdio.h>

int main() {

    int n, r, q, s, x;

    s = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    x = n;

    do {
        q = n / 10;
        r = n % 10;
        s = s * 10 + r;
        n = q;
    }
    while (n != 0);

    if (x == s)
        printf("No is Palindrome");
    else
        printf("No is not Palindrome");

    return 0;
}