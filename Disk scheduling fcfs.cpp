#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int n;

    cout<<"Enter no. of service request:";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int start;
    cout<<"Enter start position of arm:";
    cin>>start;

    int distance,current;
    int seek_count=0;

    for(int i=0;i<n;i++)
    {
        current=a[i];
        distance=abs(current-start);
        seek_count=seek_count+distance;
        start=current;

    }
    cout<<"Seek count is:"<<seek_count<<endl;
    cout<<"Average seek count is:"<<seek_count/n<<endl;

    cout<<"The sequence:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
