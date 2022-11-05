//code here :)
#include <string>
#include <iostream>
using namespace std;


void cardboard();
void metal();
void liquid();


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


void metal(){
    string input;

    cout << "Nice, so you are recycling metal. Do you have cans or metal containers? Answer 'y' or 'n'" << endl;
    cin >> input;
    cout << endl;

    if (input == "Y" || input == "y"){
        string canInput;
        cout << "Are your cans and containers aluminum? Answer 'y' or 'n'" << endl;
        cin >> canInput;

        if (canInput == "Y" || canInput == "y"){
            cout << "Great, these are recyclable." << endl;
        }
        else if (canInput == "N" || canInput == "n"){
            cout << "Some metal cans, containers, and bottles are recyclable. They are also eligible for CRV redemption at the recycling center, so you can get some extra change." << endl;
        }
        else {
            cout << "Invalid Input" << endl;
        } 

    }
    else if (input == "N" || input == "n"){
        string electronicInput;
        cout << "Cool, you probably have some sort of electronic waste. Do you have simple electronic waste? Answer 'y' or 'n'" << endl;
        cin >> electronicInput;

        if (electronicInput == "Y" || electronicInput == "y"){
            cout << "This contains: Computer and Television Monitors, Computers, Printers, VCRs, Cell Phones, Radios, and Microwaves. "
            << "These are recyclable and can be taken to a collection site." << endl;
        }
        else if (electronicInput == "N" || electronicInput == "n"){
            cout << "This includes: Batteries and Electrical cords. These are not recyclable, you are better off throwing them away." << endl;
        }
        else {
            cout << "Invalid Input" << endl;
        } 
    }
    else {
        cout << "Most metal objects are recyclable. If you have more questions, make sure to make sure to research where you can dispose your waste." << endl;
    }
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

void liquid(){
    cout << "While liquids are not typically recyclabe, you are able to take used oils/filters, and paint to a collection center." << endl;
}