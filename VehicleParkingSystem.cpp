#include<iostream>
#include<process.h>
#include<stdlib.h>

using namespace std;

class Parking{                      //CPP Features used classes and objects


protected:

	int amount;

	int Count;

	int two,three,four;

public:

	Parking(){                       //CPP Features used constructor

		amount=0;
		Count=0;
		two=0;
		three=0;
		four=0;
	}

	void Delet(){
		amount=0;
		Count=0;
		two=0;
		three=0;
		four=0;
		cout<<"**************************************************"<<endl;
		cout<<"All Record deleted......."<<endl;
		cout<<"**************************************************"<<endl;

	}

};

class TwoWheel:virtual public Parking{           //CPP Features used hirarchicale inheritance used in this project



public:

    void t_wheel(){
		if(Count<=50){

			two++;
			amount=amount+100;
			Count=Count+1;
			cout<<"**************************************************"<<endl;
			cout<<"A new TwoWheeler has parked"<<endl;
			cout<<"Total numbers of vehicles "<<Count<<endl;
			cout<<"now free space="<<50-(two+three+four)<<endl;
			cout<<"**************************************************"<<endl;

		}
		else{

			cout<<"Sorry! parking is full"<<endl;

		}

	}

};

class ThreeWheel:virtual public Parking{
public:
	void th_wheel(){
		if(Count<=50){

			three++;
			amount=amount+200;
			Count=Count+1;
			cout<<"**************************************************"<<endl;
			cout<<"A new Three Wheeler has parked"<<endl;
			cout<<"Total numbers of vehicles "<<Count<<endl;
			cout<<"now free space="<<50-(two+three+four)<<endl;
			cout<<"**************************************************"<<endl;

		}

		else{

			cout<<"Sorry! parking is full";

		}

	}

};

class FourWheel:virtual public Parking{

public:

    void f_wheel(){

		if(Count<=50){

			four++;
			amount=amount+300;
			Count=Count+1;
			cout<<"**************************************************"<<endl;
			cout<<"A new FourWheeler has parked"<<endl;
			cout<<"Total numbers of vehicles "<<Count<<endl;
			cout<<"now free space="<<50-(two+three+four)<<endl;
			cout<<"**************************************************"<<endl;

		}

		else{

			cout<<"Sorry! parking is full";

		}

	}

};

class ShowRecord:public TwoWheel,public ThreeWheel,public FourWheel{

public:

   void Show(){

		cout<<"**************************************************"<<endl;
		cout<<"Total amount="<<amount<<endl;
		cout<<"Total numbers of vehicles :"<<Count<<endl;
		cout<<"Total numbers of Two Wheeler :"<<two<<endl;
		cout<<"Total number of Three Wheeler :"<<three<<endl;
		cout<<"Total number of Four Wheeler :"<<four<<endl;
		cout<<"**************************************************"<<endl;

	}

} ;

int main(){

	int u_input;

	ShowRecord s;

	cout<<"**************************************************"<<endl;

	cout<<"VEHICLE PARKING SYSTEM"<<endl;

	cout<<"**************************************************"<<endl;

	cout<<"Parking number of vehicles limit=50"<<endl;

	cout<<"TwoWheeler parking charges\t=100"<<endl;

	cout<<"ThreeWheeler parking charges\t=200"<<endl;

	cout<<"fourWheeler parking charges\t=300"<<endl;

	cout<<"**************************************************"<<endl;

	while(1){

		//Menu

		cout<<"Choose our service........"<<endl;
		cout<<"press 1 for Two Wheeler"<<endl;
		cout<<"press 2 for Three Wheeler"<<endl;
		cout<<"press 3 for Four Wheeler"<<endl;
		cout<<"press 4 for show the record"<<endl;
		cout<<"press 5 for delete the record"<<endl;
		cout<<"press 6 for Exit"<<endl;
		cout<<"**************************************************"<<endl;
		cin>>u_input;

		switch(u_input){

			case 1:

                system("cls");
				s.t_wheel();
				break;

			case 2:

                system("cls");
				s.th_wheel();
				break;

			case 3:

                system("cls");
				s.f_wheel();
				break;

			case 4:

                system("cls");
				s.Show();
				break;

			case 5:

                system("cls");
				s.Delet();
				break;

            case 6:

                exit(0);

			default:{

				system("cls");
				cout<<"**************************************************"<<endl;
				cout<<"WRONG INPUT"<<endl;
				cout<<"**************************************************"<<endl;
			}

		}

	}

	return(0);

}
