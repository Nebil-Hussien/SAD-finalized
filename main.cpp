#include <iostream>
#include<iomanip>
#include<windows.h>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;
void custlogin();
void suplogin();
int mainMenu();
void Order();
void Purchase(string, string ,string ,string);

struct Customer{
  string fname;
  string lname;
  string address;
  string email;
  string Telephone;
  string custusername;
  string custpassword;
}c;
struct Supplier{
  string Compname;
  string address;
string Telephone;
  string email;
  string supusername;
  string suppassword;
}sup;
ofstream fp;
ifstream ifp;
fstream Electronics,Fashion,Educ_books,Sport,Others;
struct Inventory
{
    string name;
    double price;
    unsigned int quantity;
    string description;
    string DateOfEntry;
    string ItemId;
}s;
void InvEntry(Inventory &s)
{
    cout<<"Enter Inventory name: ";
    cin>>s.name;
    cout<<"\nEnter Inventory price: ";
    cin>>s.price;
    cout<<"\nEnter its quantity: ";
    cin>>s.quantity;
    cout<<"\nDescription of the inventory: ";
    cin>>s.description;
    cout<<"\nEnter date of entry: ";
    cin>>s.DateOfEntry;
}
void electronics(Inventory &s)
{
    Electronics.open("Electronics.txt",ios::out|ios::app);
    Electronics<<s.name<<" "<<s.price<<" "<<s.quantity<<" "<<s.description<<" "<<s.DateOfEntry<<endl;
    Electronics.close();
}
void fashion(Inventory &s)
{
    Fashion.open("Fashion.txt",ios::out|ios::app);
    Fashion<<s.name<<" "<<s.price<<" "<<s.quantity<<s.description<<" "<<s.DateOfEntry<<endl;
    Fashion.close();
}
void educ_books(Inventory &s)
{
    Educ_books.open("Educ_books",ios::out|ios::app);
    Educ_books<<s.name<<" "<<s.price<<" "<<s.quantity<<s.description<<" "<<s.DateOfEntry<<endl;
    Educ_books.close();
}
void sports(Inventory &s)
{
    Sport.open("Sport.txt",ios::out|ios::app);

    Sport<<s.name<<" "<<s.price<<" "<<s.quantity<<s.description<<" "<<s.DateOfEntry<<endl;
    Sport.close();
}
void other(Inventory &s)
{
    Others.open("Others.txt",ios::out|ios::app);

    Others<<s.name<<" "<<s.price<<" "<<s.quantity<<s.description<<" "<<s.DateOfEntry<<endl;
    Others.close();
}
void electronicsDisplay()
{
    string  ElectronicsShow,Sname,price,Quantity,Descrioption,DOE;
    Electronics.open("Electronics.txt",ios::in);
            if(Electronics.fail())
            {
                      cout<<"Error Opening File"<<endl;
            }
            while (getline(Electronics, ElectronicsShow))
      {
          stringstream sss(ElectronicsShow);
          getline(sss, Sname,' ');
          getline(sss,price,' ');
          getline(sss,Quantity,' ');
          getline(sss,Descrioption,' ');
          getline(sss,DOE,' ');
        cout<<"Product Name : "<<Sname<<endl;
        cout<<"Product Price : "<<price<<endl;
        cout<<"Product Quantity : "<<Quantity<<endl;
        cout<<"Product Date of Entery : "<<DOE<<endl;
        cout<<endl<<endl;
      }
Electronics.close();
}
void fashionDisplay()
{
   string  FashionShow,Sname,price,Quantity,Descrioption,DOE;
    Fashion.open("Fashion.txt",ios::in);
            if(Fashion.fail())
            {
                      cout<<"Error Opening File"<<endl;
            }
            while (getline(Electronics, FashionShow))
      {
          stringstream sss(FashionShow);
          getline(sss, Sname,' ');
          getline(sss,price,' ');
          getline(sss,Quantity,' ');
          getline(sss,Descrioption,' ');
          getline(sss,DOE,' ');
        cout<<"Product Name : "<<Sname<<endl;
        cout<<"Product Price : "<<price<<endl;
        cout<<"Product Quantity : "<<Quantity<<endl;
        cout<<"Product Date of Entery : "<<DOE<<endl;
        cout<<endl<<endl;
      }
                Fashion.close();

}
void eduDisplay()
{
    string Educ_booksShow,Sname,price,Quantity,Descrioption,DOE;
    Educ_books.open("Educ_books.txt",ios::in);
            if(Educ_books.fail())
            {
                      cout<<"Error Opening File"<<endl;
            }
            while (getline(Educ_books,Educ_booksShow))
      {
          stringstream sss(Educ_booksShow);
          getline(sss, Sname,' ');
          getline(sss,price,' ');
          getline(sss,Quantity,' ');
          getline(sss,Descrioption,' ');
          getline(sss,DOE,' ');
        cout<<"Product Name : "<<Sname<<endl;
        cout<<"Product Price : "<<price<<endl;
        cout<<"Product Quantity : "<<Quantity<<endl;
        cout<<"Product Date of Entery : "<<DOE<<endl;
        cout<<endl<<endl;
      }
                Educ_books.close();


}
void sportsDisplay()
{
    string SportShow,Sname,price,Quantity,Descrioption,DOE;
    Sport.open("Sport.txt",ios::in);
            if(Sport.fail())
            {
                      cout<<"Error Opening File"<<endl;
            }
            while (getline(Sport, SportShow))
      {
          stringstream sss(SportShow);
          getline(sss, Sname,' ');
          getline(sss,price,' ');
          getline(sss,Quantity,' ');
          getline(sss,Descrioption,' ');
          getline(sss,DOE,' ');
        cout<<"Product Name : "<<Sname<<endl;
        cout<<"Product Price : "<<price<<endl;
        cout<<"Product Quantity : "<<Quantity<<endl;
        cout<<"Product Date of Entery : "<<DOE<<endl;
        cout<<endl<<endl;
      }
            Sport.close();
}
void othersDispaly()
{
    string OthersShow,Sname,price,Quantity,Descrioption,DOE;
    Others.open("Others.txt",ios::in);
            if(Others.fail())
            {
                      cout<<"Error Opening File"<<endl;
            }
            while (getline(Others, OthersShow))
      {
          stringstream sss(OthersShow);
          getline(sss, Sname,' ');
          getline(sss,price,' ');
          getline(sss,Quantity,' ');
          getline(sss,Descrioption,' ');
          getline(sss,DOE,' ');
        cout<<"Product Name : "<<Sname<<endl;
        cout<<"Product Price : "<<price<<endl;
        cout<<"Product Quantity : "<<Quantity<<endl;
        cout<<"Product Date of Entery : "<<DOE<<endl;
        cout<<endl<<endl;
      }
Others.close();
}
void Serach(string pid)
{
    int ans;
    fstream Electronics,Fashion,Educ_books,Sport,Others;
    Electronics.open("Electronics.txt",ios::in|ios::out);
    Fashion.open("Fashion.txt",ios::in|ios::out);
    Educ_books.open("Educ_books.txt",ios::in|ios::out);
    Others.open("Others.txt",ios::in|ios::out);
    Sport.open("Sport.txt",ios::in|ios::out);
        string  ElectronicsShow,Sname,price,Quantity,Descrioption,DOE;
    Electronics.open("Electronics.txt",ios::in);
            if(Electronics.fail())
            {
                      cout<<"Error Opening File"<<endl;
            }
            while (getline(Electronics, ElectronicsShow))
      {
          stringstream sss(ElectronicsShow);
          getline(sss, Sname,' ');
          getline(sss,price,' ');
          getline(sss,Quantity,' ');
          getline(sss,Descrioption,' ');
          getline(sss,DOE,' ');
          if(pid==Sname){
        cout<<"Product Name : "<<Sname<<endl;
        cout<<"Product Price : "<<price<<endl;
        cout<<"Product Quantity : "<<Quantity<<endl;
        cout<<"Product Date of Entery : "<<DOE<<endl;
        cout<<endl<<endl;
          }
      }
      cout<<setw(60)<<" Press 1: To Add to Favorite"<<endl;
      cout<<setw(60)<<" Press 2: To Purchase"<<endl;
      cin>>ans;
      switch(ans)
      {
case 1:
        {
            string Username,Userpassword,UserId,custid;
            char x='/';
            cout<<"Please Enter your UserName and password"<<endl;
            cin>>Username;
            cin>>Userpassword;
            UserId=Username+x+Userpassword;
            ifp.open("Cfile.txt",ios::in);
            while(!ifp.eof())
            {
                    ifp>>custid;
                    if(custid==UserId)
                    {
                        break;
                    }
                else{
                    cout<<"Profile Not Found"<<endl;
                }

            }
            ifp.close();
            ofstream addFav;
                addFav.open("Fav.txt",ios::app);
                if(addFav.fail())
                {
                    cout<<"Error Opening Favorite File"<<endl;
                }
                addFav<<UserId<<" "<<Sname<<" "<<price<<" "<<Quantity<<" "<<DOE<<endl;
                addFav.close();
                }

    break;
case 2:
    Purchase(Sname,price,Quantity,DOE);
         break;
         }
}
 void Purchase(string, string ,string Quantity ,string)
          {
              int quantity=0, Qvalue=0;
              cout<<"The Quantiy you want to Buy";
              cin>>quantity;
              stringstream geek(Quantity);
              geek>>Qvalue;
             do {
                    cout<<"We are out of Stock"<<endl;
                    cout<<"We only Have"<<Quantity<<"amount of this Item"<<endl;
                    cout<<"Please Try again"<<endl;
                    cin>>quantity;
                }while(quantity>Qvalue);
                if (quantity<=Qvalue)
                {
                    Qvalue-=quantity;
                    Electronics<<s.name<<" "<<s.price<<" "<<s.quantity<<s.description<<" "<<s.DateOfEntry<<endl;

                }
                Electronics.close();
          }


