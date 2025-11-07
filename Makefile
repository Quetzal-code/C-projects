
all:
g++ main.cpp -I /usr/local/systemc/include -L
/usr/local/systemc/lib-linux -lsystemc -lm -o logic_gates
./logic_gates
