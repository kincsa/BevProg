#include "std_lib_facilities.h"

int main()
{
    cout << "Enter the name of the person you want to write to\n";
    string first_name;
    cin>>first_name;
    cout<<"Dear,"<<first_name<<"!\n"
        <<"How are you? I'm fine, but I miss you.\n"
        <<"I really hope that we can meet in the near future.\n"
        <<"Don't forget to tell me about how you are doing.\n";

     cout<<"Enter the name of an other friend \n";
     string friend_name;
     cin>>friend_name;
     cout<<"Have you seen " <<friend_name<< " lately?\n";

     cout << "Please enter 'm' if your friend is a male, enter 'f' is your friend is a female.\n";

     char friend_sex='0';
     cin>>friend_sex;

    if( friend_sex == 'm')
	{
        cout<<"If you see "<<friend_name<<" please ask him to call me.\n";
	}
	else if( friend_sex == 'f')
	{
	cout<<"If you see "<<friend_name<<" please ask her to call me.\n";
	}

	cout<<"Enter the age of the recipient:\n";
    	int age;
    	cin>>age;

	if(age <= 0 || age >= 110 )
	{
        simple_error("you're kidding!");
	}
	else{ 
	cout<<"I hear you just had a birthday and you are "<<age<<" years old.\n";
	}

	if( age<12 )
	{ 
	cout<<"Next year you will be "<<++age<<"\n";
	}

	else if( age==17 )
	{
	cout<<"Next year you will be able to vote.\n";
	}
	else if( age>70 ) 
	{
	cout<<"I hope you are enjoying retirement.\n";
	}

	cout<<"Yours sincerely,\n\n\n";
	cout<<"Akos\n";
}

