#include<iostream>
using namespace std;

void online_grocery()
{
    int shop;
    float weigth;
    double total1 =0, total2=0,total3=0,total4=0,total5=0,total6=0,total7=0,total8=0,total9=0,total10=0;
    double total;
    double grand_total = 0;
    int payment_method;
    int office;
    int faculty;

    cout<<"Items Available with price/kg OR price/liters"<<endl;
    cout<<"**Dairy**\n"<<endl;
    cout<<"1. Milk_350 "<<endl;
    cout<<"2. Butter_500 "<<endl;
    cout<<"3. Bread_250 "<<endl;
    cout<<"**Vegetables**\n"<<endl;
    cout<<"4. Potato_200 "<<endl;
    cout<<"5. Carrot_250"<<endl;
    cout<<"6. Cucumber_150 "<<endl;
    cout<<"**Fruits**\n"<<endl;
    cout<<"7. Pomegranate_400 "<<endl;
    cout<<"8. Mango_300 "<<endl;
    cout<<"9. Banana_200 "<<endl;
    cout<<"10. Apples_250 "<<endl;

    char continueshopping = 'y';
    while (continueshopping=='y'||continueshopping =='Y'){
    cout<<"What do you want to Purchase?"<<endl;
    cout<<"Please Enter: ";
    cin>>shop;
switch (shop){
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

    switch (faculty){
case 1:
    {cout<<"Your Purchase will be deliver to FES "<<endl;
    break;}
case 2:
    {cout<<"Your Purchase will be deliver to FESE "<<endl;
    break;}
case 3:
    {cout<<"Your Purchase will be deliver to FME "<<endl;
    break;}
case 4:
    {cout<<"Your Purchase will be deliver to FCME "<<endl;
    break;}
case 5:
    {cout<<"Your Purchase will be deliver to FCE "<<endl;
    break;}
case 6:
    {cout<<"Your Purchase will be deliver to FMGS "<<endl;
    break;}
default:
    {cout<<"Invalid input"<<endl;
    break;}
    }
    }
}      
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
    cout<<"b. GIKI Faculty Member Transport Service"<<endl;}
    else if (choose !=1 || choose != 2)
    {cout<<"You entered a wrong number."<<endl;}
    cin>>select;

    switch (select)
    case 'a':
    {online_grocery();}
    



    return 0;
}
