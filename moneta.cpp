#include <iostream>
#include <random>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;

class Moneta{
	private:
		int faccia;
	public:
		Moneta(){
			srand(time(NULL));
		}
		
		void lancia(){
			faccia = rand() % 2;
		}
		
		string toString(){
			return (faccia==0) ? "TESTA" : "CROCE";
		}
};

class ProvaMoneta{
	public:
		void mai(){
			int scelta, t=0, c=0;
			cout << "Scegli testa (0) o croce (1)\n";
			cin >> scelta;
			Moneta m = Moneta();
			cout << "Lancio le 5 monete\n";
			for(int i=0; i<5; i++){
				m.lancia();
				if(m.toString() == "TESTA"){
					t++;
				}
				else{
					c++;
				}
				cout << m.toString() << endl;
			}
			cout << "Il risultato dei lanci è " << t << " TESTA e " << c << " CROCE\n";
			if(t > c){
				if(scelta==0) cout << "HAI VINTO!!";
				else cout << "HA VINTO IL PC :(";
			}
			else{
				if(scelta==1) cout << "HAI VINTO!!";
				else cout << "HA VINTO IL PC :(";
			}
		}
};

int main(){
	ProvaMoneta c;
	c.mai();
}
