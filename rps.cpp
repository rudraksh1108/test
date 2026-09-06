#include <iostream>
#include <ctime>
using namespace std;

string Player;
string Computer;

string user_choice(){

    do{
        cout << "**************************\n";
        cout << "1.Rock\n";
        cout << "2.Paper\n";
        cout << "3.Scissor\n";
        cout << "Input your choice: ";
        cin >> Player;
    }while(Player != "Rock" && Player != "Paper" && Player != "Scissor");
    return Player;   

}

void show_choices(){
    cout << "**************************\n";
    cout << "Your choice: " << Player << endl;
    cout << "Computer choice: " << Computer << endl;
    cout << "**************************\n";
}

string Computer_choice(string Choices[]){
    
    srand(time(0));
    int i = (rand() % 3);
    Computer = Choices[i];

    return Computer;
}

void WinCircuit(string Player, string Computer){
    if(Player == "Rock"){
        if(Computer== "Rock"){
            cout << "It's a Draw\n";
        }
        else if(Computer== "Paper"){
            cout << "Computer Wins\n";
        }
        else if(Computer == "Scissor"){
            cout << "You Win\n";
        }
    }

    else if(Player == "Paper"){
        if(Computer== "Rock"){
            cout <<  "You Win\n";
        }
        else if(Computer== "Paper"){
            cout << "It's a Draw\n";
        }
        else if(Computer == "Scissor"){
            cout << "Computer Wins\n";
        }
    }

    else if(Player == "Scissor"){
        if(Computer== "Rock"){
            cout << "Computer Wins\n";
        }
        else if(Computer== "Paper"){
            cout << "You Win\n";
        }
        else if(Computer == "Scissor"){
            cout << "It's a Draw\n";
        }
    }
    cout << "**************************\n";
    
}

int main(){
    string Choices[] = {"Rock", "Paper", "Scissor"};
    string Player = user_choice();
    string Computer = Computer_choice(Choices);

    show_choices();
    WinCircuit(Player, Computer);
    return 0;
}