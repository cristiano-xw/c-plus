#include<bits/stdc++.h>
#include"student.h"
using namespace std;

void sett(student & sa,int n)
{
    cout<<"please enter the student's name ";
    getline(cin,sa);
    cout<<"please enter "<<n<<" quiz scores:\n";
    for(int i=0;i<n;i++)
    {
        cin>>sa[i];
    }

    while (cin.get()!='\n')
    continue;
}

const int pupils=3;
const int quizzes=5;

int main()
{
    student ada[pupils];
    for(int i=0;i<pupils;i++)
    {
        sett(ada[i],quizzes);
    }

    cout<<"\nstudent list:\n";
    for(int i=0;i<pupils;i++)
    {
        cout<<ada[i].Name()<<endl;  //通过基类函数访问私有成员
    }

    cout<<"\nresults:";

    for(int i=0;i<pupils;i++)
    {
        cout<<endl<<ada[i];
        cout<<"average"<<ada[i].average()<<endl;
    }
    cout<<"done";
    return 0;
}