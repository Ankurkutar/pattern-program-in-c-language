
// string function
#include <iostream>
#include<cstring>
#include<string.h>

using namespace std;

int main()
{
     char key[] = "mango";
     char buffer[50];
     do{
         cout<<"what is your favourite fruit:?";
         cin>>buffer;
     }while(strcmp(key,buffer) != 0);
     cout<<"Answer is correct:\n";
    return 0;
    
}