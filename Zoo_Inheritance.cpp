#include <iostream>
#include <string>

class Animal {
public:
	std::string name;
	int age;
public:
	virtual void sound() {
		std::cout << "The sound that animal makes." << std::endl;
	}
	virtual void move() {
		std::cout << "How the animal moves." << std::endl;
	}
};

class Mammal :public Animal {
public:
	void sound() {
		std::cout << "The sound that mammal animals make." << std::endl;
	}
	void move() {
		std::cout << "Mammals walk on the ground." << std::endl;
	}
	
};

class Fish : public Animal {
public:
	void sound() {
		std::cout << "The sound that fishes make." << std::endl;
	}
	void move() {
		std::cout << "Fish swim." << std::endl;
	}

};

class Bird :public Animal {
public:
	void sound() {
		std::cout << "Birds are singing." << std::endl;
	}
	void move() {
		std::cout << "Birds are flying." << std::endl;
	}
};

class Cat : public Mammal {
public:
	void sound() {
		std::cout << "Cat says 'Meow'." << std::endl;
	}
	void move() {
		std::cout << "Cat walks on the ground." << std::endl;
	}
};

class Goldfish :public Fish {
public:
	void sound() {
		std::cout << "Goldfish is on mute." << std::endl;
	}
	void move() {
		std::cout << "Goldfish swims in the water." << std::endl;
	}
};

class Parrot :public Bird {
public:
	void sound() {
		std::cout << "Parrot can even talk sometimes." << std::endl;
	}
	void move() {
		std::cout << "Parrot flies in the air." << std::endl;
	}
};

int main() {

	Cat catoo;
	catoo.name = "Kitty";
	catoo.age = 2;

	std::cout << "The name of our cat is: " << catoo.name << std::endl;
	std::cout << "The age of our cat is: " << catoo.age << std::endl;

	catoo.sound();
	catoo.move();

	Goldfish nemo;
	nemo.sound();
	nemo.move();

	Parrot p;
	p.sound();
	p.move();
	

	return 0;
}