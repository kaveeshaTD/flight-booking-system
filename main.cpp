#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int glob=0; //global variabler
int global=10;

class domestic //class domestic flight
{
protected:
    int pnr;
    char fname[10],dit[7],art[7],dprice[20];
    int d,dest,so,choice; // variables for date,nearby air port and destinataion

public:
    void d_pnr()
    {
        glob++; //glob=0 it increment by one
        pnr=glob;
    }

    int display()
    {

        cout<<"\nenter date of journy DD/MM/YYYY-: ";
        cin>>d;
        cout<<"\n->colombo(1)\t jafna(2)\t galle(3)\t trinco(4)\n"<<endl;
        cout<<"enter nearby airpoart-: ";
        cin>>so;
        cout<<"enter your destination-: ";
        cin>>dest;
        if((so==1 && dest==2) || (so==2 && dest==1)) //condition to flight search
        {

            cout<<"\t\t\t flight found"<<endl<<endl;
            cout<<" Air line:\t\tdeparture:\tArrival:\tPrice:\t\tCategory:\n"<<endl;
            cout<<" Sri lankan (1)\t\t08:00\t\t11:00\t\tRs:4000\t\tRefundable"<<endl;
            cout<<" KTD air line (2)\t09:00\t\t10:00\t\tRs:3000\t\tRefundable"<<endl;
            cout<<" EGO air lines (3)\t10:00\t\t11:00\t\tRs:5000\t\tRefundable"<<endl;
        }
        else if((so==1 && dest==3) ||(so==3 && dest==1))
        {
            cout<<"\t\t\t flight found"<<endl<<endl;
            cout<<" Air line:\t\tdeparture:\tArrival:\tPrice:\t\tCategory:\n"<<endl;
            cout<<" Sri lankan (1)\t\t08:00\t\t11:00\t\tRs:4000\t\tRefundable"<<endl;
            cout<<" KTD air line (2)\t09:00\t\t10:00\t\tRs:3000\t\tRefundable"<<endl;
            cout<<" EGO air lines (3)\t10:00\t\t11:00\t\tRs:5000\t\tRefundable"<<endl;
        }
        else if((so==1 && dest==4) || (so==4 && dest==1))
        {
            cout<<"\t\t\t flight found"<<endl<<endl;
            cout<<" Air line:\t\tdeparture:\tArrival:\tPrice:\t\tCategory:\n"<<endl;
            cout<<" Sri lankan (1)\t\t07:00\t\t09:00\t\tRs:4000\t\tRefundable"<<endl;
            cout<<" KTD air line (2)\t09:00\t\t10:00\t\tRs:3000\t\tRefundable"<<endl;
            cout<<" EGO air lines (3)\t09:30\t\t11:00\t\tRs:5000\t\tRefundable"<<endl;
        }
        else if((so==2 && dest==3) ||(so==3 && dest==2))
        {
            cout<<"\t\t\t flight found"<<endl<<endl;
            cout<<" Air line:\t\tdeparture:\tArrival:\tPrice:\t\tCategory:\n"<<endl;
            cout<<" Sri lankan (1)\t\t07:00\t\t09:00\t\tRs:4000\t\tRefundable"<<endl;
            cout<<" KTD air line (2)\t09:00\t\t10:00\t\tRs:3000\t\tRefundable"<<endl;
            cout<<" EGO air lines (3)\t09:30\t\t11:00\t\tRs:5000\t\tRefundable"<<endl;
        }
        else if((so==2 && dest==4) || (so==4 && dest==2))
        {
            cout<<"\t\t\t flight found"<<endl<<endl;
            cout<<" Air line:\t\tdeparture:\tArrival:\tPrice:\t\tCategory:\n"<<endl;
            cout<<" Sri lankan (1)\t\t07:00\t\t09:00\t\tRs:4000\t\tRefundable"<<endl;
            cout<<" KTD air line (2)\t09:00\t\t10:00\t\tRs:3000\t\tRefundable"<<endl;
            cout<<" EGO air lines (3)\t09:30\t\t11:00\t\tRs:5000\t\tRefundable"<<endl;
        }
        else if((so==3 && dest==4) || (so==4 && dest==3))
        {
            cout<<"\t\t\t flight found"<<endl<<endl;
            cout<<" Air line:\t\tdeparture:\tArrival:\tPrice:\t\tCategory:\n"<<endl;
            cout<<" Sri lankan (1)\t\t07:00\t\t09:00\t\tRs:4000\t\tRefundable"<<endl;
            cout<<" KTD air line (2)\t09:00\t\t10:00\t\tRs:3000\t\tRefundable"<<endl;
            cout<<" EGO air lines (3)\t09:30\t\t11:00\t\tRs:5000\t\tRefundable"<<endl;
        }
        else if(so==dest) //condition for same so and destination
        {
            cout<<"\nSource and destination can't be the same.\nTry again\n\n" <<endl;
            return display();
        }
        else
        {
            cout<<"\nWrong input entered\n Try again\n\n\n"<<endl;
            return display();
        }
    }
    int select_flight() //function for flight selection
    {
        cout<<"\nEnter your choice"<<endl;
        cin>>choice;
        if(choice==1)
        {
            cout<<"\nFlight selected: "<<endl;
            cout<<"Sri lankan"<<endl;
            strcpy(fname,"Sri_lankan");
            cout<<"Departure time: 08:00"<<endl;
            cout<<"Arrival time: 11:00"<<endl;
            cout<<"Ticket price-:Rs 4000";
            strcpy(dit,"08:00");
            strcpy(art,"11:00");
            strcpy(dprice,"Rs-:4000");


        }

        else if(choice==2)
        {
            cout<<"\nFlight selected:"<<endl;
            cout<<"KTD air line             "<<endl;
            strcpy(fname,"KTD_ari_line");
            cout<<"Departure time: 09:00"<<endl;
            cout<<"Arrival time: 10:00"<<endl;
            cout<<"Ticket price-:Rs 3000";
            strcpy(dprice,"Rs-:3000");
            strcpy(dit,"09:00");
            strcpy(art,"10:00");
        }

         else if(choice==3)
         {
            cout<<"\nFlight selected:"<<endl;
            cout<<"EGO air lines"<<endl;
            strcpy(fname,"EGO_ari_line");
            cout<<"Departure time: 10:00"<<endl;
            cout<<"Arrival time: 11:00"<<endl;
            cout<<"Ticket price-:Rs 5000";
            strcpy(dprice,"Rs-:5000");
            strcpy(dit,"10:00");
            strcpy(art,"11:00");
         }

         else
            {
            cout<< "wrong input entered...\n try again"<< endl;
            return select_flight();
            }

        }

}; // domestic class end

