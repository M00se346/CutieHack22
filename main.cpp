//code here :)
#include <string>
#include <iostream>
using namespace std;


int main(){

    string userInput;


    cout << "Hello and welcome to recycle world! Here we help you to recycle the correct way." 
         << "Please answer these questions and we can tell you were to put your ~trash~ " << endl;
    
    cout << "Question 1. are you holding a piece of plastic? Y/N" << endl;
    cin >> userInput;

    if (userInput == "Y" || userInput == "y"){
        cout << "great start! Ok, lets look further" << endl;
        //call plastic function
    }
    else{
        cout << "Ok, lets see. Are you holding a. cardboard b. metal c. paper d. liquid"
        << " e. none of the above" << endl;
        cin >> userInput;

        if (userInput == "a"){
            //call cardboard function
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