void Order(){
    unsigned int num;
    string ppid;
    switch(num){
    case 1:
    cout<<setw(60)<<"Enter The product id"<<endl;
    cin>>ppid;
    Serach(string  ppid);
        AddtoFav();
        order();
            break;
    case 2:
        //ShowProduct();
        //Addtofav
        //Order();
    default :



    };



}
  void customer()
  {
      char ch='/',com=',';
    cout<<"Customer Information Entry."<<endl;
    cout<<"\t";
    cout<<"First Name: ";
    cin>>c.fname;
    cout<<"\t";
    cout<<"Last Name: ";
    cin>>c.lname;
    cout<<"\t";
    cout<<"Address: ";
    cin>>c.address;
    cout<<"\t";
    cout<<"Email: ";
    cin>>c.email;
    cout<<"\t";
    cout<<"Telephone: ";
    cin>>c.Telephone;
    cout<<"\t";
    cout<<"User name:  ";
    cin>>c.custusername;
    cout<<"\t";
    cout<<"Password:   ";
    cin>>c.custpassword;
    fp.open("Cfile.txt",ios::out|ios::app);
    if(fp.fail())
        {
         cout<<"Error in opening file";
         exit(0);
        }
    fp<<c.custusername<<ch<<c.custpassword<<com<<c.fname<<com<<c.lname<<com<<c.address<<com<<c.email<<com<<c.Telephone<<com<<endl;
    fp.close();
    cout<<"Your customer information has been successfully entered."<<endl;
      system("cls");
  }
  void supplier()
  {
      char ch='/',com=',';
    cout<<"Supplier Information Entry."<<endl;
    cout<<"\t";
    cout<<"Company Name: ";
    cin>>sup.Compname;
    cout<<"\t";
    cout<<"Address: ";
    cin>>sup.address;
    cout<<"\t";
    cout<<"Email: ";
    cin>>sup.email;
    cout<<"\t";
    cout<<"Telephone: ";
    cin>>c.Telephone;
    cout<<"\t";
    cout<<"User name:  ";
    cin>>sup.supusername;
    cout<<"\t";
    cout<<"Password:   ";
    cin>>sup.suppassword;
    fp.open("Sfile.txt",ios::out|ios::app);
         if(fp.fail())
        {
         cout<<"Error in opening file";
           exit(0);
        }
    fp<<sup.supusername<<ch<<sup.suppassword<<com<<sup.Compname<<com<<sup.address<<com<<sup.email<<com<<endl;
    cout<<"---------------------------------------YOU HAVE SUCESSFULLY ENTERED YOU INFORMATIN----------------------------------------------------------------"<<endl;
  system("cls");
  }
  void custReport ()
  {
     string str;
      cout<<"CUSTOMER PROFILE"<<endl;
      ifp.open("Cfile.txt",ios::in);
      if (ifp.fail())
      {
          cout<<"Error in opening file!!";
      }
      while (!ifp.eof())
      {

       ifp>>str;
       cout<<str<<endl;
      }
      ifp.close();
  }