class international //internationals flight class
{
protected:
    int pnri;
    int date,desty,srs,chos;
    char fln[10],ariv[7],dipa[7],iprice[20];

    public:
    void i_pnr()
    {
        global++; //global=10 it increment by one
        pnri=global;
    }

    int inter()
    {

        cout<<"\nenter date of journy DD/MM/YYYY-: ";
        cin>>date;
        cout<<"\n->london(1)\t abu dhabi(2)\t New york(3)\t Us(4)\n"<<endl;
        cout<<"enter source airpoart-: ";
        cin>>srs;
        cout<<"enter your destination-: ";
        cin>>desty;

        if((srs==1 && desty==2) || (srs==2 && desty==1))
        {
            cout<<"\t\t\t flight found"<<endl<<endl;
            cout<<" Air line:\t\tdeparture:\tArrival:\tPrice:\t\tCategory:\n"<<endl;
            cout<<" Sri lankan (1)\t\t08:00\t\t16:00\t\tRs:64000\tRefundable"<<endl;
            cout<<" Emirates (2)\t\t09:00\t\t17:00\t\tRs:43000\tRefundable"<<endl;
            cout<<" EGO air lines (3)\t10:00\t\t19:00\t\tRs:55000\tRefundable"<<endl;
        }
        else if((srs==1 && desty==3) || (srs==3 && desty==1))
        {
            cout<<"\t\t\t flight found"<<endl<<endl;
            cout<<" Air line:\t\tdeparture:\tArrival:\tPrice:\t\tCategory:\n"<<endl;
            cout<<" Sri lankan (1)\t\t08:00\t\t16:00\t\tRs:64000\tRefundable"<<endl;
            cout<<" Emirates (2)\t\t09:00\t\t17:00\t\tRs:43000\tRefundable"<<endl;
            cout<<" EGO air lines (3)\t10:00\t\t19:00\t\tRs:55000\tRefundable"<<endl;
        }
        else if((srs==1 && desty==4) || (srs==4 && desty==1))
        {
            cout<<"\t\t\t flight found"<<endl<<endl;
            cout<<" Air line:\t\tdeparture:\tArrival:\tPrice:\t\tCategory:\n"<<endl;
            cout<<" Sri lankan (1)\t\t08:00\t\t16:00\t\tRs:64000\tRefundable"<<endl;
            cout<<" Emirates (2)\t\t09:00\t\t17:00\t\tRs:43000\tRefundable"<<endl;
            cout<<" EGO air lines (3)\t10:00\t\t19:00\t\tRs:55000\tRefundable"<<endl;
        }
        else if((srs==2 && desty==3) || (srs==3 && desty==2))
        {
            cout<<"\t\t\t flight found"<<endl<<endl;
            cout<<" Air line:\t\tdeparture:\tArrival:\tPrice:\t\tCategory:\n"<<endl;
            cout<<" Sri lankan (1)\t\t08:00\t\t16:00\t\tRs:64000\tRefundable"<<endl;
            cout<<" Emirates (2)\t\t09:00\t\t17:00\t\tRs:43000\tRefundable"<<endl;
            cout<<" EGO air lines (3)\t10:00\t\t19:00\t\tRs:55000\tRefundable"<<endl;
        }
        else if((srs==2 && desty==4) || (srs==4 && desty==2))
        {
            cout<<"\t\t\t flight found"<<endl<<endl;
            cout<<" Air line:\t\tdeparture:\tArrival:\tPrice:\t\tCategory:\n"<<endl;
            cout<<" Sri lankan (1)\t\t08:00\t\t16:00\t\tRs:64000\tRefundable"<<endl;
            cout<<" Emirates (2)\t\t09:00\t\t17:00\t\tRs:43000\tRefundable"<<endl;
            cout<<" EGO air lines (3)\t10:00\t\t19:00\t\tRs:55000\tRefundable"<<endl;
        }
        else if((srs==3 && desty==4) || (srs==4 && desty==3))
        {
            cout<<"\t\t\t flight found"<<endl<<endl;
            cout<<" Air line:\t\tdeparture:\tArrival:\tPrice:\t\tCategory:\n"<<endl;
            cout<<" Sri lankan (1)\t\t08:00\t\t16:00\t\tRs:64000\tRefundable"<<endl;
            cout<<" Emirates (2)\t\t09:00\t\t17:00\t\tRs:43000\tRefundable"<<endl;
            cout<<" EGO air lines (3)\t10:00\t\t19:00\t\tRs:55000\tRefundable"<<endl;
        }
        else if(srs==desty)
        {
            cout<< "\nSource and destination can't be same..\n Try again" <<endl;
            return inter();
        }
        else
        {
            cout<<"Wrong input entered\nTry again" <<endl;
            return inter();
        }
    }
    int select_flighti()
    {
        cout<<"\nEnter your choice"<<endl;
        cin>>chos;
        switch(chos)
        {
            case 1:
            cout<<"\nFlight selected: "<<endl;
            cout<<"Sri lankan"<<endl;
            strcpy(fln,"Sri_lanka");
            cout<<"Departure time: 08:00"<<endl;
            cout<<"Arrival time: 16:00"<<endl;
            cout<<"Ticket price-:Rs 64000";
            strcpy(iprice,"Rs-:64000");
            strcpy(dipa,"08:00");
            strcpy(ariv,"16:00");

            break;

            case 2:
                cout<<"\nflight selected:"<<endl;
                cout<<"Emirates"<<endl;
                strcpy(fln,"Emirates");
                cout<<"Departure time: 09:00"<<endl;
                cout<<"Arrival time: 17:00"<<endl;
                cout<<"Ticket price-:Rs 43000";
                strcpy(iprice,"Rs-:43000");
                strcpy(dipa,"09:00");
                strcpy(ariv,"17:00");
            break;

            case 3:
                cout<<"\nflight selected:"<<endl;
                cout<<"EGO air lines"<<endl;
                strcpy(fln,"EGO_air_lines");
                cout<<"Departure time: 10:00"<<endl;
                cout<<"Arrival time: 19:00"<<endl;
                cout<<"Ticket price-:Rs 56000";
                strcpy(iprice,"Rs-:56000");
                strcpy(dipa,"10:00");
                strcpy(ariv,"19:00");
                break;

            default:
                cout<<"Wrong input entered"<<endl;
                return select_flighti();

        }
    }

};

