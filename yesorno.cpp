#include<iostream>
#include <chrono>
#include <thread>
using namespace std::this_thread;     // sleep_for, sleep_until
using namespace std::chrono_literals; // ns, us, ms, s, h, etc.    
using std::chrono::system_clock;
#include<string.h>
#include<stdlib.h>

using namespace std;
void guess (int low , int high , int mid){

    string choice, maybe ,yes = "yes",greater ="greater" ;
    sleep_for(10ns);
    sleep_until(system_clock::now() +1s);
    cout<< " Is the number "<<mid<<" ?"<<endl;
    cin>>choice ;

    if(choice == yes){

        cout<<"Yay! I found it , I'm a certified magician! :D ";
        exit(0);

    }
    else{
        sleep_for(10ns);
        sleep_until(system_clock::now() +1s);
        cout<<"hmm...\n";
        sleep_for(10ns);
        sleep_until(system_clock::now() + 1s);
        cout<<" okay is it greater or lesser than "<<mid<< " ? "<<endl;
        cin>>maybe;
        if(maybe == greater ){
            cout<<"Okay ...";
            int mid1 = (mid+1+high)/2;
            guess(mid+1,high,mid1);
            
        }
        else{

            cout<<"Okay ...";
            int mid2 = (low+mid-1)/2;
            guess(low,mid-1,mid2);

        }

    }


}
int main(){

    int mid , low=1,high =100;
    mid = (low+high)/2;
    cout<<"think of a number between 1 to 100\n";
    sleep_for(10ns);
    sleep_until(system_clock::now() + 2s);
    cout<<"Dont tell me what it is, but answer these questions using\n\
    'yes' or 'no' and 'greater' or 'lesser': \n\n";
    guess(low,high,mid);

    return 0;
}