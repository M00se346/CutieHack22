//code here :)
#include <string>
#include <iostream>
using namespace std;


void cardboard();

void plastic();
void metal();
void liquid();
void paper();


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
            cout<<"The following items are not recyclable:\n"; 
            cout<<"1. Soiled container \n2. Shipping Package \n3. Plastic Films"; 
            cout<<"\n4. Batteries \n5. Snack Bags (chip, cookie, granola bar wrappers \n6. Food and beverage foam containers \n7. Multi Layered Food Containers";
            cout<<"\n8. Electrical Cords \n9. Hoses \n10. Hangers\n\n"; 

            cout<<"The following are hazardous wastes, make sure to despode of them at a Drop-Off Location
for Household Hazardous Waste:\n"; 
            cout<<"Medical sharps and medications\n Batteries (including car batteries) \nLight bulbs and fluorescent tubes \nNonempty aerosol cans (paints, solvents, butane) \nHousehold Chemicals: flammables and poisons, pool chemicals and acid cleaners, pesticides and herbicides. \nAsbestos"
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
        cout << "Most metal objects are recyclable. If you have more questions, make sure to make sure to research where you can dispose your waste." 
        << "If you have other objects such as tin foil with food residue or hangers, then those are not recyclable. Those objects should be thrown away." << endl;
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



void liquid(){
    cout << "While liquids are not typically recyclabe, you are able to take used oils/filters, and paint to a collection center." << endl;
}

void paper(){
    string input; 

    cout<<"Is your paper shredded (y/n)?\n";
    cin<<input; 
    cout<<endl;

    if (input == "y"){
        cout<<"Throw it away! Often there are pieces of plastic mixed in with shredded paper, preventing it from being processed. \n"; 
        return; 
    }

    cout<<"Is your paper coated with plastic (y/n)?\n";
    cin<<input; 
    cout<<endl;

    if (input == "y"){
        cout<<"Throw it away! The paper cannot be separated easily from the plastic lining. \n"; 
        return; 
    }

    cout<<"Is your paper a receipt (y/n)?\n";
    cin<<input; 
    cout<<endl;

    if (input == "y"){
        cout<<"Throw it away! Most receipts are made from a combination of plastic and paper, and they also contain a harmful chemical called bisphenol-A (BPA). \n"; 
        return; 
    }

    cout<<"Is your paper contaminated with food or liquids (y/n)?\n";
    cin<<input; 
    cout<<endl;

    if (input == "y"){
        cout<<"Throw it away! It can't be processed for recycling.\n"; 
        return; 
    }

    cout<<"Recycle your paper!\n"
}