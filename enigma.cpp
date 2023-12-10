#include<iostream>
using namespace std;
// Function declarations
void displayAvailableSeats(int busNumber);
void bookSeat(int busNumber, int seatNumber);
void busTicketFunction();

const int TOTAL_BUSES = 3;
const int TOTAL_SEATS = 30;

// Array to track booked seats for each bus
int bookedSeats[TOTAL_BUSES][TOTAL_SEATS] = {0};

// Ticket prices for each bus
int ticketPrices[TOTAL_BUSES] = {300, 600, 2500}; // Prices for Bus 1, Bus 2, Bus 3

// Function to display available seats for a given bus
void displayAvailableSeats(int busNumber) {
cout << "Available Seats for Bus " << busNumber + 1 << ":\n------------------------" << endl;
for (int i = 0; i < TOTAL_SEATS; ++i) {
if (bookedSeats[busNumber][i] == 0) {
cout << i + 1 << " (PKR" << ticketPrices[busNumber] << ") ";
} else {
cout << "X ";
}
if ((i + 1) % 5 == 0) {
cout << endl;
}}
cout << endl;
}

// Function to book a seat for a given bus and calculate ticket price
void bookSeat(int busNumber, int seatNumber) {
if (seatNumber >= 1 && seatNumber <= TOTAL_SEATS) {
if (bookedSeats[busNumber][seatNumber - 1] == 0) {
bookedSeats[busNumber][seatNumber - 1] = 1;
cout << "Seat " << seatNumber << " for Bus " << busNumber + 1 << " booked successfully!" << endl;
cout << "Ticket price: PKR" << ticketPrices[busNumber] << endl;
cout << "Please make an online payment using account GIKI TOPI for the ticket." << endl;
} else {
cout << "Seat " << seatNumber << " for Bus " << busNumber + 1 << " is already booked. Please select another seat." << endl;}
} else {
cout << "Invalid seat number for Bus " << busNumber + 1 << ". Please enter a valid seat number." << endl;}}

