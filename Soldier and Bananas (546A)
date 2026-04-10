#include <iostream>

using namespace std;

int main() {
    long long k, n, w;
    cin >> k >> n >> w;

    long long result = 0;
    
    // حلقة لحساب السعر الإجمالي للموزات
    for (int i = 1; i <= w; i++) {
        result += i * k;
    }

    // إذا كان السعر أكبر من اللي معه، بيطرح، وإلا بيطبع 0
    if (result > n) {
        cout << result - n << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
