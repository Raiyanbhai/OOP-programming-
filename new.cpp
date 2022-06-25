




/*WAP to read number of students and then mark of students.Display entered markes and their average.
Use Dynamic memory allocation to reverve memory to store marke of each students*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    system("cls");
    int i,n;
    float *p,sum=0,avg;
    cout <<"\n\n\nHow maney students are there :";
    cin>>n;
    cout<<"Enter marke of each students :-"<<endl;
    p=new float[n];
    for(i=0;i<n;i++)
    {
    cin>>*(p+i);
    sum+=*(p+i);    
    }
    avg=sum/n;
    cout<<"The average marke of each ";
    for(i=0;i<n;i++)
    cout<<setw(3)<<*(p+i);
    cout <<" is :- "<<avg;
    delete[]p;
    
}
