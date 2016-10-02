CXX=g++
CXXFLAGS= -Werror -Wextra -Wall

Empresa: main.cpp Empleados.cpp VecEmpresa.cpp
	$(CXX) $(CXXFLAGS) -o $@ $?

.PHONY: clean
clean:
	rm -f Empresa
