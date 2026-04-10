#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;

    // x / 5 بيعطينا عدد الخطوات الكاملة (كل خطوة بطول 5)
    int m = x / 5;
    // x % 5 بيعطينا المسافة المتبقية إذا كان في باقي
    int n = x % 5;

    if (n > 0) {
        // إذا في باقي، بنحتاج خطوة إضافية وحدة بس (مهما كان طول الباقي)
        cout << m + 1 << endl;
    } else {
        // إذا ما في باقي، عدد الخطوات هو m تماماً
        cout << m << endl;
    }

    return 0;
}
