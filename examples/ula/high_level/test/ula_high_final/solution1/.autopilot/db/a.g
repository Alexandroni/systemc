#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/alexandroni/Dropbox/TCC-JOAO-PEDRO/Vivado/final/examples/ula/high_level/test/ula_high_final/solution1/.autopilot/db/a.g.bc ${1+"$@"}
