#include<conio.h>
#include<iostream>
#include<string>
#include<unistd.h>
#include<fstream>
using namespace std;
void addmodule(int module)
{
	int m,rate,price;
	string p[20],r[20],u[20];
	m=module;
	cout<<endl<<"enter the name of the test"<<endl;
	for(int i=0;i<m;i++)
	{
		cout<<endl<<"enter the parameter name you want in the test "<<endl;
		cin>>p[i];
		cout<<endl<<"enter the basic range of that test "<<endl;
		cin>>r[i];
		cout<<endl<<"enter the unit of the test "<<endl;
		cin>>u[i];

	}
	cout<<"|***********************************************************************************************|"<<endl;
	cout<<"|TEST NAME                  NORMAL RANGE                         VALUE                 UNIT     |"<<endl;
	for(int j=0;j<m;j++)
	{


	    cout<<"|  "<< p[j] <<"                        "<<r[j] <<"                       `    ______                   " <<u[j]<<"     |"<<endl;
	}
	cout<<"|***********************************************************************************************|"<<endl;

	cout<<endl<<"enter the rate for the test "<<endl;
    cin>>rate;
    price=rate+rate/10;
	cout<<endl<<endl<<"The cost for this cost will be = base cost ("<<rate<<") + 10% G.S.T. = "<<price<<endl;
 }
