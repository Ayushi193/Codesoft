#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
    int num,guess,tries=0;
    srand(time(0));
   num =rand()% 100+1; //random number between 1 and 100
   do{
    cout<< "Enter a guess between 1 and 100:";
    cin>>guess;
    tries++;
    if(guess>num) 
    cout<<"Too high!\n\n";
    else if(guess<num)
    cout<<"Too low!\n\n";
    else
    cout<<"\nCorrect! you got it in" << tries << "guess!\n";
   }
   while(guess!=num);
   return 0;
}