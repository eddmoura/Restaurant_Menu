
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>


using namespace std;

int main()
{



    const int NUMBER_WIDTH = 10;
    const int SIZE = 50;
    char dishes[SIZE], yesOrno;
    char dish1[] = "Coxinha";
    char dish2[] = "Cheese Ball";
    char dish3[] = "Acaraje";
    char dish4[] = "Feijoada";
    char dish5[] = "Moqueca de Peixe";
    char dish6[] = "Lasagnas";
    char dish7[] = "Cod Fish";
    char dish8[] = "Passion Fruit Mousse";
    char dish9[] = "Brigadeiro";
    char dish10[] = "Coconut Cake";

    int numCoxinha = 0, numCheeseBall = 0, numAcaraje = 0, numFeijoada = 0, numMoqueca = 0 ,
    numLasagnas = 0, numCodFish = 0, numPassionFruitMousse = 0, numBrigadeiro = 0, numCoconutCake = 0, addMore = 0;

    double total, subtotal, tax, tip = 0.0;

    const double taxamount = 8.75/100, coxinha = 35, cheeseBall = 22.000, acaraje = 30,
    feijoada = 35.0, moqueca = 40.0, lasagnas = 22.5 , codFish= 38.0000,
    passionFruitMousse = 10.000, brigadeiro = 11.90, coconutcake = 12;

    subtotal = (coxinha * numCoxinha) + (cheeseBall * numCheeseBall) +
    (acaraje * numAcaraje) + (feijoada * numFeijoada) + (moqueca * numMoqueca) +
    (lasagnas * numLasagnas) + (codFish * numCodFish) + (passionFruitMousse * numPassionFruitMousse) +
    (brigadeiro * numBrigadeiro) + (coconutcake * numCoconutCake);

    tax = subtotal * taxamount;

    total = subtotal + tax + tip;

    cout << setw(40) << "Food Menu" << endl;
    cout << setw(52) << "---------------------------------" << endl;
    cout << "_________________________________________________________________________" << endl;
    cout << setw(40) << "Small Dishes" << endl;
    cout << "_________________________________________________________________________" << endl;
    cout << "\n" << left << setw(60) << dish1 << '$' << "35.00" << endl;
    cout << "\n" << left << setw(60) << dish2 << '$' << "22.00" << endl;
    cout << "\n" << left << setw(60) << dish3 << '$' << "30.00" << endl;
    cout << "_________________________________________________________________________" << endl;
    cout << right << setw(40) << "Large Dishes" << endl;
    cout << "_________________________________________________________________________" << endl;
    cout << "\n" << left << setw(60) << dish4 << '$' << "35.00" << endl;
    cout << "\n" << left << setw(60) << dish5 << '$' << "40.00" << endl;
    cout << "\n" << left << setw(60) << dish6 << '$' << "22.50" << endl;
    cout << "\n" << left << setw(60) << dish7 << '$' << "38.00" << endl;
    cout << "_________________________________________________________________________" << endl;
    cout << right << setw(40) << "Dessert Dishes" << endl;
    cout << "_________________________________________________________________________" << endl;
    cout << "\n"  << left << setw(60) << dish8 << '$' << "10.00" << endl;
    cout << "\n"  << left << setw(60) << dish9 << '$' << "11.90" << endl;
    cout << "\n"  << left << setw(60) << dish10 << '$' << "12.00" << endl;
    cout << "_________________________________________________________________________" << endl;
    cout << "\n\n";
    while(true)
    {
        // program starts by asking user for first order//
        cout << "What would you like to order? ";
        cin.getline(dishes, SIZE);

        //string compare the user input and add the value to right item//

        if (strcmp(dishes, dish1) == 0)
        {
            // if user type an iten for the first time
            if(numCoxinha == 0)
                {
                    cout << "How many would you like?";
                    cin >> numCoxinha;
                }
            // if user type the same item this will remind the user they alredy order this iten and will give the option to add more
           else if (numCoxinha > 0)
               {
                cout << "You ordered already " << numCoxinha <<" "<< dish1 << endl;
                cout << "How many more " << dish1 << " would you like?"<< endl;
                cin >> addMore;
                numCoxinha = numCoxinha + addMore;
               }

        }

        else if (strcmp(dishes, dish2) == 0)
        {
            if(numCheeseBall == 0)
                {
                cout << "How many would you like?";
                cin >> numCheeseBall;
                }
            else if (numCoxinha > 0)
                {
                    cout << "You ordered already " << numCheeseBall <<" "<< dish2 << endl;
                    cout << "How many more " << dish2 << " would you like?"<< endl;
                    cin >>  addMore;;
                    numCheeseBall = numCheeseBall  + addMore;
                }
        }
        else if (strcmp(dishes, dish3) == 0)
        {
            if(numAcaraje == 0)
                {
                cout << "How many would you like?";
                cin >> numAcaraje;
                }
            else
                {
                    cout << "You ordered already " << numAcaraje <<" "<< dish3 << endl;
                    cout << "How many more " << dish3 << " would you like?"<< endl;
                    cin >>  addMore;
                    numAcaraje = numAcaraje  + addMore;
                }

        }
        else if (strcmp(dishes, dish4) == 0)
        {
            if(numFeijoada == 0)
                {
                cout << "How many would you like?";
                cin >> numFeijoada;
                }
            else
                {
                    cout << "You ordered already " << numFeijoada <<" "<< dish4 << endl;
                    cout << "How many more " << dish4 << " would you like?"<< endl;
                    cin >>  addMore;
                    numFeijoada = numFeijoada + addMore;
                }

        }
        else if (strcmp(dishes, dish5) == 0)
        {
            if(numMoqueca == 0)
                {
                cout << "How many would you like?";
                cin >> numMoqueca;
                }
            else
                {
                    cout << "You ordered already " << numMoqueca <<" "<< dish5 << endl;
                    cout << "How many more " << dish5 << " would you like?"<< endl;
                    cin >>  addMore;
                    numMoqueca = numMoqueca + addMore;
                }

        }
        else if (strcmp(dishes, dish6) == 0)
        {
            if (numLasagnas == 0)
                {
                cout << "How many would you like?";
                cin >> numLasagnas;
                }
            else
                {
                    cout << "You ordered already " << numLasagnas <<" "<< dish6 << endl;
                    cout << "How many more " << dish6 << " would you like?"<< endl;
                    cin >>  addMore;
                    numLasagnas = numLasagnas + addMore;
                }
        }
        else if (strcmp(dishes, dish7) == 0)
        {
            if(numCodFish == 0)
                {
                cout << "How many would you like?";
                cin >> numCodFish;
                }
            else
                {
                    cout << "You ordered already " << numCodFish <<" "<< dish7 << endl;
                    cout << "How many more " << dish7 << " would you like?"<< endl;
                    cin >>  addMore;
                    numCodFish = numCodFish + addMore;
                }
        }
        else if (strcmp(dishes, dish8) == 0)
        {
            if(numPassionFruitMousse == 0)
                {
                cout << "How many would you like?";
                cin >> numPassionFruitMousse;
                }
            else
                {
                    cout << "You ordered already " << numPassionFruitMousse <<" "<< dish8 << endl;
                    cout << "How many more " << dish8 << " would you like?"<< endl;
                    cin >>  addMore;
                    numPassionFruitMousse = numPassionFruitMousse + addMore;
                }
        }
        else if (strcmp(dishes, dish9) == 0)
        {
            if(numBrigadeiro == 0)
                {
                cout << "How many would you like?";
                cin >> numBrigadeiro;
                }
            else
                {
                    cout << "You ordered already " << numBrigadeiro <<" "<< dish9 << endl;
                    cout << "How many more " << dish9 << " would you like?"<< endl;
                    cin >>  addMore;
                    numBrigadeiro = numBrigadeiro + addMore;
                }
        }
        else if (strcmp(dishes, dish10) == 0)
        {
            if(numCoconutCake == 0)
                {
                cout << "How many would you like? ";
                cin >> numCoconutCake;
                }
            else
                {
                    cout << "You ordered already " << numCoconutCake <<" "<< dish10 << endl;
                    cout << "How many more " << dish10 << " would you like?"<< endl;
                    cin >>  addMore;
                    numCoconutCake = numCoconutCake + addMore;
                }
        }
        // if something that is not in the Menu is typed by the user it returns to first question//
        else
        {
            continue;

        }
        // This while statement, update user order every time it add something//
        while(true)
        {

            cout << "----------------------- This is your order so far------------------------" << endl;
            if(numCoxinha > 0)
                {
                    cout << "\n" << left << setw(60)  << dish1 << "Amount "<< setw(4) << right << numCoxinha <<endl;
                }
            if(numCheeseBall > 0)
                {
                    cout << "\n" << left << setw(60)  << dish2 << "Amount "<< setw(4) << right << numCheeseBall <<endl;
                }
            if(numAcaraje > 0)
                {
                    cout << "\n" << left << setw(60)  << dish3 << "Amount "<< setw(4) << right << numAcaraje <<endl;
                }
            if(numFeijoada > 0)
                {
                    cout << "\n" << left << setw(60)  << dish4 << "Amount "<< setw(4) << right << numFeijoada <<endl;
                }
            if(numMoqueca > 0)
                {
                    cout << "\n" << left << setw(60)  << dish5 << "Amount "<< setw(4) << right << numMoqueca <<endl;
                }
            if(numLasagnas > 0)
                {
                    cout << "\n" << left << setw(60)  << dish6 << "Amount "<< setw(4) << right << numLasagnas <<endl;
                }
            if(numCodFish > 0)
                {
                    cout << "\n" << left << setw(60)  << dish7 << "Amount "<< setw(4) << right << numCodFish <<endl;
                }
            if(numPassionFruitMousse > 0)
                {
                    cout << "\n" << left << setw(60)  << dish8 << "Amount "<< setw(4) << right << numPassionFruitMousse <<endl;
                }
            if(numBrigadeiro > 0)
                {
                    cout << "\n" << left << setw(60)  << dish9 << "Amount "<< setw(4) << right << numBrigadeiro <<endl;
                }
            if(numCoconutCake > 0)
                {
                    cout << "\n" << left << setw(60)  << dish10 << "Amount "<< setw(4) << right << numCoconutCake <<endl;
                }

            subtotal = (coxinha * numCoxinha) + (cheeseBall * numCheeseBall) +
            (acaraje * numAcaraje) + (feijoada * numFeijoada) + (moqueca * numMoqueca) +
            (lasagnas * numLasagnas) + (codFish * numCodFish) + (passionFruitMousse * numPassionFruitMousse) +
            (brigadeiro * numBrigadeiro) + (coconutcake * numCoconutCake);

            tax = subtotal * taxamount;

            total = subtotal + tax + tip;

            cout << setprecision(2) << fixed;
            cout << "\n" << left << setw(60)  << "The subtotal for your order is:"<< '$'<< setw(NUMBER_WIDTH) << right << subtotal << endl;
            cout << "\n" << left << setw(60)   << "The tax for your order is:" << '$'<< setw(NUMBER_WIDTH) << right << tax << endl;
            cout << "\n" << left << setw(60)   << "The total for your order is:" << '$' << setw(NUMBER_WIDTH) << right << total << endl;

            break;
        }
//validation of user input to continue to order more iten from the menu.
//if answer is n or N... will ask the user to add Tip to check.
//if tip does not match an int, code runs again.
// if answer is y or Y start order again.

       do
       {
        cout << "\n_________________________________________________________________________\n";
        cout << "Would you like something else? ";
        cin >> yesOrno;

           if (yesOrno == 'N' || yesOrno == 'n')
           {
               cout << "Please add tip\n";
               cin >> tip;
               if(!cin)
               {
                   cin.clear();
                   cin.ignore();
                   continue;
               }

           }
           else if (yesOrno != 'Y' && yesOrno != 'y' &&  yesOrno != 'N' && yesOrno != 'n')
           {
               continue;
           }
           break;
       }while(!isdigit(tip));


        if (yesOrno == 'Y' || yesOrno == 'y')
        {
            cin.clear();
            cin.ignore();
            continue;
        }

// Display receipt to customer.
        if(tip >= 0)
        {
            cout << "\n*************************************************************************\n";
            cout << "\n****************************** YOUR RECEIPT *****************************\n";
            cout << "\n*************************************************************************\n";

            if(numCoxinha > 0)
            {
                cout << "\n" << left << setw(42)  << dish1 << "Amount "<< setw(4) << right << numCoxinha << " x " << coxinha << setw(NUMBER_WIDTH) << right << numCoxinha * coxinha << endl;
            }
            if(numCheeseBall > 0)
            {
                cout << "\n" << left << setw(42)  << dish2 << "Amount "<< setw(4) << right << numCheeseBall << " x " << cheeseBall << setw(NUMBER_WIDTH) << right<< numCheeseBall * coxinha << endl;
            }
            if(numAcaraje > 0)
            {
                cout << "\n" << left << setw(42)  << dish3 << "Amount "<< setw(4) << right << numAcaraje << " x " << acaraje << setw(NUMBER_WIDTH) << right << numAcaraje * acaraje << endl;
            }
            if(numFeijoada > 0)
            {
                cout << "\n" << left << setw(42)  << dish4 << "Amount "<< setw(4) << right << numFeijoada << " x " << feijoada << setw(NUMBER_WIDTH) << right << numFeijoada * feijoada <<endl;
            }
            if(numMoqueca > 0)
            {
                cout << "\n" << left << setw(42)  << dish5 << "Amount "<< setw(4) << right << numMoqueca << " x " << moqueca << setw(NUMBER_WIDTH) << right << numMoqueca * moqueca << endl;
            }
            if(numLasagnas > 0)
            {
                cout << "\n" << left << setw(42)  << dish6 << "Amount "<< setw(4) << right << numLasagnas << " x " << lasagnas << setw(NUMBER_WIDTH) << right << numLasagnas * lasagnas << endl;
            }
            if(numCodFish > 0)
            {
                cout << "\n" << left << setw(42)  << dish7 << "Amount "<< setw(4) << right << numCodFish << " x " << codFish << setw(NUMBER_WIDTH) << right<< numCodFish * codFish << endl;
            }
            if(numPassionFruitMousse > 0)
            {
                cout << "\n" << left << setw(42)  << dish8 << "Amount "<< setw(4) << right << numPassionFruitMousse << " x " << passionFruitMousse << setw(NUMBER_WIDTH) << right << numPassionFruitMousse * passionFruitMousse <<endl;
            }
            if(numBrigadeiro > 0)
            {
                cout << "\n" << left << setw(42)  << dish9 << "Amount "<< setw(4) << right << numBrigadeiro << " x " << brigadeiro << setw(NUMBER_WIDTH) << right<< numBrigadeiro * brigadeiro << endl;
            }
            if(numCoconutCake > 0)
            {
                cout << "\n" << left << setw(42)  << dish10 << "Amount "<< setw(4) << right << numCoconutCake << " x " << coconutcake << setw(NUMBER_WIDTH) << right<< numBrigadeiro * brigadeiro <<endl;
            }
        cout << "\n_________________________________________________________________________\n";
        cout << "\n" << left << setw(60)  << "The subtotal for your order is:"<< '$'<< setw(NUMBER_WIDTH) << right << subtotal << endl;
        cout << setprecision(4) << fixed;
        cout << "\n" << left << setw(60)   << "The tax for your order is:" << '$'<< setw(NUMBER_WIDTH) << right << tax << endl;
        cout << "\n" << left << setw(60)   << "The tip for your order is:" << '$'<< setw(NUMBER_WIDTH) << right << tip << endl;
        cout << setprecision(2) << fixed;
        cout << "\n" << left << setw(60)   << "The total for your order is:" << '$' << setw(NUMBER_WIDTH) << right << total + tip << endl;
        cout << "\n*************************************************************************\n";
        cout << "\n******************************* THANK YOU *******************************\n";
        cout << "\n*************************************************************************\n";

        }

        break;
    }

    return 0;
}








