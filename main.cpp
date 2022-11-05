//code here :)
#include <string>
#include <iostream>
using namespace std;


void cardboard();
void plastic();
void metal();
void liquid();
void paper();
void glass();


int main(){

    string userInput;


    cout << "Hello and welcome to recycle world! Here we help you to recycle the correct way. " 
         << "Please answer these questions and we can tell you were to put your ~trash~ " << endl;
    
    cout << "Question 1. are you holding a piece of plastic? Y/N" << endl;
    cin >> userInput;
    cout << endl;


    if (userInput == "Y" || userInput == "y"){
        cout << "Great start! Ok, lets look further" << endl;
        plastic();
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
            paper();
        }
        else if (userInput == "d"){
            glass();
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

            cout<<"The following items are not recyclable:\n"; 
            cout<<"1. Soiled container \n2. Shipping Package \n3. Plastic Films"; 
            cout<<"\n4. Batteries \n5. Snack Bags (chip, cookie, granola bar wrappers) \n6. "
                << "Food and beverage foam containers \n7. Multi Layered Food Containers";
            cout<<"\n8. Electrical Cords \n9. Hoses \n10. Hangers\n\n"; 

            cout << "The following are hazardous wastes, make sure to despode of them at a "
                 << "Drop-Off Location for Household Hazardous Waste:\n" ; 
            cout<< "1. Medical sharps and medications\n2. Batteries (including car batteries) "
                << "\n3. Light bulbs and fluorescent tubes \n4. Nonempty aerosol cans (paints, solvents, "
                << "butane) \n5. Household Chemicals: flammables and poisons, pool chemicals and acid cleaners, pesticides and herbicides. \n6. Asbestos \n";
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

        cout << "Did your cans and containers hold any toxic waste such as uranium, lead, or mercury?  Answer 'y' or 'n'" << endl;
        if (canInput == "Y" || canInput == "y"){ 
            cout << "When waste contains such material, it is better off to be thrown to the hazardous waste drop-off center." << endl;
            cout << "This could include paint cans, motor oil cans, propane gas tanks, certain vehicule parts and older computer parts." << endl;
        }
        else if (canInput == "N" || canInput == "n"){
            cout << "Are your cans and containers aluminum? Answer 'y' or 'n'" << endl;
            cin >> canInput;

            if (canInput == "Y" || canInput == "y"){
                cout << "Great, these are recyclable. Just make sure that it is cleaned and it should be good to go." << endl;
            }
            else if (canInput == "N" || canInput == "n"){
                cout << "This is most likely to be thrown away, however some metal cans, containers, and bottles are recyclable." << endl;
                cout << "They are also eligible for CRV redemption at the recycling center, so you can get some extra change." << endl;
            }
            else {
                cout << "Invalid Input" << endl;
            } 
        }
    }
    else if (input == "N" || input == "n"){
        string electronicInput;
        cout << "Cool, you is your waste some sort of electronic waste. Answer 'y' or 'n'" << endl;
        cin >> electronicInput;

        if (electronicInput == "Y" || electronicInput == "y"){ 
            cout << "Can you take your objet to the recyclabe center? Answer 'y' or 'n'" << endl;
            if (electronicInput == "Y" || electronicInput == "y"){
                cout << "This includes: Computer and Television Monitors, Computers, Printers, VCRs, Cell Phones, Radios, and Microwaves. "
                << "These are recyclable and can be taken to a collection site." << endl;
            }
            else if (electronicInput == "N" || electronicInput == "n"){
                cout << "This includes: Batteries and Electrical cords. These are not recyclable, you are better off throwing them away." << endl;
            }
            else {
                cout << "Invalid Input" << endl;
            }
        }
    }
    else {
        cout << "Most metal objects are recyclable. If you have more questions, make sure to make sure to research where you can dispose your waste." 
        << "If you have other objects such as tin foil with food residue or hangers, then those are not recyclable. Those objects should be thrown away." << endl;
    }
}

