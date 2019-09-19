#include <stdio.h>
#include <cs50.h>

int main(void) {
    long isbn = get_long("ISBN: ");
    int final = isbn % 10;
    isbn = (isbn - final) / 10;
    int sum = 0;
    for (int x = 9; x > 0; x--) {
        int digit = isbn % 10;
        sum += (digit * x);
        isbn = (isbn - digit) / 10;
    }
    int check = sum % 11;
    if (check == final) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
