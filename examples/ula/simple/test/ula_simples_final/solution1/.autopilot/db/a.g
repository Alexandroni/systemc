#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/alexandroni/Dropbox/TCC-JOAO-PEDRO/Vivado/final/examples/ula/simple/test/ula_simples_final/solution1/.autopilot/db/a.g.bc ${1+"$@"}
