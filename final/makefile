#creates the titan and CinReader file
titantest: titan.o CinReader.o
	g++ -Wall -g -o titantest titan.o CinReader.o
	
#creates the rocket object
rocketship: rocketship.cpp rocketship.h
	g++ -Wall -g -c rocketship.cpp
	
#creates the specialrocket object
specialrocketship: specialrocketship.cpp specialrocketship.h
	g++ -Wall -g -c specialrocketship.cpp
	
#creates the activator object
activator: activator.cpp activator.h
	g++ -Wall -g -c activator.cpp
	
#creates the saturn unit test object file
saturnunittest: saturn_test.cpp
	g++ -Wall -g -c saturn_test.cpp

#creates the saturn rocket unit test executable
saturnrockettest: saturn_test.o rocketship.o
	g++ -Wall -g -o saturntest saturn_test.o rocketship.o
	
#creates the saturn rocketship executable
saturnlaunch: saturn.o rocketship.o CinReader.o
	g++ -Wall -g -o saturnlaunch saturn.o rocketship.o CinReader.o

#creates the jupiter unit test object file
jupiterunittest: jupiter_test.cpp
	g++ -Wall -g -c jupiter_test.cpp

#creates the jupiter rocket unit test executable
jupiterrockettest: jupiter_test.o rocketship.o
	g++ -Wall -g -o jupitertest jupiter_test.o rocketship.o
	
#creates the jupiter rocketship executable
jupiterlaunch: jupiter.o rocketship.o CinReader.o
	g++ -Wall -g -o jupiterlaunch jupiter.o rocketship.o CinReader.o

#creates the mars unit test object file
marsunittest: mars_test.cpp
	g++ -Wall -g -c mars_test.cpp

#creates the mars rocket unit test executable
marsrockettest: mars_test.o rocketship.o specialrocketship.o
	g++ -Wall -g -o marstest mars_test.o rocketship.o specialrocketship.o
	
#creates the mars rocketship executable
marslaunch: mars.o rocketship.o specialrocketship.o CinReader.o
	g++ -Wall -g -o marslaunch mars.o rocketship.o specialrocketship.o /CinReader.o
	
#creates the earth unit test object file
earthunittest: earth_test.cpp
	g++ -Wall -g -c earth_test.cpp

#creates the earth rocket unit test executable
earthrockettest: earth_test.o activator.o
	g++ -Wall -g -o earthtest earth_test.o activator.o
	
#creates the earth rocketship executable
earthlaunch: earth.o rocketship.o activator.o CinReader.o
	g++ -Wall -g -o earthlaunch earth.o activator.o CinReader.o

#creates the megaweapon executable
weaponlaunch: megaweapon.o CinReader.o
	g++ -Wall -g -o megaweaponlaunch megaweapon.o CinReader.o

#cleans up old .o files	*.o
clean:
	rm *test