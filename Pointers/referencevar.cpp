#include<iostream>
using namespace std;
void update1(int n)
{
    n++;
}
void update2(int& n)
{
    n++;
}
//bad practice
//ans & num are local
int& update3(int a)
{
    int num=a;
    int& ans=num;
    return ans;
}
int main()
{
    /*
    int i=5;
    // create a ref variable
    int& j=i;

    cout <<i<< endl;
    i++;
    cout <<i<< endl;
    j++;
    cout <<i<< endl;
    cout <<j<< endl;
    */
    int n=5;
    cout<<"Before "<<n<<endl;
    update3(n);
    cout<<"After "<<n<<endl;
    return 0;
}
