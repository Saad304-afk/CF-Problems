/*#include <iostream>
using namespace std;

int main()
{
    int x;

    cin>>x;
    for(int i=0;i<=x;i++)
        cout<<i;
}*/
#include <iostream>
#include <set>
using namespace std;

int main()
{
    int x;
    cin >> x;

    set<int> dv;
    for (int i = 0; i < x; ++i) {
        int p;
        cin >> p;
        dv.insert(p);
    }

    cout << dv.size() << endl;

    return 0;
}
