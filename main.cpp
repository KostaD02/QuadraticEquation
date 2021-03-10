#include <iostream>
#include <cmath>

using namespace std;

class Kvad{
	private:
		double a;
		double b;
		double c;
	public:
		Kvad(double A=0,double B=0,double C=0){
			SetPar(A,B,C);
		}
		void SetPar(double A,double B,double C){
			a= (A==0) ? 1 : A;
			b=B; 
			c=C;
		}
		double Disc(){
			return b*b-4*a*c;
		}	
		double Re(){
			return -b/(2*a);
		}
		double Im(){
			return sqrt(fabs(Disc()))/(2*a);
		}
		void InputData(){
			cout<<"A=";cin>>a;
			cout<<"B=";cin>>b;
			cout<<"C=";cin>>c;
			SetPar(a,b,c);
		}
		void DisplayData(){
			if(Disc()==0){
				cout<<"X="<<Re()<<endl;	
			}
			if(Disc()>0){
				cout<<"X1="<<Re()-Im()<<endl;
				cout<<"X2="<<Re()+Im()<<endl;
			}
			if(Disc()<0){
				cout<<"X1="<<Re()<<"-i*"<<Im()<<endl;
				cout<<"X2="<<Re()<<"+i*"<<Im()<<endl;
			}
		}
};

int main(int argc, char** argv) {
	Kvad A;A.InputData();A.DisplayData();
	return 0;
}
