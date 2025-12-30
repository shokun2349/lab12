#include<iostream>
#include<ctime>
using namespace std;
#define ll long long
ll fibonacci(ll n);

int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}
ll fibonacci(ll n){
    if(n == 0) return 0;
    else if(n == 1) return 1;
    else return fibonacci(n-1) + fibonacci(n-2);
}