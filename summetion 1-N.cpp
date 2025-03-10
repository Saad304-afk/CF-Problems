/*clude<iostream>
using namespace std;

int main (){
float sum=0,N;
cin>>N;
for(int i=1;i<=N;i++){
sum=sum+i;}
cout<<sum<<endl;

}*/
/*
#include<iostream>
using namespace std;
int main (){
int n,sum=0;
cin>> n;
for (int i=1; i<=n;i++){
sum+=i;
}
cout<<sum<<endl;
return 0;
}
*/
#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long sum = (N * (N + 1)) / 2;  // O(1) computation
    cout << sum << endl;

    return 0;
}






