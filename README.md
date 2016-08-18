Kingdom of Loathing Rune Puzzle Solver
======================================

Welcome, adventurer!

I provide two tools to help solve the dwarven rune puzzle. Both of
these are quite crude, untested, and so on (they are, to the best of
my knowledge, first-to-market, however). Caveat emptor!

Not an adventurer? Don't know what the rune puzzle is? Well guess
what, neither do I. Apparently it's a puzzle in an online game I
solved at some point. Apparently people were using my tools
occassionally still. And in a web site migration, I decided to move
this from my server to `github`, since that's where all the cool kids
seem to play these days.

The word rune tool is a static HTML page (words.html) to help you keep
track of which rune means what. As you visit the warehouse, simply
check off the possibilities, and remove the remaining
possibilities. When you're done, simply print to file from
Firefox. You're best off using it from rawgit.com. 

The Digit rune tool is a small solver for the equations from the
dormitory. This tool requires a C compiler to use. Known bugs: Doesn't
handle the special case of paired zeros (easy to add, so I'll probably
add this soon). Not in Python. Not distributed as an executable (you
need to compile it yourself -- this is easy on GNU/Linux, but hard for
typical Windows users -- I might make an executable next time I'm near
a Windows box with VisualStudio).

Instructions for how to solve the puzzles are at:
  http://kol.coldfront.net/thekolwiki/index.php/Dwarven_Factory_Complex_Puzzle#Dwarf_Digit_Runes

This is all in the public domain. Goodness knows I'll never look at it
again.