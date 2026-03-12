#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[256];
    cin.getline(s,256);
    s[0]=toupper(s[0]);//toupper() pune caps pe litera aleasa
    // sau s[0]-=32
    for(int i=1;s[i];i++)
    {
        while(s[i]==' ')
        {
            i++;
            s[i]=toupper(s[i]);
        }
    }
    cout<<s;
    return 0;
}