class passenger:public domestic,public international
{
public:
    char f_name[30],l_name[30],email[30];
    int age,gender;
    long int c_no;

    void p_details(int x)
    {
        if(x==1)
        {
            display();
            select_flight();
        }
        else
        {
            inter();
            select_flighti();
        }
        cout<<"\n\nEnter passenger details";
        cout<<"\nFirst name-:";
        cin>>f_name;
        cout<<"Last name-:";
        cin>>l_name;
    }
    void gender_check()
    {
        cout<<"\nGender:\nMale-press:1\nFemale-2:"<<endl;
        cout<<"Enter Gender-:";
        cin>>gender;

        if(gender>2)
        {
            cout<<" \n Wrong input entered .\nTry again\n\n"<<endl;
            return gender_check();
        }

    }
    void more_details()
    {
        cout<<"Enter age-:";
        cin>>age;
        cout<<"Email Id-:";
        cin>>email;
        cout<<"Contact number-:";
        cin>>c_no;
        cout<<"\nDetails Entered:\n\n";
        cout<<"Details summary\n"<<endl;
        cout<<"Gender-:"<<gender<<endl;
        cout<<"Age-:"<<age<<endl;
        cout<<"Email ID-:"<<email<<endl;
        cout<<"Contact number-:"<<c_no<<endl;
        ofstream file1("flight");        //output data to file
        file1<<age<<endl;
        file1<<email<<endl;
        file1<<c_no<<endl;
        file1<<gender<<endl;
        file1.close();
    }

