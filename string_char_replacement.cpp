/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// aa:bb::ccc.ccc.ddd.fff
#include <iostream>
#include<string>
//#include<cstddef>

using namespace std;

int main()
{
    std::string s="aa:bb::ccc.ccc.ddd.fff";
   

    std::size_t pos=s.find_first_of(".");
    cout<<"original-string\n"<<s;
    cout<<"\n"<<pos;
     while(pos!=std::string::npos)
    {
        s[pos]='x';
    pos=s.find_first_of('.',pos+1);
    
    }
    cout<<"\nmodified string:\n"<<s<<endl;

    return 0;
}
