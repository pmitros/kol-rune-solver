These instructions assume GNU/Linux. This should work under MacOS,
but is untested.

I recommend legacy OS users (DOS, VMS, Windows, CP/M, OS/2, etc.)
upgrade to something modern.

To use: 

Compile dwarf_solver.cxx:
  g++ dwarf_solver.cxx -o ds

Run on sample file: 
  ./ds < sample

Modify sample file for your rune settings. Format is: 

  7*[column 1]+[column 2]-7*[column 3]-[column 4]=[column 5]/7
