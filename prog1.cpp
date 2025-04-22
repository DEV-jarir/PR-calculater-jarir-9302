#include<iostream>
using namespace std;

int addi(int f_num,int s_num){
    return f_num + s_num;
}
int sub(int f_num,int s_num){
    return f_num - s_num;
}
int multi(int f_num,int s_num){
    return f_num * s_num;
}
int divi(int f_num,int s_num){
    return f_num / s_num;
}
int mod(int f_num,int s_num){
    return f_num % s_num;
}

int main()
{
    int choice,f_num,s_num;
     
    do
    {
        cout<<endl;

    cout<<"press 1 for + (addition)"<<endl;
    cout<<"press 2 for - (subtraction)"<<endl;
    cout<<"press 3 for * (multiplication)"<<endl;
    cout<<"press 4 for / (division)"<<endl;
    cout<<"press 5 for % (modulo)"<<endl;
    cout<<"Press 0 for exting"<<endl;
    cout<<endl;
    cout<<"Enter your Choice : ";
    cin>>choice;


    switch(choice)
    {
        cout<<endl;
        cout<<"-----------------------------------------"<<endl;
    case 1:cout<<"Enter First Number: ";
           cin>>f_num;
           cout<<"Enter Second Number: ";
           cin>>s_num;
        cout<<"------------------------------------"<<endl;

        cout<<"The Addition of First num and second num is:"<<addi(f_num,s_num)<<endl;

        cout<<"-----------------------------------";
        break;

    case 2:cout<<"Enter First Number: ";
           cin>>f_num;
           cout<<"Enter Second Number: ";
           cin>>s_num;
        cout<<"------------------------------------"<<endl;

        cout<<"The Subtraction of First num and second num is:"<<sub(f_num,s_num)<<endl;

        cout<<"-----------------------------------";
        break;

    case 3:cout<<"Enter First Number: ";
           cin>>f_num;
           cout<<"Enter Second Number: ";
           cin>>s_num;
     cout<<"------------------------------------"<<endl;

     cout<<"The Multiplication of First num and second num is:"<<multi(f_num,s_num)<<endl;

     cout<<"-----------------------------------";
     break;
     
     case 4:cout<<"Enter First Number: ";
            cin>>f_num;
            cout<<"Enter Second Number: ";
            cin>>s_num;

    cout<<"------------------------------------"<<endl;

    cout<<"The Division of First num and second num is:"<<divi(f_num,s_num)<<endl;

    cout<<"-----------------------------------";
    break;

    case 5:cout<<"Enter First Number: ";
    cin>>f_num;
    cout<<"Enter Second Number: ";
    cin>>s_num;

    cout<<"------------------------------------"<<endl;

    cout<<"The Modulo of First num and second num is:"<<mod(f_num,s_num)<<endl;

    cout<<"-----------------------------------";
    break;

        default:cout<<"Wrong Choice";
        break;
     }
    }
    while(choice!=0);
    return 0;
}