// ! find largest and smallest in an array
#include<iostream>
using namespace std;
int main()
{
    int num[]={2,234,643,345,355,1,3};
    int size=6;
    int smallest=num[0];
    int largest=num[0];
    int index=0;
    for (int i = 0; i < size; i++)
    {
        // if (num[i]<smallest)   //? for smallest
        if(num[i]>largest)        //? for largest
        {
            largest=num[i];
            index=i;
        }
        
    }
    cout<<largest<<endl;
    cout<<index;
    
    return 0;
}