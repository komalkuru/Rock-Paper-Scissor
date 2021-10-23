#include<iostream>
using namespace std;

class RPS
{
  public:
  void Game()
  {
    char player1;
    char player2;
    cout<<"Player 1 - Please enter the choice (R/P/S) : \n";
    cin>>player1;

    cout<<"Player 2 - Please enter the choice (R/P/S) : \n";
    cin>>player2;
    
    if(((player1 == 'R'||player1 == 'r') && (player2 == 'R' || player2 == 'r')) || ((player1 == 'P'||player1 == 'p') && (player2 == 'P' || player2 == 'p')) ||( (player1 == 'S'||player1 == 's') && (player2 == 'S' || player2 == 's')))
    {
      cout<<"A Game is a draw!";
    }
    else if(((player1 == 'P'||player1 == 'p') && (player2 == 'R' || player2 == 'r')) || ((player1 == 'S'||player1 == 's') && (player2 == 'P' || player2 == 'p')) ||( (player1 == 'R'||player1 == 'r') && (player2 == 'S' || player2 == 's')))
    {
      cout<<"Player 1 Won! \n";
    }
    else if (((player1 == 'R'||player1 == 'r') && (player2 == 'P' || player2 == 'p')) || ((player1 == 'P'||player1 == 'p') && (player2 == 'S' || player2 == 's')) ||( (player1 == 'S'||player1 == 's') && (player2 == 'R' || player2 == 'r')))
    {
      cout<<"Player 2 Won! \n";
    }
    else
    {
      cout<<"Oops!!! Accidentaly you pressed wrong keyword. Try again";
    }
  }
};

int main()
{
  RPS rps;
  char press;
  rps.Game();
    do
    {
      cout<<"\n\nTo play the game again Press Y/y OR To Exit from this game Press any key! \n"<<endl;
      cin>>press;

      if(press == 'y' || press == 'Y')
      {
        //system("clear");
        rps.Game();
      }
      else
      {
        cout<<"\nThanks for playing Rock Paper Scissor!"<<endl;
      }
    }while(press == 'y' || press == 'Y');
    return 0;
} 