    int getpnr()
    {
        return pnr;
    }

    int getpnri()
    {
        return pnri;
    }
     void disd() //function to display details about domestic booking
     {
         cout<<"PNR-:"<<pnr<<endl;
         cout<<"Name-:"<<f_name<<" "<< l_name<<endl; // file handling option
         cout<<"Date of journey-:"<<d<<endl;
         cout<<"Departure time-:"<<dit<<endl;
         cout<<"Arrival time-:"<<art<<endl;
         cout<<"Ticket price-:"<<dprice<<endl;
         ofstream dfile("flight_details");
         dfile<<f_name<<" "<<l_name<<endl; //output data to file
         dfile<<d<<endl;
         dfile<<dit<<endl;
         dfile<<art<<endl;
         dfile<<dprice<<endl;
         dfile<<pnr<<endl;
         dfile.close();
     }

     void disi()
     {
         cout<<"PNR-:"<<pnri<<endl;
         cout<<"Flight-:"<<fln<<endl;
         cout<<"Name-:"<<f_name<<" "<< l_name<<endl;
         cout<<"Date of journey-:"<<date<<endl;
         cout<<"Departure time-:"<<dipa<<endl;
         cout<<"Arrival time-:"<<ariv<<endl;
         cout<<"Ticket price-:"<<iprice<<endl;
         ofstream ifile("flight_details_inter");
         ifile<<f_name<<" "<<l_name<<endl; //output data to file
         ifile<<date<<endl;
         ifile<<dipa<<endl;
         ifile<<ariv<<endl;
         ifile<<iprice<<endl;
         ifile<<pnri<<endl;
         ifile.close();
     }

};

