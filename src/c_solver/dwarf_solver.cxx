/* Dwarven Powertools Linear Equation Solver
   by Rugwiggle (#824424)

   License: GPL, any version, LGPL, any version, or BSD, at licensees 
   discretion. 

   (author likes GPLv3, but KoLMafia is BSD, and author likes license
   compatibility)
*/

#include <stdio.h>

int mods[8];
char valid[7][7];

struct input_line {
  int a, b, c, d;
  int val;
};

input_line input_constraints[1024];

// Select the ith value from c
#define SELECT_VAL(i,c) (((c)/mods[i])%7)

int input_count;

inline void read_input_constraints()
{
  int i;
  while(!feof(stdin)) {
    i=scanf("%i %i %i %i %i", &(input_constraints[input_count].a), 
	    	              &(input_constraints[input_count].b), 
	    	              &(input_constraints[input_count].c), 
	    	              &(input_constraints[input_count].d),
	    	              &(input_constraints[input_count].val));
    if(i!=5)
      return;
    input_count++;
  }
}

inline void print_input_constraints()
{
  int i;
  for(i=0; i<input_count; i++)
    printf("%i %i %i %i %i\n", input_constraints[i].a, 
	                       input_constraints[i].b, 
	    	               input_constraints[i].c, 
	    	               input_constraints[i].d,
	    	               input_constraints[i].val);

}

// Check if a combo is correct
inline int validate(int combo)
{
  int valid=1;
  int i;


  for(i=0; i<input_count; i++) {
    int a=SELECT_VAL(input_constraints[i].a, combo);
    int b=SELECT_VAL(input_constraints[i].b, combo);
    int c=SELECT_VAL(input_constraints[i].c, combo);
    int d=SELECT_VAL(input_constraints[i].d, combo);
    int val=input_constraints[i].val;

    //printf("%i %i %i %i = %i\n", a, b, c, d, val);

    if((a*7+b-c*7-d)!=(val/7)) {
      return 0;
    }
    
  }
  return 1;
}

// populate power-of-2 array
inline void init_mods()
{
  int i;
  mods[0]=1;
  for(i=0; i<7; i++)
    mods[i+1]=mods[i]*7;
}

void print_combo(int c)
{
  int i; 
  for(i=0; i<7; i++)
    printf("%i ", SELECT_VAL(i,c));
}


int main()
{
  int i,j;

  init_mods();
  read_input_constraints();
  print_input_constraints();

  int combos;
  
  for(combos=0; combos<823543; combos++) {
    if(validate(combos)) {
      for(i=0; i<7; i++)
	valid[i][SELECT_VAL(i, combos)]=1;
    }
  }

  for(i=0; i<7; i++) {
    printf("s%i: ", i);
    for(j=0; j<7; j++) {
      if(valid[i][j])
	printf("%i ", j);
      else
	printf(". ");
    }
    putchar('\n');
  }
}
