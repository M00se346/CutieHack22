//code here :)
#include <string>
#include <iostream>
using namespace std;


void cardboard();


int main(){

    string userInput;


    cout << "Hello and welcome to recycle world! Here we help you to recycle the correct way." 
         << "Please answer these questions and we can tell you were to put your ~trash~ " << endl;
    
    cout << "Question 1. are you holding a piece of plastic? Y/N" << endl;
    cin >> userInput;
    cout << endl;


    if (userInput == "Y" || userInput == "y"){
        cout << "great start! Ok, lets look further" << endl;
        //call plastic function
    }
    else{
        cout << "Ok, lets see. Are you holding a. cardboard b. metal c. paper d. liquid"
        << " e. none of the above" << endl;
        cin >> userInput;
        cout << endl;


        // switch(userInput){}
        //case "a": /*call plastic function*/; break;

        if (userInput == "a"){
            cardboard();
        }
        else if (userInput == "b"){
            //call metal function
        }
        else if (userInput == "c"){
            //call paper function
        }
        else if (userInput == "d"){
            //call liquif function
        }
        else if (userInput == "e"){
            //wtf
        }



    }


    return 0;
}


void cardboard(){

    string input;

    cout << "Cardboard comes in many shapes and sizes, lets see what you have." << endl
    << "Are you holding a cereal box? Y/N" << endl;

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
            cout << "Are you holding a pizza box?!?!"
            << "You are able to recycle pizza boxes ONLY IF they don't have grease on them."
            << "Otherwise, please recycle." << endl;
             
        }
    }

}