class payment
{
    protected:
    int choice1,bank,cvv,card,date,user_id;
    char password[10];

    public:
        void p_details()
        {
        cout<<"\n\nHow would you like to pay ?\n";
        cout<<"\n->Debit card (1) \n->Credit card (2) \n->Net banking (3)"<<endl;
        cin>>choice1;
        switch(choice1)
          {
     case 1:
        cout<<"\nEnter card number-:";
        cin>>card;
        cout<<"\nEnter expire date-:(MM/YYYY)";
        cin>>date;
        cout<<"\nEnter CVV-:";
        cin>>cvv;
        cout<<"\nTransaction successful\n";
        break;

     case 2:
        cout<<"\nEnter card number-:";
        cin>>card;
        cout<<"\nEnter expire date-:(MM/YYYY)";
        cin>>date;
        cout<<"\nEnter passwoword-:";
        cin>>password;
        cout<<"\nTransaction successful\n";
        break;

     case 3:
        cout<<"Banks available : \->BOC (1) \->Sampath bank (2) \->Com bank (3) \->Seylan bank (4) ";
        cout<<"\nSelect your bank-:";
        cin>>bank;
        cout<<"\nYou have selected :"<< bank;
        cout<<"\nEnter user ID-:";
        cin>>user_id;
        cout<<"\nEnter password";
        cin>>password;
        cout<<"Transaction successful\n";
        break;

     default:
        cout<<"\nWrong input entered.\n Try again\n\n";
        return p_details();
          }
        }

};

class show_details
{
public:
    char fname[10],dit[7],art[7],dprice[20];
    int d,dest,so,choice,pnr,pnri;
    int date,desty,srs,chos;
    char fln[10],ariv[7],dipa[7],iprice[20];
    char f_name[30],l_name[30],email[30],f_namei[20],l_namei[20];
    int age,gender;
    long int c_no;
    int num1;

int cfd()
{
  cout<<"\n\n01-Domestic details\n02-International details"<<endl;
  cout<<"\nEnter your choice-:";
  cin>>num1;
  ifstream f1("flight");
  ifstream f2("flight_details");
  ifstream f3("flight_details_inter");
  f1>>age;
  f1>>email;
  f1>>c_no;
  f1>>gender;
  f2>>f_name;
  f2>>l_name;
  f2>>d;
  f2>>dit;
  f2>>art;
  f2>>dprice;
  f2>>pnr;
  f3>>f_namei;
  f3>>l_namei;
  f3>>date;
  f3>>dipa;
  f3>>ariv;
  f3>>iprice;
  f3>>pnri;
  if(num1==1)
  {
    cout<<"\n\n01 - Passenger name-:"<<f_name<<" "<<l_name<<endl;
    cout<<"02 - Date of journey-:"<<d<<endl;
    cout<<"03 - Flight departure time-:"<<dit<<endl;
    cout<<"04 - Flight arrival time-:"<<art<<endl;
    cout<<"05 - Ticket price-:"<<dprice<<endl;
    cout<<"06 - Age-:"<<age<<endl;
    cout<<"07 - Email-:"<<email<<endl;
    cout<<"08 - Contact number-:"<<c_no<<endl;
    cout<<"09 - PNR number-:"<<pnr<<endl;
  }
  else if(num1==2)
  {
    cout<<"\n\n01 - Passenger name-:"<<f_namei<<" "<<l_namei<<endl;
    cout<<"02 - Date of journey-:"<<date<<endl;
    cout<<"03 - Flight departure time-:"<<dipa<<endl;
    cout<<"04 - Flight arrival time-:"<<ariv<<endl;
    cout<<"05 - Ticket price-:"<<iprice<<endl;
    cout<<"06 - Age-:"<<age<<endl;
    cout<<"07 - Email-:"<<email<<endl;
    cout<<"08 - Contact number-:"<<c_no<<endl;
    cout<<"09 - PNR number-:"<<pnri<<endl;
  }
  else
  {
      cout<<"\n Wrong input entered\n try again"<<endl;
      return cfd();
  }

}

};