void bill(int y)
{

	int billfor,gst,cost ,total_cost;

	billfor=y;
    if(billfor==1)
	{
		cost=1000;
		gst=1000/10;
		total_cost=cost+gst;

		cout<<endl<<"Total bill for BLOOD test = test charges + 10% gst on test charges = "<<total_cost;
	}

	else if(billfor==2)
	{
		cost=700;
		gst=700/10;
		total_cost=cost + gst;
			cout<<endl<<"Total bill for URINE test = test charges + 10% gst on test charges = "<<total_cost;
	}

	else if(billfor==3)
	{
		cost=500;
		gst=500/10;
		total_cost=cost + gst;
			cout<<endl<<"Total bill for SUGAR test = test charges + 10% gst on test charges = "<<total_cost;
	}


	else if(billfor==4)
	{
		cost=800;
		gst=800/10;
		total_cost=cost + gst;
			cout<<endl<<"Total bill for XRAY = test charges + 10% gst on test charges = "<<total_cost;
	}

	else if(billfor==5)
	{
		cost=1500;
		gst=1500/10;
		total_cost=cost + gst;
			cout<<endl<<"Total bill for FULL BODY test = test charges + 10% gst on test charges = "<<total_cost;
	}
	else
	{
		cout<<"select correctly please";

	}


}
void reports(int x)
{
	int reportfor;

	reportfor=x;

	if (reportfor==1)
	{
		cout<<"your blood test reports are "<<endl<<endl;
		cout<<"|**********************************************************************|"<<endl;

		cout<<"| TEST NAME         NORMAL RANGE       VALUE            UNIT           |"<<endl;

		cout<<"| Hemoglobine       11.5-16.5          _________        gm/dl          |"<<endl;

		cout<<"| Neutrophile       40-75              _________        %              |"<<endl;

		cout<<"| Lymphocite        20-45              _________        %              |"<<endl;

		cout<<"| Monocyte          2-10               _________        %              |"<<endl;

		cout<<"| M C H             27.0-31.0          _________        Picogram       |"<<endl;

		cout<<"| M C H C           33-37              _________        gm/dl          |"<<endl;

		cout<<"| Platelet count    1.5-4.0            _________        lakh/cmm       |"<<endl;

		cout<<"| R B C count       3.8-4.8            _________        millions/cmm   |"<<endl;

		cout<<"| Basophil          00-00              _________        %              |"<<endl;

		cout<<"| TLC               4000-11000         _________        /cumm          |"<<endl;

	    cout<<"|**********************************************************************|"<<endl;
	}

	else if(reportfor==2)

	{
			cout<<"your urine test reports are "<<endl<<endl;

		cout<<"|**********************************************************************|"<<endl;

		cout<<"| TEST NAME         NORMAL RANGE       VALUE            UNIT           |"<<endl;

		cout<<"| Eqinephrine       10-20              _________        µg/24h         |"<<endl;

		cout<<"| Metanephrine      0-10000            _________        µg/24h         |"<<endl;

		cout<<"| Norepinephrine    15-80              _________        µg/24h         |"<<endl;

		cout<<"| Normetanephrine   109-500            _________        µg/24h         |"<<endl;

		cout<<"| Dopamine          65-400             _________        µg/24h         |"<<endl;

	    cout<<"|**********************************************************************|"<<endl;

	}

	else if(reportfor==3)

	{

		cout<<"|**********************************************************************|"<<endl;

		cout<<"| TEST NAME              NORMAL RANGE        VALUE           UNIT      |"<<endl;

		cout<<"| BLOOD GLUCOSE(F)       60 -100            _________        mgs/dl    |"<<endl;

		cout<<"| BLOOD GLUCOSE(PP)      100-150            _________        mgs/dl    |"<<endl;

	    cout<<"|**********************************************************************|"<<endl;

	}

	else if (reportfor==4)
	{
	    cout<<" Your X-Rays report is "<<endl;
	    cout<<"|******************************************************************************|"<<endl;

	   	cout<<"|     X-RAY REPORT:-                                                           |"<<endl;

	    cout<<"|                                                                              |"<<endl;

		cout<<"|                                                                              |"<<endl;

	    cout<<"|                  .       .                                                   |"<<endl;
	    cout<<"|                   .     .      .....            .       .       .            |"<<endl;
	    cout<<"|                    .   .       .    .          . .       .     .             |"<<endl;
		cout<<"|                     . .        .     .        .   .       .   .              |"<<endl;
		cout<<"|                      .    --   .   .         .     .       . .               |"<<endl;
	    cout<<"|                     . .        .  .         .........       .                |"<<endl;
		cout<<"|                    .   .       .    .      .         .      .                |"<<endl;
		cout<<"|                   .     .      .      .   .           .     .                |"<<endl;
		cout<<"|                  .       .     .       . .             .    .                |"<<endl;

		cout<<"|                                                                              |"<<endl;

	    cout<<"|                                                                              |"<<endl;

		cout<<"|                                                                              |"<<endl;

		cout<<"|******************************************************************************|"<<endl;
	}

	else if(reportfor==5)
	{
	    cout<<"Your full body scan reports are here "<<endl;

		cout<<"|**********************************************************************|"<<endl;

		cout<<"| TEST NAME         NORMAL RANGE       VALUE            UNIT           |"<<endl;

		cout<<"| Hemoglobine       11.5-16.5          _________        gm/dl          |"<<endl;

		cout<<"| Neutrophile       40-75              _________        %              |"<<endl;

		cout<<"| Lymphocite        20-45              _________        %              |"<<endl;

		cout<<"| Monocyte          2-10               _________        %              |"<<endl;

		cout<<"| M C H             27.0-31.0          _________        Picogram       |"<<endl;

		cout<<"| M C H C           33-37              _________        gm/dl          |"<<endl;

		cout<<"| Platelet count    1.5-4.0            _________        lakh/cmm       |"<<endl;

		cout<<"| R B C count       3.8-4.8            _________        millions/cmm   |"<<endl;

		cout<<"| Basophil          00-00              _________        %              |"<<endl;

		cout<<"| TLC               4000-11000         _________        /cumm          |"<<endl;

		cout<<"| Eqinephrine       10-20              _________        µg/24h         |"<<endl;

		cout<<"| Metanephrine      0-10000            _________        µg/24h         |"<<endl;

		cout<<"| Norepinephrine    15-80              _________        µg/24h         |"<<endl;

		cout<<"| Normetanephrine   109-500            _________        µg/24h         |"<<endl;

		cout<<"| Dopamine          65-400             _________        µg/24h         |"<<endl;

		cout<<"| BLOOD GLUCOSE(F)  60 -100            _________        mgs/dl         |"<<endl;

		cout<<"| BLOOD GLUCOSE(PP) 100-150            _________        mgs/dl         |"<<endl;

	    cout<<"|**********************************************************************|"<<endl;

	    cout<<"|******************************************************************************|"<<endl;

	   	cout<<"|     X-RAY REPORT:-                                                           |"<<endl;

	    cout<<"|                                                                              |"<<endl;

		cout<<"|                                                                              |"<<endl;

	    cout<<"|                  .       .                                                   |"<<endl;
	    cout<<"|                   .     .      .....            .       .       .            |"<<endl;
	    cout<<"|                    .   .       .    .          . .       .     .             |"<<endl;
		cout<<"|                     . .        .     .        .   .       .   .              |"<<endl;
		cout<<"|                      .    --   .   .         .     .       . .               |"<<endl;
	    cout<<"|                     . .        .  .         .........       .                |"<<endl;
		cout<<"|                    .   .       .    .      .         .      .                |"<<endl;
		cout<<"|                   .     .      .      .   .           .     .                |"<<endl;
		cout<<"|                  .       .     .       . .             .    .                |"<<endl;

		cout<<"|                                                                              |"<<endl;

	    cout<<"|                                                                              |"<<endl;

		cout<<"|                                                                              |"<<endl;

		cout<<"|******************************************************************************|"<<endl;




	}

}
class diagnostic
{
                            // initilazing the data members
	public:
    char pname[25];
	char gender[8];
	string address;
	int adhaarno,pid,age;
	char bloodgroup[5];

