#include <iostream>

using namespace std;

class a

{

	char name[20];

	public :

		void read()

		{

			cout<<"enter name : ";

			cin>>name;

		}

		void show()

		{

			cout<<"name : "<<name<<endl;

		}

};



class b: public a

{

	int rn;

	public :

		void read()

		{

            a::read();

			cout<<"enter roll no : ";

			cin>>rn;

		}

		void show()

		{

			a::show();

			cout<<"roll no : "<<rn<<endl;

		}

};

class c : public a

{

	char br[10];

	public :

		void read()

		{

			cout<<"enter branch : ";

			cin>>br;

		}

		void show()

		{

			cout<<"branch : "<<br<<endl;

		}

};

class d : public b,public c

{

	int en;

	public :

		void read()

		{   b::read();

		    c::read();

			cout<<"enter enrollment : ";

			cin>>en;

		}

		void show()

		{

			b::show();

		    c::show();

			cout<<"enrollment : "<<en<<endl;

		}

};

int main()

{

	d x;

	cout<<"enter data : \n";

	x.read();

	cout<<"your detail : \n";

	x.show();

	return 0;

}
