#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int x=-1;
    int random_num=rand()%10;
    cout<<"guess a random number 0 to 9"<<endl;
    do
{  
    cout<<"enter a number: ";
    cin>>x;

        if(x==random_num){
            cout<<"correct!"<<endl;
            break;
        }
            else if(x<random_num){
                cout<<"too low, try again: "<<endl;
                
        }
            else{
                cout<<"too high, try again: "<<endl;
                
            }
    } while(x!=random_num);
    return 0;
    
}