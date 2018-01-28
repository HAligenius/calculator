#include<iostream>
#include<conio.h>
using namespace std;
	class calculator{
		public:
			double a , b ;
	
	
	void setdata()
	{
		cout<<"Enter First Operand"<<endl;
		cin>>a;
		cout<<"Enter Second Operand"<<endl;
		cin>>b;
	}
	void add()
	{
		cout<<"Addition"<<endl;
		cout<<a+b<<endl;
	}
		void subs()
	{
		cout<<"Substract"<<endl;
		cout<<a-b<<endl;
	}
		void multi()
	{
		cout<<"Multiplication"<<endl;
		cout<<a*b<<endl;
	}
		void div()
	{
		cout<<"Division"<<endl;
		cout<<a/b<<endl;
	}

	};
	class  table
	{
	public:
		int tt;
		public:
		void givedata(){
			cout<<"Enter Any Table Number"<<endl;
			cin>>tt;
		}
		void showdata()
		{
			for(int i=1; i<=10; i++)
			{
			
				cout<<i<<"x"<<tt<<"="<<i*tt<<endl;
			}
		}
	};
	class percentage 
	{
		public:
			double obt , total, per;
			public:
	void gaindata(){
		
	cout<<"Enter Obtain  Value"<<endl;
	cin>>obt;
	cout<<"Enter Total Value"<<endl;
	cin>>total;
	}	
	void showvalue(){
		per=(obt/total)*100;
	cout<<"Percentage"<<endl;
	cout<<per<<"%"<<endl;
	}
		
	};
	int main(){
		char op;
		char ch;
		char w;
			calculator cal1;
		table tab;
		percentage pe;
		cout<<"##################################################"<<endl;
		cout<<"\tCalculator|Table|Percentage"<<endl;
		cout<<"##################################################"<<endl;
		do{
		
			cout<<"Enter Calculator For c , Table For t ,Percentage For p"<<endl;
		cin>>ch;
			if(ch== 't')
		{
			tab.givedata();
			tab.showdata();
		}
		else if(ch=='p'){
			pe.gaindata();
			pe.showvalue();
		}
		else if(ch=='c'){
				cal1.setdata();
		cout<<"Enter Any Operator"<<endl;
		cin>>op;
		switch(op){
			case '+':
		cal1.add();
		break;
        case '-':
		cal1.subs();
		break;
		case '*':
		cal1.multi();
		break;
		case '/':
		cal1.div();	
		break;	
	}}
	cout<<"Do You Want Continue y/n"<<endl;
	cin>>w;
}
	while(w!='n');
		getch();
	}
	
	

