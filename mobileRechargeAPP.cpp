#include <iostream>

using namespace std;

class deposit {
  
  public:
  
  string name;
  int amount;
  
  void detail(){
      
      cout<<"Enter your name : ";
      getline(cin , name);
      cout<<"Your name is "<<name<<endl;
      
      cout<<"Enter the deposit amount : ";
      cin>>amount;
      cin.ignore();
      cout<<"your total amount is "<<amount<<endl;
      
  }
  
};

class checknum : public deposit{
  
  public:
  
  string num;
  string sim;
  
  int money;
  
  void number(){
      
      cout<<"Enter your number : ";
      cin>>num;
      cin.ignore();
      
      while(true){
          
             if(num.length() == 10){
          cout<<"Which is your sim?"<<endl;
          cout<<"VI"<<endl;
          cout<<"Jio"<<endl;
          cout<<"Airtel"<<endl;
          cout<<"BSNL"<<endl;

cout<<"Enter your sim : ";
      cin>>sim;
          
          break;
          
      }
      else{
            cout<<"Enter your number : ";
      cin>>num;
      cin.ignore();
          
      }
      
      }
      
       cout<<"Which do you want to recharge in your phone?"<<endl;
          cout<<155<<endl;
          cout<<299<<endl;
          cout<<398<<endl;
          cout<<749<<endl;
          cout<<1099<<endl;
      
       cout<<"money : ";
        cin>>money;
        
        int bal;
      
    while(true){
        
        if(money<=amount){
            cout<<"Recharge successfully";
            
            break;
        }
        
        else{
            cout<<"your balance is low"<<endl<<"add some money: ";
      cin>>bal;
      amount +=bal;
        }
        
    }  
      
  }
  
};

int main(){
    
    cout<<"Mobile recharge"<<endl;
    
 
    
    checknum numchek;
    numchek.detail();
    numchek.number();
}








