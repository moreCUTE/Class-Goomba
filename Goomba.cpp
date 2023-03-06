#include<iostream>
using namespace std;


class Goomba {
private:
	int xpos;
	int ypos;
	bool isAlive;
	char color;
public:
	Goomba(); //default condtructor 
	Goomba(int x, int y, char c);// parameterized constructor
	void walk();
	void printInfo();
	void kill();
	void setPosition(int x, int y);
	bool CheckIsDead();


};


int main() {
	Goomba Lary(300, 400, 'l');
	Goomba Bob;
	Lary.printInfo();
	Lary.walk();
	Lary.printInfo();
	Bob.printInfo();
	

}


Goomba::Goomba() { //default constructor
	xpos = 0;
	ypos = 0;
	isAlive = false;
	color = 'b';
}

Goomba::Goomba(int x, int y, char c) { // parameterized constructor
	xpos = x;
	ypos = y;
	isAlive = true;
	color = c;

}

void Goomba::walk() { xpos += 1; }

void Goomba::printInfo() {
	cout << "hi im goomba m postiontioon at " << xpos << "," << ypos << endl;
	if (isAlive == true)
		cout << "I am alive rn." << endl;
	else
		cout << "im dead cuh." << endl;
	if (color == 'b')
		cout << "I am brown" << endl;
	else
		cout << "I am blue" << endl;
}
	
void Goomba::kill() { isAlive == false; }

void Goomba::setPosition(int x, int y) {
	xpos = x;
	ypos = y;
	isAlive = true;

}

bool Goomba::CheckIsDead() { return isAlive; }