void cardboard(){

    cout << "Are you holding a pizza box?!?! "
         << "You are able to recycle pizza boxes ONLY IF they don't have grease on them. \n";

    cout << "Otherwise, cardboard comes in many shapes and sizes, but almost all of it is recyclable!" << endl;
    cout << "As long as the cardboard is dry (no liquid or grease on it) you should be able to recycle it\n";
    
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
        return;
    }
    
    cout << "Do you have small plastic?" << endl;
    cout << "Examples: \n1. plastic utensils \n2. plastic straw \n3. bread clip \n4. tampon applictor \n5. chapstick \n";
    cin >> input;
    cout << endl;
    if (input == "Y" || input == "y"){
        cout << "These are trash items, small plastics are some of the biggest contributers to "
        << "ocean pollution, next time, try to reuse what you can!\n";
        return;
    }

    cout << "Do you have a plastic bag / trash bag in your hand?" << endl;
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
        return;
    }   
        
    cout << "Do you have cling wrap? (Y/N)" << endl;
    cin >> input;
    cout << endl;
    if (input == "Y" || input == "y"){
        cout << "cling wrap is not recyclable, you should throw it in the trash." << endl;
        return;
    }

    cout << "Do you have food containers? (Y/N)" << endl;
    cout << "Examples: \n1. yogurt cup \n2. peanhut butter jar \n3. butter tub \n4. sour cream tub \n5. cream cheese tub \n";
    cin >> input;
    cout << endl;
    if (input == "Y" || input == "y"){
        cout << "These items ARE recyclable! Rinse out and put in recycling." << endl;
        return;
    }

    cout << "Do you have to go containers? (Y/N)" << endl;
    cin >> input;
    cout << endl;
    if (input == "Y" || input == "y"){
        cout << "These items are SOMETIMES recyclable! Check with your local recycling center to see." << endl;
        return;
    }

    cout << "Do you have food wrappers? (Y/N)" << endl;
    cout << "Examples: \n1. gronola bar wrapper \n2. fruit snack wrapper \n3. chip bag \n4. squeeze apple sauce \n5. random snack bags \n";
    cin >> input;
    cout << endl;
    if (input == "Y" || input == "y"){
        cout << "These items are NOT recyclable! Throw them away in the trash." << endl;
        return;
    }
            
    cout << "You are holding recyclable plastic! Go ahead and recycle it." << endl;

}

void paper(){
    string input; 

    cout<<"Is your paper shredded (y/n)?\n";
    cin>>input; 
    cout<<endl;

    if (input == "y"){
        cout<<"Throw it away! Often there are pieces of plastic mixed in with shredded paper, preventing it from being processed. \n"; 
        return; 
    }

    cout<<"Is your paper coated with plastic (y/n)?\n";
    cin>>input; 
    cout<<endl;

    if (input == "y"){
        cout<<"Throw it away! The paper cannot be separated easily from the plastic lining. \n"; 
        return; 
    }

    cout<<"Is your paper a receipt (y/n)?\n";
    cin>>input; 
    cout<<endl;

    if (input == "y"){
        cout<<"Throw it away! Most receipts are made from a combination of plastic and paper, and they also contain a harmful chemical called bisphenol-A (BPA). \n"; 
        return; 
    }

    cout<<"Is your paper contaminated with food or liquids (y/n)?\n";
    cin>>input; 
    cout<<endl;

    if (input == "y"){
        cout<<"Throw it away! It can't be processed for recycling.\n"; 
        return; 
    }

    cout<<"Recycle your paper!\n";
}


void glass(){

    string input;

    cout << "Is your glass dishwear (broken plate or bowl?) (y/n)?\n";
    cin >> input; 
    cout << endl;

    if (input == "y" || input == "Y"){
        cout << "The only recyclable glass types are jars and bottles! \n";
        cout<<"Throw it away! \n"; 
        return; 
    }

    cout << "Is your glass a mirror (y/n)?\n";
    cin >> input; 
    cout << endl;

    if (input == "y" || input == "Y"){
        cout << "The only recyclable glass types are jars and bottles! \n";
        cout<<"Throw it away! \n"; 
        return; 
    }

    cout << "Is your item some sort of pottery or ceramic (y/n)?\n";
    cin >> input; 
    cout << endl;

    if (input == "y" || input == "Y"){
        cout << "The only recyclable glass types are jars and bottles! \n";
        cout<<"Throw it away! \n"; 
        return; 
    }

    cout << "Is your item a lightbulb (y/n)?\n";
    cin >> input; 
    cout << endl;

    if (input == "y" || input == "Y"){
        cout << "The only recyclable glass types are jars and bottles! \n";
        cout<<"Throw it away! \n"; 
        return; 
    }

    cout << "Is your item a flower vase (y/n)?\n";
    cin >> input; 
    cout << endl;

    if (input == "y" || input == "Y"){
        cout << "The only recyclable glass types are jars and bottles! \n";
        cout<<"Throw it away! \n"; 
        return; 
    }

    cout << "The only recyclable glass types are jars and bottles! \n";


}