void singleSupReport(string x)
{
string Line,Compname,Suppid,Address,email;
      cout<<"CUSTOMER PROFILE"<<endl;
      ifp.open("Sfile.txt",ios::in);
      if (ifp.fail())
      {
          cout<<"Error in opening file!!";
      }
      while (getline(ifp, Line))
      {
          stringstream sss(Line);
          getline(sss, Suppid,',');
          getline(sss,Compname,',');
          getline(sss,Address,',');
          getline(sss,email,',');

        if(Suppid==x)
        {
            cout<<"Your Supplier ID: "<<Suppid<<endl;
            cout<<"Company Name: "<<Compname<<endl;
            cout<<"Address :"<<Address<<endl;
            cout<<"Email :" <<email<<endl;
        }
        }
      ifp.close();
}
void singlecustReport(string x)
{
string Line,Fname,Lname,Custid,Address,email;
      cout<<"CUSTOMER PROFILE"<<endl;
      ifp.open("Cfile.txt",ios::in);
      if (ifp.fail())
      {
          cout<<"Error in opening file!!";
          exit(0);
      }
      while (getline(ifp, Line))
      {
          stringstream sss(Line);
          getline(sss, Custid ,',');
          getline(sss,Fname,',');
          getline(sss,Lname,',');
          getline(sss,Address,',');
          getline(sss,email,',');

        if(Custid==x)
        {
            cout<<"Your Customer ID : "<<Custid<<endl;
            cout<<"First Name: "<<Fname<<endl;
            cout<<"Last Name :"<<Lname<<endl;
            cout<<"Address :"<<Address<<endl;
            cout<<"Email :" <<email<<endl;
        }

            }


      ifp.close();



}
  void suppReport ()
  {
    fp<<sup.email<<endl;

    fp.close();
    cout<<"Your supplier information has been successfully entered."<<endl;

  {
      string v;
      cout<<"SUPPLIER PROFILE"<<endl;
      cout<<"\t";
      ifp.open("Sfile.txt",ios::in);
      if (fp.fail())
      {
          cout<<"Error in opening file!!";
      }
      while (!ifp.eof())
      {
       ifp>>v;
       cout<<v;
      }
      ifp.close();
  }
  }
