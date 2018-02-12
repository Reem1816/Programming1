#include <iostream>

using namespace std;

int main()
{
   int sum=0;
   int i=0;
   int number;
   while(true)
    {
        if(i%2 == 0){
            cout<<"Player one turn Enter number :\n" ;

        }
        else
        {
            cout<<"Player two turn Enter number :\n" ;
        }
        cin>>number;
        if(number<1 || number>10)
        {
            cout<<"The number should be between 1 and 10 \n" ;
            cout<<"Please enter valid number \n" ;
            i--;
        }
        else{
            sum+=number;
            cout<<"Sum equals: " ;
            cout<< sum << endl << endl;
        }
        if(sum>=100){
            break;
        }
        i++;

    }

    if(i%2 == 0){
            cout<<"Player one wins :) \n" ;
        }
        else
        {
            cout<<"Player two wins :) \n" ;
        }
    return 0;
}
