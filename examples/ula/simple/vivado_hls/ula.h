#ifndef ULA_H
#define ULA_H

#include "systemc.h"

SC_MODULE(ula_new)
{
	sc_in <sc_uint<16> > A, B;
	sc_in <sc_uint<2> > op;
	sc_out <sc_uint<16> > C;
	
	void opUla();
	
	SC_CTOR(ula_new)
	{
		SC_METHOD(opUla);
		sensitive << A << B << op;
	}
};

#endif