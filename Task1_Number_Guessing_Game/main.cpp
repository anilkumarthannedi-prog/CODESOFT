#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
  srand(time(0));
  int randomNumber = rand() % 100+1;
  int guess;

  cout<<"guess a number between 1 and 100"<<endl;
do{
   cout<<"enter your guess:";
  cin<<guess;
  if(guess > randomNumber)
    cout<<"too high"<<endl;
  else if(guess < randomNumber)
    cout<<"too low"<<endl;
  else
    cout<<"congragulations ! you guessed correctly"<<endl;
}whilw(guess != randomNumber);

return 0;
}
