#include <iostream>
using namespace std;


int ami(int a1, int b1) {
    while(b1) {
        int temp = a1 % b1;
        a1 = b1;
        b1 = temp;
    }
    return a1;
}


int tumi(int a1, int b1) {
    return (a1 / ami(a1, b1)) * b1;
}

int main() {
    int n1, m1, z1;
    cin >> n1 >> m1 >> z1;

    int l = tumi(n1, m1);
    int count = z1 / l;

    cout << count << endl;

    return 0;
}
