#include <iostream>

using namespace std;

int gcd(int a, int b) { //유클리드 호제법
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solution(int A1, int B1, int A2, int B2) {
    int n = A1 * B2 + A2 * B1;
    int m = B1 * B2; //일단 더하고

    int gcdNum = gcd(n, m);

    n /= gcdNum;
    m /= gcdNum; // 최대공약수로 나눠서 기약분수 만들기

    cout << n << " " << m;
}

int main() {
    int A1, B1, A2, B2;
    cin >> A1 >> B1 >> A2 >> B2;

    solution(A1, B1, A2, B2);

    return 0;
}