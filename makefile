CXXFLAGS += -std=c++17

ex: main.o langs.o
	$(CXX) $(CXXFLAGS) -o langs main.o langs.o 
	
main.o: main.cpp langs.h
	$(CXX) $(CXXFLAGS) -c main.cpp 
	
langs.o: langs.h langs.cpp
	$(CXX) $(CXXFLAGS) -c langs.cpp 
	
cleanup:
	echo "Cleaning up object files and executable!"
	rm *.o
	rm langs