// Function to encapsulate the bus ticket functionality
void busTicketFunction() {
    int choice;
    do {
        cout << "\nWelcome to GIKI Bus Ticket Convenience Portal" << endl;
        cout << "Available Buses:" << endl;
        cout << "1. Bus to Rawalpindi (Price: PKR" << ticketPrices[0] << ")" << endl;
        cout << "2. Bus to Islamabad (Price: PKR" << ticketPrices[1] << ")" << endl;
        cout << "3. Bus to Lahore (Price: PKR" << ticketPrices[2] << ")" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
            case 2:
            case 3:
                displayAvailableSeats(choice - 1);

                int seatNumber;
                cout << "Enter seat number to book: ";
                cin >> seatNumber;
                bookSeat(choice - 1, seatNumber);
                break;
            case 4:
                cout << "Thank you for using GIKI Bus Ticket Convenience Portal. Have a splendid day!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 4);
}

//Function to display Grocery Items
void online_grocery()
{
    int shop;                  //declaration od variables
    float weigth;
    double total1 =0, total2=0,total3=0,total4=0,total5=0,total6=0,total7=0,total8=0,total9=0,total10=0;
    double total;
    double grand_total = 0;
    int payment_method;
    int office;
    int faculty;

    cout<<"Items Available with price/kg OR price/liters"<<endl;
    cout<<"\n*Dairy*"<<endl;
    cout<<"1. Milk_350 "<<endl;
    cout<<"2. Butter_500 "<<endl;
    cout<<"3. Bread_250 "<<endl;
    cout<<"\n*Vegetables*"<<endl;
    cout<<"4. Potato_200 "<<endl;
    cout<<"5. Carrot_250"<<endl;
    cout<<"6. Cucumber_150 "<<endl;
    cout<<"\n*Fruits*"<<endl;
    cout<<"7. Pomegranate_400 "<<endl;
    cout<<"8. Mango_300 "<<endl;
    cout<<"9. Banana_200 "<<endl;
    cout<<"10. Apples_250 "<<endl;

    char continueshopping = 'y';
    while (continueshopping=='y'||continueshopping =='Y'){
    cout<<"\nWhat do you want to Purchase?"<<endl;
    cout<<"Please Enter: ";
    cin>>shop;
switch (shop){                //Using swicth statement for purchasing
case 1:
    {cout<<"How many kgs? ";
    cin>>weigth;
    total1 = weigth*350;
    cout<<"Total: "<<total1<<endl;
    break;}

case 2:
    {cout<<"How many kgs? ";
    cin>>weigth;
    total2 = weigth*300;
    cout<<"Total: "<<total2<<endl;
    break;}

case 3:
    {cout<<"How many kgs? ";
    cin>>weigth;
    total3 = weigth*250;
    cout<<"Total: "<<total3<<endl;
    break;}
case 4:
    {cout<<"How many kgs? ";
    cin>>weigth;
    total4 = weigth*200;
    cout<<"Total: "<<total4<<endl;
    break;}
case 5:
    {cout<<"How many kgs? ";
    cin>>weigth;
    total5 = weigth*250;
    cout<<"Total: "<<total5<<endl;
    break;}
case 6:
    {cout<<"How many kgs? ";
    cin>>weigth;
    total6 = weigth*150;
    cout<<"Total: "<<total6<<endl;
    break;}
case 7:
    {cout<<"How many kgs? ";
    cin>>weigth;
    total7 = weigth*300;
    cout<<"Total: "<<total7<<endl;
    break;}
case 8:
    {cout<<"How many kgs? ";
    cin>>weigth;
    total8 = weigth*300;
    cout<<"Total: "<<total8<<endl;
    break;}
case 9:
    {cout<<"How many kgs? ";
    cin>>weigth;
    total9 = weigth*200;
    cout<<"Total: "<<total9<<endl;
    break;}
case 10:
    {cout<<"How many kgs? ";
    cin>>weigth;
    total10 = weigth*250;
    cout<<"Total: "<<total10<<endl;
    break;}

default:
    {cout<<"Invalid Input"<<endl;
    break;}}

    cout << "Do you want to continue shopping? (y/n): ";
    cin >>continueshopping;
    }

    total = total1 + total2 +total3 +total4 +total5 +total6 +total7 +total8 +total9 +total10;
    
    grand_total = grand_total + total;
    
    cout << "Thank you for shopping. Your total cost is: " << grand_total << endl;
    cout<<"Please add payment method"<<endl;
    cout<<"1. Easypaisa"<<endl;
    cout<<"2. Cash on Delivery"<<endl;
    cin>>payment_method;

    if (payment_method==1)
    {cout<<"Send your payment "<<grand_total<<" to 03xx-xxxxxxxx"<<endl;}
    else if(payment_method==2){
    cout<<"Enter your Office number";
    cin>>office;
    cout<<"Enter your faculty"<<endl;
    cout<<"1. FES"<<endl;
    cout<<"2. FESE"<<endl;
    cout<<"3. FME"<<endl;
    cout<<"4. FCME"<<endl;
    cout<<"5. FCE"<<endl;
    cout<<"6. FMGS"<<endl;
    cin>>faculty;

    switch (faculty){                   //Using Switch statement for faculty
case 1:   
    {cout<<"Your Purchase will be deliver to FES. "<<endl;
    break;}
case 2:
    {cout<<"Your Purchase will be deliver FESE. "<<endl;
    break;}
case 3:
    {cout<<"Your Purchase will be deliver FME. "<<endl;
    break;}
case 4:
    {cout<<"Your Purchase will be deliver FCME. "<<endl;
    break;}
case 5:
    {cout<<"Your Purchase will be deliver FCE. "<<endl;
    break;}
case 6:
    {cout<<"Your Purchase will be deliver FMGS. "<<endl;
    break;}
default:
    {cout<<"Invalid input"<<endl;
    break;}
    }
    }
}  
//Function to Display Different Timings 
void displayTimings() {
        cout<<"GIKI Timings"<<endl;
        cout<<"1. **Library**"<<endl;
        cout<<"Weekdays: 8AM to 11:00pm"<<endl;
        cout<<"Weekends: 8AM to 4:00pm"<<endl;
        cout<<"Examdays: 8AM to 2:00pm"<<endl;
        cout<<"2. **Sports complex**"<<endl;
        cout<<"Swimming Pools: 5pm to 6pm"<<endl;
        cout<<"Cricket: 6pm to 7pm"<<endl;
        cout<<"Football: 7pm to 8pm"<<endl;
        cout<<"Volley ball: 8pm to 9pm"<<endl;
        cout<<"Squash: 9pm to 10pm"<<endl;
        cout<<"Badminton ball: 9pm to 10pm"<<endl;
        cout<<"Snooker: 9pm to 10pm"<<endl;
        cout<<"GYM: 9pm to 10pm"<<endl;
        cout<<"Netball: 9pm to 10pm"<<endl;
} 
//Function to Display Menu of Food Court
void displayMenu() {
    int order;                             //Declaring variables
    float number;
    double total1 =0, total2=0,total3=0,total4=0,total5=0,total6=0,total7=0,total8=0,total9=0,total10=0;
    double total;
    double grand_total = 0;
    int payment_method;

    cout<<"**Restaurant Menu**"<<endl;
    cout<<"1. Pizza : 500Rs"<<endl;
    cout<<"2. Burger: 200Rs"<<endl;
    cout<<"3. Paratha: 100Rs"<<endl;
    cout<<"4. Chai: 120Rs"<<endl;
    cout<<"5. Pasta: 450Rs"<<endl;
    cout<<"6. Fries: 250Rs"<<endl;
        
        
    char continueordering = 'y';
    while (continueordering=='y'||continueordering =='Y'){
    cout<<"What do you want to order?"<<endl;
    cout<<"Please Enter: ";
    cin>>order;
    switch (order){
    case 1:
    {cout<<"How many? ";
    cin>>number;
    total1 = number*500;
    cout<<"Total: "<<total1<<endl;
    break;}
    case 2:
    {cout<<"How many? ";
    cin>>number;
    total2 = number*200;
    cout<<"Total: "<<total2<<endl;
    break;}
    case 3:
    {cout<<"How many? ";
    cin>>number;
    total3 = number*100;
    cout<<"Total: "<<total3<<endl;
    break;}
    case 4:
    {cout<<"How many? ";
    cin>>number;
    total4 = number*120;
    cout<<"Total: "<<total4<<endl;
    break;}
    case 5:
    {cout<<"How many? ";
    cin>>number;
    total5 = number*150;
    cout<<"Total: "<<total5<<endl;
    break;}
    case 6:
    {cout<<"How many? ";
    cin>>number;
    total6 = number*250;
    cout<<"Total: "<<total6<<endl;
    break;}
    default:
    {cout<<"Invalid Input"<<endl;
    break;}}

    cout << "Do you want to continue ordering? (y/n): ";
    cin >>continueordering;}

    total = total1 + total2 +total3 +total4 +total5 +total6 +total7 +total8 +total9 +total10;
    grand_total = grand_total + total;
    
    cout << "Thank you for ordering. Your total cost is: " << grand_total << endl;
}  
//Main Function
int main()
{ 
    int choose;
    char select;
    cout<<"WELCOME TO GIKIANS CONVINIENCE DASHBOARD"<<endl;
    cout<<"Please Select your role"<<endl;
    cout<<"1. Student"<<endl;
    cout<<"2. Admin"<<endl;
    cin>>choose;

    if (choose == 1)
    {cout<<"Select Following"<<endl;
    cout<<"A. GIKI Food Courts"<<endl;
    cout<<"B. GIKI Transport Service"<<endl;
    cout<<"C. GIKI Timings"<<endl;}

    else if (choose == 2)
    {cout<<"a. GIKI Online Grocery Purchase"<<endl;
  

    else if (choose !=1 || choose != 2)
    {cout<<"You entered a wrong number."<<endl;}
    cin>>select;

    switch (select){       //using switch Statement
    case 'A':
    {displayMenu();
    break;}  
    case  'B':
    {busTicketFunction();
    break;}
    case 'C':
    {displayTimings();
    break;}
    case 'a':
    {online_grocery();
    break;}}
return 0;
}
    
  
  
   
   
   
