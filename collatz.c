int collatz_length(int n)
{
    int steps = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        steps++;
    }
    return steps;
}

int main(void)
{
    int n = 12;
    int result = collatz_length(n);
    return 0;
}
