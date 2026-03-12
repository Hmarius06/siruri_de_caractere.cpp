#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[20];
    cin.get(a,20);
    cout<<a<<endl;
    int i=0, k=0;
    while(i<strlen(a))
    {
        if(a[i]>='a' && a[i]<='z')
            {
                strcpy(a+i,a+i+1);
                k++;
            }
        else i++;
    }
    if(0 == strlen(a)) cout<<"CUVANT VID";
    else cout<<a;

    return 0;
}

