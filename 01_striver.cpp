#include<bits/stdc++.h>
using namespace std;
namespace harsh
{
    int val = 50;
    int getval(){
        return val*10;
    }
} // namespace harsh
// its like u have created ur own std
int main(){
    double val = 10.0;
    cout<< val <<endl;
    cout<<harsh::getval()<<endl;
}