                          //taking details of the patient

	void details()
	{
		cout<<"Enter the name of the patient"<<endl;
		cin>>pname;

		cout<<"Enter the gender of the patient"<<endl;
		cin>>gender;

		cout<<"Enter the blood group of the patient"<<endl;
		cin>>bloodgroup;

		cout<<"Enter the age of the patient"<<endl;
		cin>>age;

		cout<<"Enter the address of the student "<<endl;
		cin>>address;

		cout<<"Enter your adhaar number "<<endl;
		cin>>adhaarno;

		ofstream fout;

	    fout.open("C:\\Users\\sagar\\OneDrive\\Desktop\\diagnostic.txt",ios::app);   //file handeling

	    fout<<pname<<endl;

	    fout<<adhaarno<<endl;

	    fout.close();

	}

};
                                                            //end of the base class


                                                            // class for the old patient
class old_patient : public diagnostic
{
	private:
		int pid,time,choice;

		public:
			void match()
			{
				cout<<"enter your patient id "<<endl;
				cin>>pid;

				if (pid==adhaarno||pid==1234567||pid==1111111||pid==0000000)
				{
					cout<<"welcome again "<<endl;

					cout<<" Enter the test you want to take "<<endl;

					cout<<" 1. BLOOD TEST          :"<<endl;

					cout<<" 2. URINE TEST          :"<<endl;

					cout<<" 3. SUGAR/DIABETES TEST :"<<endl;

					cout<<" 4. X-RAY/MRI/C.T.SCAN  :"<<endl;

					cout<<" 5. FULL BODY TEST      :"<<endl;

					cout<<" 6. EXIT.                "<<endl;

					cin>>choice;



						switch (choice)						// switch condition
				{
				case 1:

					cout << endl << "You have choosen for blood test  :"<<endl;

					cout<<endl<<"choose the time (in 24hour format and hour only ) "<<endl;

					cin>>time;

				    cout<<endl<<"your appointment for blood test is booked at "<<time<<" hours"<<endl;

					 cout<<endl<<" PLEASE GIVE YOUR SAMPLE "<<endl;

					for(int i=0;i<10;i++)
					{
						cout<<" * ";
						sleep(1);
					}

					cout<<endl;

					reports(choice);

					bill(choice);

					break;

				case 2:

					 	cout << endl << "You have choosen for urine test  :"<<endl;

					cout<<endl<<"choose the time (in 24hour format and hour only ) "<<endl;

					cin>>time;

					cout<<endl<<"your appointment for urine test is booked at "<<time<<" hours"<<endl;

				    cout<<endl<<" PLEASE GIVE YOUR SAMPLE "<<endl;

					for(int i=0;i<10;i++)
					{
						cout<<" * ";
						sleep(1);
					}

					cout<<endl;

						reports(choice);
					bill(choice);
					break;



				case 3:

						cout << endl << "You have choosen for sugar/diabetes test  :"<<endl;

					cout<<endl<<"choose the time (in 24hour format and hour only ) "<<endl;

					cin>>time;

					cout<<endl<<"your appointment for sugar/diabetes test is booked at "<<time<<" hours"<<endl;

				   	cout<<endl<<" PLEASE GIVE YOUR SAMPLE "<<endl;

					for(int i=0;i<10;i++)
					{
						cout<<" * ";
						sleep(1);
					}

					cout<<endl;

					reports(choice);
					bill(choice);
					break;


				case 4:
						cout << endl << "You have choosen for X-Ray/MRI/C.T.Scan :"<<endl;

					cout<<endl<<"choose the time (in 24hour format and hour only ) "<<endl;

					cin>>time;

					cout<<endl<<"your appointment for X-Ray/MRI/C.T.Scan is booked at "<<time<<" hours"<<endl;

				    cout<<endl<<" PLEASE GIVE YOUR SAMPLE "<<endl;

					for(int i=0;i<10;i++)
					{
						cout<<" * ";
						sleep(1);
					}

					cout<<endl;

					reports(choice);
					bill(choice);
					break;




				case 5:
						cout << endl << "You have choosen for full body scan  :"<<endl;

					cout<<endl<<"choose the time (in 24hour format and hour only ) "<<endl;

					cin>>time;

					cout<<endl<<"your appointment for full body scan is booked at "<<time<<" hours"<<endl;

					cout<<endl<<" PLEASE GIVE YOUR SAMPLE "<<endl;

					for(int i=0;i<10;i++)
					{
						cout<<" * ";
						sleep(1);
					}

					cout<<endl;

					reports(choice);
					bill(choice);
					break;

				case 6:

				         exit(0);

				default:

					 cout<<endl<<"wrong input "<<endl;

				}

			}

			else
				{
					cout<<endl<<"you have entered wrong patient id"<<endl;
				}


}
};

                                                                          // class for the new patient
 class new_patient:public diagnostic
 {
 public:

 	int choice,time;

 	void  show()
 	{

 	cout<<"welcome to the diagnostic center "<<endl;

					cout<<endl<<" Enter the test you want to take "<<endl;

					cout<<" 1. BLOOD TEST          :"<<endl;

					cout<<" 2. URINE TEST          :"<<endl;

					cout<<" 3. SUGAR/DIABETES TEST :"<<endl;

					cout<<" 4. X-RAY/MRI/C.T.SCAN  :"<<endl;

					cout<<" 5. FULL BODY TEST      :"<<endl;

					cout<<" 6. EXIT.                "<<endl;

						cin>>choice;


						switch (choice)						// switch condition
				{
				case 1:

					cout << endl << "You have choosen for blood test  :"<<endl;

					cout<<endl<<"choose the time (in 24hour format and hour only ) "<<endl;

					cin>>time;

					cout<<endl<<"your appointment for blood test is booked at "<<time<<" hours"<<endl;

					cout<<endl<<" PLEASE GIVE YOUR SAMPLE "<<endl;

					for(int i=0;i<10;i++)
					{
						cout<<" * ";
						sleep(1);
					}

					cout<<endl;

					reports(choice);
					bill(choice);
					break;

				case 2:
						cout << endl << "You have choosen for urine test  :"<<endl;

					cout<<endl<<"choose the time (in 24hour format and hour only ) "<<endl;

					cin>>time;

					cout<<endl<<"your appointment for urine test is booked at "<<time<<" hours"<<endl;

					cout<<endl<<" PLEASE GIVE YOUR SAMPLE "<<endl;

					for(int i=0;i<10;i++)
					{
						cout<<" * ";
						sleep(1);
					}

					cout<<endl;

					reports(choice);
					bill(choice);
					break;
				case 3:
						cout << endl << "You have choosen for sugar/diabetes test  :"<<endl;

					cout<<endl<<"choose the time (in 24hour format and hour only ) "<<endl;

					cin>>time;

					cout<<endl<<"your appointment for sugar/diabetes test is booked at "<<time<<" hours"<<endl;

					cout<<endl<<" PLEASE GIVE YOUR SAMPLE "<<endl;

					for(int i=0;i<10;i++)
					{
						cout<<" * ";
						sleep(1);
					}

					cout<<endl;

					reports(choice);
					bill(choice);
					break;

				case 4:
						cout << endl << "You have choosen for X-Ray/MRI/C.T.Scan :"<<endl;

					cout<<endl<<"choose the time (in 24hour format and hour only ) "<<endl;

					cin>>time;

					cout<<endl<<"your appointment for X-ray/MRI/C.T.Scan is booked at "<<time<<" hours"<<endl;

					cout<<endl<<" PLEASE GIVE YOUR SAMPLE "<<endl;

					for(int i=0;i<10;i++)
					{
						cout<<" * ";
						sleep(1);
					}

					cout<<endl;

					reports(choice);
					bill(choice);
					break;

				case 5:
						cout << endl << "You have choosen for full body scan  :"<<endl;

					cout<<endl<<"choose the time (in 24hour format and hour only ) "<<endl;

					cin>>time;

					cout<<endl<<"your appointment for full body test is booked at "<<time<<" hours"<<endl;

					cout<<endl<<" PLEASE GIVE YOUR SAMPLE "<<endl;

					for(int i=0;i<10;i++)
					{
						cout<<" * ";
						sleep(1);
					}

					cout<<endl;

					reports(choice);
					bill(choice);
					break;

				case 6:

				exit(0);

				default:

					 cout<<endl<<"wrong input "<<endl;

				}

    }

 };


 class laboratrist
 {
 	int test,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,u1,u2,u3,u4,u5,g1,g2;

 	public:

		 void input(int i)

		 {
 			test=i;

		 	if(test==1)
 			{

			 	cout<<endl<< " enter HEMOGLOBINE(11.5-16.5) count for the patient "<<endl;

			 	cin>>b1;

			 		cout<<endl<< " enter NEUTROPHILE(40-75) % for the patient "<<endl;

			 	cin>>b2;

			 		cout<<endl<< " enter LYMPHOCITE(20-45) % for the patient "<<endl;

			 	cin>>b3;

			 		cout<<endl<< " enter MONOCYTE(2-10) % for the patient "<<endl;

			 	cin>>b4;

			 		cout<<endl<< " enter M C H (27.0-31.0) count for the patient "<<endl;

			 	cin>>b5;

			 		cout<<endl<< " enter M C H C (33.-37.0) count for the patient "<<endl;

			 	cin>>b6;

			 		cout<<endl<< " enter PLATELET (1.5-4.0) count for the patient "<<endl;

			 	cin>>b7;

			 		cout<<endl<< " enter R B C (3.8-4.8) count for the patient "<<endl;

			 	cin>>b8;

			 		cout<<endl<< " enter BASOPHILE(0-0)  % for the patient "<<endl;

			 	cin>>b9;

			 		cout<<endl<< " enter T L C (4000-11000) count for the patient "<<endl;

			 	cin>>b10;





                	cout<<endl<<"your blood test reports are "<<endl;
		cout<<"|**********************************************************************|"<<endl;

		cout<<"| TEST NAME         NORMAL RANGE       VALUE            UNIT           |"<<endl;

		cout<<"| Hemoglobine       11.5-16.5         "<< b1 <<"           gm/dl          |"<<endl;

		cout<<"| Neutrophile       40-75             "<< b2 <<"        %              |"<<endl;

		cout<<"| Lymphocite        20-45             "<< b3 <<"         %              |"<<endl;

		cout<<"| Monocyte          2-10              "<< b4 <<"         %              |"<<endl;

		cout<<"| M C H             27.0-31.0         "<< b5 <<"         Picogram       |"<<endl;

		cout<<"| M C H C           33-37             "<< b6 <<"         gm/dl          |"<<endl;

		cout<<"| Platelet count    1.5-4.0           "<< b7 <<"         lakh/cmm       |"<<endl;

		cout<<"| R B C count       3.8-4.8           "<< b8 <<"         millions/cmm   |"<<endl;

		cout<<"| Basophil          00-00             "<< b9 <<"          %              |"<<endl;

		cout<<"| TLC               4000-11000        "<< b10 <<"         /cumm          |"<<endl;

	    cout<<"|**********************************************************************|"<<endl;


			 }

			 else if(test ==2)
			 {
			 	cout<<endl<< " enter EQINEPHRINE(10-20) count for the patient "<<endl;

			 	cin>>u1;

			 		cout<<endl<< " enter METANEPHRINE(0-10000) count for the patient "<<endl;

			 	cin>>u2;

			 		cout<<endl<< " enter NOREPINEPHRINE(15-80) count for the patient "<<endl;

			 	cin>>u3;

			 		cout<<endl<< " enter NORMETANPHRINE(109-500) count for the patient "<<endl;

			 	cin>>u4;

			 		cout<<endl<< " enter DOPSMINE (65-400) count for the patient "<<endl;

			 	cin>>u5;

 				cout<<endl<<"your test reports are :"<<endl;

 		cout<<"|**********************************************************************|"<<endl;

		cout<<"| TEST NAME         NORMAL RANGE       VALUE            UNIT           |"<<endl;

		cout<<"| Eqinephrine       10-20              "<< u1 <<"         µg/24h         |"<<endl;

		cout<<"| Metanephrine      0-10000            "<< u1 <<"        µg/24h         |"<<endl;

		cout<<"| Norepinephrine    15-80              "<< u1 <<"        µg/24h         |"<<endl;

		cout<<"| Normetanephrine   109-500            "<< u1 <<"        µg/24h         |"<<endl;

		cout<<"| Dopamine          65-400             "<< u1 <<"        µg/24h         |"<<endl;

	    cout<<"|**********************************************************************|"<<endl;

			 }

			 else if(test==3)
			 {
			 		cout<<endl<< " enter BLOOD GLUCOSE(F) (60-100) count for the patient "<<endl;

			 	cin>>g1;

			 		cout<<endl<< " enter BLOOD GLUCOSE(PP) (100-150) count for the patient "<<endl;

			 	cin>>g2;


 					cout<<endl<<"your test reports are :"<<endl;

 		cout<<"|**********************************************************************|"<<endl;

		cout<<"| TEST NAME              NORMAL RANGE        VALUE           UNIT      |"<<endl;

		cout<<"| BLOOD GLUCOSE(F)       60 -100            "<< g1 <<"        mgs/dl    |"<<endl;

		cout<<"| BLOOD GLUCOSE(PP)      100-150            "<< g2 <<"        mgs/dl    |"<<endl;

	    cout<<"|**********************************************************************|"<<endl;
			 }

			 else if(test==4)
			 {
			 	cout<<endl<<"Report for X-ray will be generated by machine only "<<endl;
			 }

			 else if(test==5)
			 {

				 	cout<<endl<< " enter HEMOGLOBINE(11.5-16.5) count for the patient "<<endl;

				 cin>>b1;

			 		cout<<endl<< " enter NEUTROPHILE(40-75) % for the patient "<<endl;

			 	cin>>b2;

			 		cout<<endl<< " enter LYMPHOCITE(20-45) % for the patient "<<endl;

			 	cin>>b3;

			 		cout<<endl<< " enter MONOCYTE(2-10) % for the patient "<<endl;

			 	cin>>b4;

			 		cout<<endl<< " enter M C H (27.0-31.0) count for the patient "<<endl;

			 	cin>>b5;

				 	cout<<endl<< " enter M C H C (33.-37.0) count for the patient "<<endl;


				 cin>>b6;

				 	cout<<endl<< " enter PLATELET (1.5-4.0) count for the patient "<<endl;

				 cin>>b7;

				 	cout<<endl<< " enter R B C (3.8-4.8) count for the patient "<<endl;

				 cin>>b8;

				 	cout<<endl<< " enter BASOPHILE(0-0)  % for the patient "<<endl;

				 cin>>b9;

				 	cout<<endl<< " enter T L C (4000-11000) count for the patient "<<endl;

				 cin>>b10;

				 	cout<<endl<< " enter EQINEPHRINE(10-20) count for the patient "<<endl;

				 cin>>u1;

				 	cout<<endl<< " enter METANEPHRINE(0-10000) count for the patient "<<endl;

				 cin>>u2;

				 	cout<<endl<< " enter NOREPINEPHRINE(15-80) count for the patient "<<endl;

				 cin>>u3;

				 	cout<<endl<< " enter NORMETANPHRINE(109-500) count for the patient "<<endl;

				 cin>>u4;

				 	cout<<endl<< " enter DOPSMINE (65-400) count for the patient "<<endl;

				 cin>>u5;

				 	cout<<endl<< " enter BLOOD GLUCOSE(F) (60-100) count for the patient "<<endl;

				 cin>>g1;

				 	cout<<endl<< " enter BLOOD GLUCOSE(PP) (100-150) count for the patient "<<endl;

				 cin>>g2;


 				cout<<endl<<"your report are :"<<endl;
		cout<<"|**********************************************************************|"<<endl;

		cout<<"| TEST NAME         NORMAL RANGE       VALUE            UNIT           |"<<endl;

		cout<<"| Hemoglobine       11.5-16.5         "<< b1 <<"        gm/dl          |"<<endl;

		cout<<"| Neutrophile       40-75             "<< b2 <<"        %              |"<<endl;

		cout<<"| Lymphocite        20-45             "<< b3 <<"         %              |"<<endl;

		cout<<"| Monocyte          2-10              "<< b4 <<"         %              |"<<endl;

		cout<<"| M C H             27.0-31.0         "<< b5 <<"         Picogram       |"<<endl;

		cout<<"| M C H C           33-37             "<< b6 <<"         gm/dl          |"<<endl;

		cout<<"| Platelet count    1.5-4.0           "<< b7 <<"         lakh/cmm       |"<<endl;

		cout<<"| R B C count       3.8-4.8           "<< b8 <<"         millions/cmm   |"<<endl;

		cout<<"| Basophil          00-00             "<< b9 <<"          %              |"<<endl;

		cout<<"| TLC               4000-11000        "<< b10 <<"         /cumm          |"<<endl;

    	cout<<"| Eqinephrine       10-20              "<< u1 <<"         µg/24h         |"<<endl;

		cout<<"| Metanephrine      0-10000            "<< u1 <<"        µg/24h         |"<<endl;

		cout<<"| Norepinephrine    15-80              "<< u1 <<"        µg/24h         |"<<endl;

		cout<<"| Normetanephrine   109-500            "<< u1 <<"        µg/24h         |"<<endl;

		cout<<"| Dopamine          65-400             "<< u1 <<"        µg/24h         |"<<endl;

       	cout<<"| BLOOD GLUCOSE(F)   60 -100           "<< g1 <<"        mgs/dl         |"<<endl;

		cout<<"| BLOOD GLUCOSE(PP)  100-150            "<< g2 <<"        mgs/dl        |"<<endl;

	    cout<<"|**********************************************************************|"<<endl;
			 }

			 else if(test==6)
			 {
			 	exit(0);

			 }

			 else
			 {
			 	cout<<endl<<"wrong input"<<endl;

			 }
		 }

 };



