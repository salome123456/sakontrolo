#include <bits/stdc++.h>
using namespace std;

class Pet{
	public:
	Pet(){ }
	string saxeli,feri,wona;
	Pet(string saxeli,string feri,string wona){
		this->saxeli=saxeli;
		this->feri=feri;
		this->wona=wona;
	}
 void PrintPet(){
 	cout<<saxeli<<" "<<feri<<" "<<wona;
 }
};
class Dog:public Pet{
	public:
	string jishi;
	Dog(string saxeli,string feri,string wona,string jishi):Pet(saxeli, feri, wona){
		this->saxeli=saxeli;
		this->feri=feri;
		this->wona=wona;
		this->jishi=jishi;
	}
	void PrintDog(){
 	cout<<saxeli<<" "<<feri<<" "<<wona<<" "<<jishi;
 }
};
class Cat:public Pet{
	public:
	string bewvi;
	Cat(string saxeli,string feri,string wona,string bewvi):Pet(saxeli, feri, wona){
	this->saxeli=saxeli;
		this->feri=feri;
		this->wona=wona;
		this->bewvi=bewvi;	
	}
		void PrintCat(){
 	cout<<saxeli<<" "<<feri<<" "<<wona<<" "<<bewvi;
 }
};
class Parrot:public Pet{
	public:
		string laparakisun;
		Cat(string saxeli,string feri,string wona,string laparakisun):Pet(saxeli, feri, wona){
		this->saxeli=saxeli;
		this->feri=feri;
		this->wona=wona;
		this->laparakisun=laparakisun;
		}
	void PrintParrot(){
 	cout<<saxeli<<" "<<feri<<" "<<wona<<" "<<laparakisun;
 }
};
int main (){
	Pet p;
	Dog d;
	Cat c;
	Parrot par;
	cin>>p.saxeli>>p.feri>>p.wona;
	cin>>d.saxeli>>d.feri>>d.wona>>d.jishi;
	cin>>c.saxeli>>c.feri>>c.wona>>c.bewvi;
	cin>>par.saxeli>>par.feri>>par.wona>>par.laparakisun;
	p.PrintPet();
	d.PrintDog();
	c.PrintCat();
	par.PrintParrot();

}

