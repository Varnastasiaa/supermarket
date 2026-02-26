#include "zara.h"
#include "bershka.h"
int main(){
    int choice;

    cout<<"choose your shop\n";
    cout<<"Zara=1\n";
    cout<<"------------------\n";
    cout<<"bershka=2\n";
    cout<<"------------------\n";
    cout<<"youre choice: ";
    cin>>choice;
    cout<<endl;

    shop* shop=nullptr;

    if(choice==1){
        shop= new zara();
    }
    else if(choice==2){
        shop= new bershka();
    }
    else{
        cout<<"invalid choice\n";
    }
    shop->print();
    delete shop;
    return 0;
}