int main()
{
  do{

    int patient_type;
	cout<<endl;
	cout<<"|************************************************************|"<<endl;

	cout<<"| Welcome to the LPU Diagnostic centre .                     |"<<endl;

	cout<<"| Choose wheather you are a new patient or an old patient.   |"<<endl;

	cout<<"| (A): For patient side:                                     |"<<endl;

	cout<<"| For New patient type  :-     1                             |"<<endl;

	cout<<"| For Old patient type  :-     2                             |"<<endl;

	cout<<"| (B): For Laboratrist  :-     3                             |"<<endl;

	cout<<"| (C): To check rate lists:-   4                             |"<<endl;

	cout<<"| (D): ADMIN to add new test:- 5                             |"<<endl;

    cout<<"| To Exit press :-             6                             |"<<endl;
	cout<<"|************************************************************|"<<endl;

	cin>>patient_type;

	if(patient_type==1)
	{
		new_patient p1;

		p1.details();


		p1.show();
	}

	else if(patient_type==2)

	{
		old_patient o1;

		o1.match();
	}
	else if(patient_type==3)

	{
		int t1;
	 laboratrist l1;

	 	            cout<<"welcome again "<<endl;

					cout<<" Enter the test you want to take "<<endl;

					cout<<" 1. BLOOD TEST          :"<<endl;

					cout<<" 2. URINE TEST          :"<<endl;

					cout<<" 3. SUGAR/DIABETES TEST :"<<endl;

					cout<<" 4. X-RAY/MRI/C.T.SCAN  :"<<endl;

					cout<<" 5. FULL BODY TEST      :"<<endl;

					cout<<" 6. EXIT.                "<<endl;
	 cin>>t1;

	 l1.input(t1);


	}

	else if(patient_type==4)
	{
		int whichtest;

	    	cout<<endl<<"which tests bill you want to check "<<endl;

			cout<<" Enter the test you want to take "<<endl;

			cout<<" 1. BLOOD TEST          :"<<endl;

			cout<<" 2. URINE TEST          :"<<endl;

			cout<<" 3. SUGAR/DIABETES TEST :"<<endl;

			cout<<" 4. X-RAY/MRI/C.T.SCAN  :"<<endl;

			cout<<" 5. FULL BODY TEST      :"<<endl;

		cin>>whichtest;

	    bill(whichtest);
	}

		else if(patient_type==5)
	{
		int admin;
		cout<<endl<<"How many categories you want in your test "<<endl;
		cin>>admin;
		addmodule(admin);
	}
	else if(patient_type==6)
	{
		exit(0);
	}



	else
	{
		cout<<endl<<" you have entered the wrong input please select again"<<endl;
	}
}
while(1);

	return 0;
}