class cancel_ticket
{
public:
    int cticket()
    {
    float nb,pnr;
    cout<<" \nEnter your option"<<endl;
    cout<<"Tip - If you didn't remember your PNR please go to check details and find it"<<endl;
    cout<<"\n01-Domestic\n02-International\n"<<endl;
    cin>>nb;
    if(nb==1)
    {
        cout<<"Enter your pnr"<<endl;
        cin>>pnr;
        if(pnr==1)
        {
            cout<<"\nYour domestic flight ticket was canceled,\nYour payment was refunded to your bank,\nThank you have a nice day.....!  "<<endl;
        }
        else
        {
            cout<<"Wrong input"<<endl;
            return cticket();
        }
    }
    else if(nb==2)
    {
        cout<<"Enter your pnr"<<endl;
        cin>>pnr;
        if(pnr==11)
        {
            cout<<"\nYour international flight ticket was canceled,\nYour payment was refunded to your bank,\nThank you have a nice day....! "<<endl;
        }
        else
        {
            cout<<"Wrong input"<<endl;
            return cticket();
        }
    }
    else
    {
        cout<<"Wrong input Try again"<<endl;
         return cticket();

    }
    }
};



int main()
{

    class passenger p1;
    class payment p2;
    class show_details s1;
    class cancel_ticket c1;

int num,num1;
char input;
       do
       {
       cout<<"\n\t\t\t*******|welcome to flight reservation system|********"<<endl<<endl;
       cout<<"  -------------------------------------------------"<<endl;
       cout<<"   book your flight tickets at affordable prices"<<endl;
      cout<<"  -------------------------------------------------"<<endl;

      cout<<"\n\t->booking flight  (1) \n\t->Check details\t  (2)\n\t->Cancel ticket\t  (3)\n\t->Exit\t\t  (4)"<<endl<<endl;
      cout<<"  please enter your choice-: ";
      cin>>num;
      if(num==1)
      {
          system("CLS");
        cout<<"\n\t->domestic flight (1) \n\t->international flights (2)\n"<<endl;
        cout<<"please enter your option-: ";
        cin>>num1;
        if (num1==1)
        {
            p1.d_pnr();
            p1.p_details(1);
            p1.gender_check();
            p1.more_details();
            p1.disd();
            p2.p_details();


        }
        else if (num1==2)
        {
            p1.i_pnr();
            p1.p_details(2);
            p1.gender_check();
            p1.more_details();
            p1.disi();
            p2.p_details();

        }
        else
        {
            cout<<"Wrong input"<<endl;
            return main();
        }
      }
      else if(num==2)
      {
          s1.cfd();
      }
      else if(num==3)
      {
          c1.cticket();
      }
    else
    {
        cout<<"\nThank you have a nice day.......!"<<endl;
    }
      cout<<"\nDo you wish to continue:(Y/N)"<<endl;
      cin>>input;
     } while(input=='Y' || input=='y');

    return 0;
}



