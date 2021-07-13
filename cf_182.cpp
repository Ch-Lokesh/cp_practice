#include <iostream>
int main()
{
    long long t, a, b, c;
    std::cin >> t;
    while (t--)
    {
        std::cin >> a >> b >> c;
        std::cout << --c % a * b + c / a + 1 << '\n';
    }
}