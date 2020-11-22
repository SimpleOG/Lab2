#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int main()

{
	setlocale(LC_ALL, "RUS");

	int a,b,c,d;
	cout<<"¬ведите числа"<<endl;
	cin>>a>>b>>c>>d;

	if(b==c&&c==d){
        cout<<"1"<<endl;
	}
	if(a==c&&c==d){
        cout<<"2"<<endl;
        	}
     if(a==b&&b==d){
        cout<<"3"<<endl;
     }
	 if(a==b&&b==c){
        cout<<"4"<<endl;
	 }
}

