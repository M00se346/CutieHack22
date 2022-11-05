//code here :)
#include <string>
#include <iostream>
using namespace std;


void cardboard();
void plastic();
void metal();


int main(){

    string userInput;


    cout << "Hello and welcome to recycle world! Here we help you to recycle the correct way. " 
         << "Please answer these questions and we can tell you were to put your ~trash~ " << endl;
    
    cout << "Question 1. are you holding a piece of plastic? Y/N" << endl;
    cin >> userInput;
    cout << endl;


    if (userInput == "Y" || userInput == "y"){
        cout << "Great start! Ok, lets look further" << endl;
        //call plastic function
    }
    else{
        cout << "Ok, lets see. Are you holding a.cardboard b.metal c.paper d.glass e.liquid"
        << " f.none of the above" << endl;
        cin >> userInput;
        cout << endl;


        // switch(userInput){}
        //case "a": /*call plastic function*/; break;

        if (userInput == "a"){
            cardboard();
        }
        else if (userInput == "b"){
            metal();
        }
        else if (userInput == "c"){
            //call paper function
        }
        else if (userInput == "d"){
            //call glass funciton
        }
        else if (userInput == "e"){
            //call liquif function
        }
        else if (userInput == "f"){
            //idk
        }


    }


    return 0;
}


void cardboard(){

    string input;

    cout << "Cardboard comes in many shapes and sizes, lets see what you have." << endl
    << "Are you holding a cereal box? Y/N" << endl;
    cin >> input;
    cout << endl;
    if (input == "Y" || input == "y"){
        cout << "Great! cereal boxes are absolutely recyclable."
        << " Make sure to unfold the box and keep it flat, then" 
        << "go ahead and put in in your recycling bin" << endl;
    }
    else{   
        cout << "Are you holding a shipping conatiner? Y/N" << endl;
        cin >> input;
        cout << endl;
        if(input == "Y" || input == "y"){
            cout << "Great! You can recycle that. Make sure there"
            << "is no wax coating or metal lining." << endl;
        }
        else{
            cout << "Are you holding a pizza box?!?! "
            << "You are able to recycle pizza boxes ONLY IF they don't have grease on them. "
            << "Otherwise, please recycle." << endl;
             
        }
    }

}



void plastic(){

    cout << "If you have empty plastic bottles, jugs, tubs, or jars, rince out with water and recycle!" << endl;

    cout << "Don't have these things?" 
    << "Lets see... do you have empty house hold containers" 
    << "(clorox wipes bottle, laundry detergent jug etc... (Y/N)" << endl;



}