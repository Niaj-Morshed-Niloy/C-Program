#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"Take any number:";
    cin>>num;
    for(i=1;i<=10;i++)
    {
        cout<<num<<"X"<<i<<"="<<(num*i)<<endl;
    }
    return 0;

}