#include <systemc.h>
SC_MODULE(NandGate) {
sc_in<bool> a, b;
sc_out<bool> y;
void do_or() {
y.write(a.read() || b.read());
}
SC_CTOR(NandGate) {
SC_METHOD(do_or);
sensitive << a << b;
}
};
