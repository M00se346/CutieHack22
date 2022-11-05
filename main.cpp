//code here :)
#include <string>
#include <iostream>
using namespace std;


void cardboard();
void plastic();
void metal();
void liquid();


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
            //paper();
        }
        else if (userInput == "d"){
            //glass();
        }
        else if (userInput == "e"){
            liquid();
        }
        else if (userInput == "f"){
            cout << "You are most likely holding trash. If it has any type"
            << " of food residue or wax / plastic covering, please throw away in trash."
            << endl;
            cout << "If you are still unsure go to your local recycling center and ask for help."
            << endl;
        }


    }


    cout << "Any bit of recycling we can do helps the world, keep doing your part! Thanks for recyling responsibly." << endl;

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
            << "is no wax coating or metal lining (if there is, throw it away)." << endl;
        }
        else{
            cout << "Are you holding a pizza box?!?! "
            << "You are able to recycle pizza boxes ONLY IF they don't have grease on them. "
            << "Otherwise, please throw away your item, it is not recyclable." << endl;
             
        }
    }

}


void liquid(){
    cout << "While liquids are not typically recyclabe, you are able to "
    << "take used oils/filters, and paint to a collection center." << endl;
}

void plastic(){

    string input;

    cout << "If you have empty plastic bottles, jugs, tubs, or jars, "
    << "rinse out with water and recycle!" << endl;

    cout << "Don't have these things?" 
    << "Lets see... do you have empty house hold containers" 
    << "(clorox wipes bottle, laundry detergent jug etc... (Y/N)" << endl;

    cin >> input;
    cout << endl;

    if (input == "Y" || input == "y"){
        cout << "You can recycle this! Make sure to wash out any chemicals with water before recycling." << endl;
    }
    else{
        cout << "Do you have a plastic bag in your hand?" << endl;
        cin >> input;
        cout << endl;

        if (input == "Y" || input == "y"){
            cout << "I recommend resuing plastic bags. These can be used when "
            << "shopping so you don't have to buy new bags. Another use for plastic "
            << "bags is to line the inside of trash cans. " << endl;
            cout << "Otherwise, check your local recycling center to see if they accept plastic bags." << endl;
            cout << endl << endl;
            cout << "If you have a trash bag thats empty, check with your local recycling center. ";
            cout << endl;
        }   
        else{
            cout << "Do you have cling wrap? (Y/N)" << endl;
            cin >> input;
            cout << endl;
            if (input == "Y" || input == "y"){
                cout << "cling wrap is not recyclable, you should throw it in the trash." << endl;
            }
            else{
                cout << "You are holding trash! Go ahead and throw it away." << endl;
            }
        }


    }

}
