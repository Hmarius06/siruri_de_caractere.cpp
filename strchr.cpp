#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[256],voc[]="aeiou";
    cin.getline(s,256);
    int n=strlen(s)-1;
    for(int i=n;i>=0;i--)
    {
        if(!strchr(voc,s[i]))//verifica apartenenta intrun sir a unei litere strchr(sir,litera)
        {
            cout<<s[i];
            i=0;
        }
    }

    return 0;
}