void login()
{
    int choice;
   cout<<setw(60)<<"***************************************"<<endl;
   cout<<setw(60)<<"*           Log In                    *"<<endl;
   cout<<setw(60)<<"*       ENTER YOUR CHOICE             *"<<endl;
   cout<<setw(60)<<"*   PRESS 1 Customer                  *"<<endl;
   cout<<setw(60)<<"*   PRESS 2 Supplier                  *"<<endl;
   cout<<setw(60)<<"*   PRESS 3 Exit                      *"<<endl;
   cout<<setw(60)<<"***************************************"<<endl<<endl;
   cin>>choice;
   switch(choice)
   {
   case 1:
      custlogin();
    break;
   case 2:
       suplogin();
   case 3:
        exit(0);
        }
}
void custlogin()
{
    int  ans;
    bool check=false;
    string mystring;
    string Line;
    string  Username;
    string password;
    string  usepass;
    string Custid;
    cout<<"Enter Your User Name  "<<endl;
    cin>>Username;
    cout<<"Enter Your Password:  "<<endl;
    cin>>password;
    usepass=Username+'/'+password;
    ifp.open("Cfile.txt",ios::in);
    if(ifp.fail())
    {
        cout<<"ERROR OPENING THE FILE"<<endl;
        exit(0);
    }
     while (getline(ifp, Line))
      {
          stringstream sss(Line);
          getline(sss, Custid ,',');
          cout<<Custid<<endl;
       if(usepass==Custid)
       {
        mystring=Custid;
        check=true;
           cout<<"**********************************  Login Successful ********************************************************"<<endl;
       }

    }

    ifp.close();

    if(check==false)
       {
           cout<<setw(60)<<"Username or password Don't match"<<endl;
       }
       if(check==true)
       {
      cout<<setw(60)<<"Press -1 : To See Your Personal Information"<<endl;
      cout<<setw(60)<<"Press -2 : To Purchase"<<endl;
      cin>>ans;
          switch(ans)
          {
      case 1:
                singlecustReport(usepass);
                break;
      case 2:
        Order();
        break;
          }

       }
}
void suplogin()
{
    unsigned int num,x,y;
    char ch;
    string Username;
    string password;
    string usepass;
    cout<<"Enter Your User Name  "<<endl;
    cin>>Username;
    cout<<"Enter Your Password:  "<<endl;
    cin>>password;
    usepass=Username+'/'+password;
     char ans;
    bool check=false;
    string Line;
    string Suppid;
    ifp.open("Sfile.txt",ios::in);
    if(ifp.fail())
    {
        cout<<"ERROR OPENING THE FILE"<<endl;
        exit(0);
    }
     while (getline(ifp, Line))
      {
          stringstream sss(Line);
          getline(sss, Suppid ,',');
       if(usepass==Suppid)
       {
        check=true;
           cout<<"**********************************  Login Successful ********************************************************"<<endl;
       }

    }

    ifp.close();

    if(check==false)
       {
           cout<<setw(60)<<"Username or password Don't match"<<endl;
       }
    else
       {
            do{
            cout<<"Press -1 To See Your Personal Information"<<endl;
            cout<<"Press -2 To Enter Inventory "<<endl;
            cout<<"Press -3 To Display Inventory "<<endl;
            cin>>x;
        switch(x)
            {
case 1:
                singleSupReport(usepass);
                break;
case 2:
            cout<<"1: Electronics"<<endl;
            cout<<"2: Fashion"<<endl;
            cout<<"3: Educational and books"<<endl;
            cout<<"4: Sports"<<endl;
            cout<<"5: Others"<<endl;
            cout<<"Enter your choice: ";
            cin>>num;
    switch(num)
    {
            case 1:
                Order(s);
                electronics(s);
                break;
            case 2:
                Order(s);
                fashion(s);
                break;
            case 3:
                Order(s);
                educ_books(s);
                break;
            case 4:
                Order(s);
                sports(s);
                break;
            case 5:
                Order(s);
                other(s);
                break;
            }
            break;
case 3:
        {
            do{
            cout<<"What type of item are you interested in"<<endl;
            cout<<"1: Electronics"<<endl;
            cout<<"2: Fashion"<<endl;
            cout<<"3: Educational and books"<<endl;
            cout<<"4: Sports"<<endl;
            cout<<"5: Others"<<endl;
            cin>>y;
            switch(y){
            case 1:
                electronicsDisplay();
                break;
            case 2:
                fashionDisplay();
                break;
            case 3:
                eduDisplay();
                break;
            case 4:
                sportsDisplay();
                break;
            case 5:
                othersDispaly();
                break;
            default:
                cout<<"error try again"<<endl;
                break;
            }
            }while(y<1 || y>5);

            break;
        }
            default:
                cout<<"You Have Entered a Wrong Value(PLEASE TRY AGAIN?)"<<endl;
                continue;

}
    cout<<"do you want to do this again? (y/n): ";
    cin>>ch;
    system("cls");
}while(ch=='y'||ch=='Y');
}
mainMenu();
}
int mainMenu()
{
     int s,a,c;
 char q;
 do{
 	system("color f0");
    SetConsoleTitle("E-COMMERCE SYSTEM");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\t LYMN PURCHASING SYSTEM";
	Sleep(1500);
	system ("cls");
//***************************************************************
//    	INTRODUCTION FUNCTION
//****************************************************************

   cout<<setw(60)<<"***************************************"<<endl;
   cout<<setw(60)<<"*    PURCHASING SYSTEM                *"<<endl;
   cout<<setw(60)<<"*            MAIN MENU                *"<<endl;
   cout<<setw(60)<<"*       ENTER YOUR CHOICE             *"<<endl;
   cout<<setw(60)<<"*   PRESS 1 FOR REGISTRATION          *"<<endl;
   cout<<setw(60)<<"*   PRESS 2 Log In                    *"<<endl;
   cout<<setw(60)<<"*   PRESS 3 FOR REPORT                *"<<endl;
   cout<<setw(60)<<"*   PRESS 4 TO EXIT                   *"<<endl;
   cout<<setw(60)<<"***************************************"<<endl<<endl;

    cin>>s;
    system("cls");
    cout<<endl;
    cout<<endl;
 switch(s)
 {
 case 1:
    cout<<setw(60)<<"******************************************************"<<endl;
    cout<<setw(60)<<"*             ENTER YOUR CHOICE                      *"<<endl;
    cout<<setw(60)<<"* PRESS 1 FOR CUSTOMER REGISTRATION                  *"<<endl;
    cout<<setw(60)<<"* PRESS 2 FOR SUPPLIER REGISTRATION                  *"<<endl;
    cout<<setw(60)<<"* PRESS 3 FOR EXIT                                   *"<<endl;
    cout<<setw(60)<<"******************************************************"<<endl<<endl<<endl;
    cin>>a;
    cout<<endl;
    cout<<endl;
    switch(a)
    {
    case 1:
        customer();
        break;
    case 2:
        supplier();
        break;
    case 3:
        break;
    }
    break;
    break;

case 2:
    login();
    break;
case 3:
    cout<<setw(60)<<"******************************************************"<<endl;
    cout<<setw(60)<<"*             ENTER YOUR CHOICE                      *"<<endl;
    cout<<setw(60)<<"*           1.Customer Report                        *"<<endl;
    cout<<setw(60)<<"*           2.Supplier Report                        *"<<endl;
    cout<<setw(60)<<"*           3.Exit.                                  *"<<endl;
    cout<<setw(60)<<"******************************************************"<<endl<<endl<<endl;
    cin>>c;
     switch(c)
    {
    case 1:
        custReport();
        break;
    case 2:
        suppReport();
        break;
    case 3:
        break;
    }
    case 4:
        exit(0);
    default:
        cout<<"Wrong Choice"<<endl;
        mainMenu();

 }
 cout<<"\nDo you want to do this again?(y/n)?";
 cin>>q;
 }while(q=='y'||q=='Y');



       return 0;
}

int main()
{
    mainMenu();

}
