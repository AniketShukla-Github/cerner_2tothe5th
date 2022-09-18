//cerner_2tothe5th_2022
//cerner_2^5_2022
#include <iostream>
using namespace std;
int main()
{   bool switchOnorOff;
    cout<<"What do you like? Light or Dark? Press 1 to spread light, press 0 if you believe in dark: \n";
    int count1 = 0, count2 = 0;
    while (1) {if (switchOnorOff) {cin>>switchOnorOff;
            if (switchOnorOff) {count1++;count2 = 0;
                if (count1 >= 3){cout<<"Your intentions were surely not to spread happiness. You are dead."<<endl;
                    return 0;}
                cout<<"You already spread light. Too much of anything is not right. Please maintain the balance and choose dark once if you don't want to die."<<endl;}
            else {count2++;count1 = 0;
                cout<<"uff! Why are you disappointed in world so early??? Please think again and choose light or dark"<<endl;}
        }
        else {cin>>switchOnorOff;
            if (switchOnorOff) {count1++;count2 = 0;
                cout<<"Great!!! You are here to spread happiness. Keep going. You have option to choose light or dark"<<endl;}
            else {count2++;count1 = 0;
                if (count2 >= 3){cout<<"The world can't tolerate you much. You are dead now. Rest in peace."<<endl;
                    return 0;}
                cout<<"Seems like you are here to harm the world. If you keep doing this, I might need to kill you. Choose now once again between light and dark"<<endl;}
        }
    }
    return 0;}
