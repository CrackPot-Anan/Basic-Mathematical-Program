#include <iostream>
using namespace std;

int main(){
int a,b,result;
char op;

cin>>a>>op>>b;

switch(op){
 case '+':
     cout<<a<<" + "<<b<<" == "<<a+b;
     break;
 case '-':
    cout<<a<<" - "<<b<<" == "<<a-b;
    break;
 case '*':
    cout<<a<<" * "<<b<<" == "<<a*b;
    break;
 case '/':
    cout<<a<<" / "<<b<<" == "<<a/b;
break;
 default:
    cout<<"You have inputed wrong operator";
    break;
}

    return 0;
}
